#!/bin/bash
set -e
# Environment
## Part Environment
export SNAPCRAFT_ARCH_BUILD_FOR="amd64"
export SNAPCRAFT_ARCH_BUILD_ON="amd64"
export SNAPCRAFT_ARCH_TRIPLET_BUILD_FOR="x86_64-linux-gnu"
export SNAPCRAFT_ARCH_TRIPLET_BUILD_ON="x86_64-linux-gnu"
export SNAPCRAFT_ARCH_TRIPLET="x86_64-linux-gnu"
export SNAPCRAFT_EXTENSIONS_DIR="/snap/snapcraft/10436/share/snapcraft/extensions"
export SNAPCRAFT_PARALLEL_BUILD_COUNT="4"
export SNAPCRAFT_PRIME="/home/boschrexroth/datalayer.provider.SetTime/prime"
export SNAPCRAFT_PROJECT_NAME="set-time-from-plc"
export SNAPCRAFT_PROJECT_VERSION="0.0.1"
export SNAPCRAFT_PROJECT_DIR="/home/boschrexroth/datalayer.provider.SetTime"
export SNAPCRAFT_PROJECT_GRADE="stable"
export SNAPCRAFT_STAGE="/home/boschrexroth/datalayer.provider.SetTime/stage"
export SNAPCRAFT_TARGET_ARCH="amd64"
export SNAPCRAFT_CONTENT_DIRS=""
export SNAPCRAFT_PART_SRC="/home/boschrexroth/datalayer.provider.SetTime/parts/provider/src"
export SNAPCRAFT_PART_SRC_WORK="/home/boschrexroth/datalayer.provider.SetTime/parts/provider/src/"
export SNAPCRAFT_PART_BUILD="/home/boschrexroth/datalayer.provider.SetTime/parts/provider/build"
export SNAPCRAFT_PART_BUILD_WORK="/home/boschrexroth/datalayer.provider.SetTime/parts/provider/build/"
export SNAPCRAFT_PART_INSTALL="/home/boschrexroth/datalayer.provider.SetTime/parts/provider/install"
export PATH="/home/boschrexroth/datalayer.provider.SetTime/parts/provider/install/usr/bin:$PATH"
export CPPFLAGS="-isystem/home/boschrexroth/datalayer.provider.SetTime/parts/provider/install/usr/include"
export CFLAGS="-isystem/home/boschrexroth/datalayer.provider.SetTime/parts/provider/install/usr/include"
export CXXFLAGS="-isystem/home/boschrexroth/datalayer.provider.SetTime/parts/provider/install/usr/include"
export LDFLAGS="-L/home/boschrexroth/datalayer.provider.SetTime/parts/provider/install/usr/lib -L/home/boschrexroth/datalayer.provider.SetTime/parts/provider/install/usr/lib/x86_64-linux-gnu"
## Plugin Environment
export PATH="${SNAPCRAFT_PART_INSTALL}/bin:${PATH}"
export SNAPCRAFT_PYTHON_INTERPRETER="python3"
export SNAPCRAFT_PYTHON_VENV_ARGS=""
## User Environment

set -xeuo pipefail
"${SNAPCRAFT_PYTHON_INTERPRETER}" -m venv ${SNAPCRAFT_PYTHON_VENV_ARGS} "${SNAPCRAFT_PART_INSTALL}"
SNAPCRAFT_PYTHON_VENV_INTERP_PATH="${SNAPCRAFT_PART_INSTALL}/bin/${SNAPCRAFT_PYTHON_INTERPRETER}"
pip install  -U pip setuptools wheel
pip install  -U -r 'requirements.txt'
[ -f setup.py -o -f pyproject.toml ] && pip install  -U .
find "${SNAPCRAFT_PART_INSTALL}" -type f -executable -print0 | xargs -0                 sed -i "1 s|^#\!${SNAPCRAFT_PYTHON_VENV_INTERP_PATH}.*$|#\!/usr/bin/env ${SNAPCRAFT_PYTHON_INTERPRETER}|"

determine_link_target() {
    opts_state="$(set +o +x | grep xtrace)"
    interp_dir="$(dirname "${SNAPCRAFT_PYTHON_VENV_INTERP_PATH}")"
    # Determine python based on PATH, then resolve it, e.g:
    # (1) /home/ubuntu/.venv/snapcraft/bin/python3 -> /usr/bin/python3.8
    # (2) /usr/bin/python3 -> /usr/bin/python3.8
    # (3) /root/stage/python3 -> /root/stage/python3.8
    # (4) /root/parts/<part>/install/usr/bin/python3 -> /root/parts/<part>/install/usr/bin/python3.8
    python_path="$(which "${SNAPCRAFT_PYTHON_INTERPRETER}")"
    python_path="$(readlink -e "${python_path}")"
    for dir in "${SNAPCRAFT_PART_INSTALL}" "${SNAPCRAFT_STAGE}"; do
        if  echo "${python_path}" | grep -q "${dir}"; then
            python_path="$(realpath --strip --relative-to="${interp_dir}" \
                    "${python_path}")"
            break
        fi
    done
    echo "${python_path}"
    eval "${opts_state}"
}

python_path="$(determine_link_target)"
ln -sf "${python_path}" "${SNAPCRAFT_PYTHON_VENV_INTERP_PATH}"
