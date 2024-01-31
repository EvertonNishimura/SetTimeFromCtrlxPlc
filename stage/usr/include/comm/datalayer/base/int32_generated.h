// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_INT32_COMM_DATALAYER_H_
#define FLATBUFFERS_GENERATED_INT32_COMM_DATALAYER_H_

#include "flatbuffers/flatbuffers.h"

namespace comm {
namespace datalayer {

struct Int32;
struct Int32Builder;
struct Int32T;

struct Int32T : public flatbuffers::NativeTable {
  typedef Int32 TableType;
  int32_t value = 0;
};

struct Int32 FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef Int32T NativeTableType;
  typedef Int32Builder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_VALUE = 4
  };
  int32_t value() const {
    return GetField<int32_t>(VT_VALUE, 0);
  }
  bool mutate_value(int32_t _value) {
    return SetField<int32_t>(VT_VALUE, _value, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_VALUE) &&
           verifier.EndTable();
  }
  Int32T *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(Int32T *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<Int32> Pack(flatbuffers::FlatBufferBuilder &_fbb, const Int32T* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct Int32Builder {
  typedef Int32 Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_value(int32_t value) {
    fbb_.AddElement<int32_t>(Int32::VT_VALUE, value, 0);
  }
  explicit Int32Builder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Int32> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Int32>(end);
    return o;
  }
};

inline flatbuffers::Offset<Int32> CreateInt32(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t value = 0) {
  Int32Builder builder_(_fbb);
  builder_.add_value(value);
  return builder_.Finish();
}

flatbuffers::Offset<Int32> CreateInt32(flatbuffers::FlatBufferBuilder &_fbb, const Int32T *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

inline Int32T *Int32::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = std::unique_ptr<Int32T>(new Int32T());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void Int32::UnPackTo(Int32T *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = value(); _o->value = _e; }
}

inline flatbuffers::Offset<Int32> Int32::Pack(flatbuffers::FlatBufferBuilder &_fbb, const Int32T* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateInt32(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<Int32> CreateInt32(flatbuffers::FlatBufferBuilder &_fbb, const Int32T *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const Int32T* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _value = _o->value;
  return comm::datalayer::CreateInt32(
      _fbb,
      _value);
}

inline const comm::datalayer::Int32 *GetInt32(const void *buf) {
  return flatbuffers::GetRoot<comm::datalayer::Int32>(buf);
}

inline const comm::datalayer::Int32 *GetSizePrefixedInt32(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<comm::datalayer::Int32>(buf);
}

inline Int32 *GetMutableInt32(void *buf) {
  return flatbuffers::GetMutableRoot<Int32>(buf);
}

inline bool VerifyInt32Buffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<comm::datalayer::Int32>(nullptr);
}

inline bool VerifySizePrefixedInt32Buffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<comm::datalayer::Int32>(nullptr);
}

inline void FinishInt32Buffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<comm::datalayer::Int32> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedInt32Buffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<comm::datalayer::Int32> root) {
  fbb.FinishSizePrefixed(root);
}

inline std::unique_ptr<comm::datalayer::Int32T> UnPackInt32(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<comm::datalayer::Int32T>(GetInt32(buf)->UnPack(res));
}

inline std::unique_ptr<comm::datalayer::Int32T> UnPackSizePrefixedInt32(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<comm::datalayer::Int32T>(GetSizePrefixedInt32(buf)->UnPack(res));
}

}  // namespace datalayer
}  // namespace comm

#endif  // FLATBUFFERS_GENERATED_INT32_COMM_DATALAYER_H_