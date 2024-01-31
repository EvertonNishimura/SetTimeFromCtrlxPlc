// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_ARRAYOFUINT64_COMM_DATALAYER_H_
#define FLATBUFFERS_GENERATED_ARRAYOFUINT64_COMM_DATALAYER_H_

#include "flatbuffers/flatbuffers.h"

namespace comm {
namespace datalayer {

struct ArrayOfUInt64;
struct ArrayOfUInt64Builder;
struct ArrayOfUInt64T;

struct ArrayOfUInt64T : public flatbuffers::NativeTable {
  typedef ArrayOfUInt64 TableType;
  std::vector<uint64_t> value{};
};

struct ArrayOfUInt64 FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef ArrayOfUInt64T NativeTableType;
  typedef ArrayOfUInt64Builder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_VALUE = 4
  };
  const flatbuffers::Vector<uint64_t> *value() const {
    return GetPointer<const flatbuffers::Vector<uint64_t> *>(VT_VALUE);
  }
  flatbuffers::Vector<uint64_t> *mutable_value() {
    return GetPointer<flatbuffers::Vector<uint64_t> *>(VT_VALUE);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_VALUE) &&
           verifier.VerifyVector(value()) &&
           verifier.EndTable();
  }
  ArrayOfUInt64T *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(ArrayOfUInt64T *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<ArrayOfUInt64> Pack(flatbuffers::FlatBufferBuilder &_fbb, const ArrayOfUInt64T* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct ArrayOfUInt64Builder {
  typedef ArrayOfUInt64 Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_value(flatbuffers::Offset<flatbuffers::Vector<uint64_t>> value) {
    fbb_.AddOffset(ArrayOfUInt64::VT_VALUE, value);
  }
  explicit ArrayOfUInt64Builder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<ArrayOfUInt64> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<ArrayOfUInt64>(end);
    return o;
  }
};

inline flatbuffers::Offset<ArrayOfUInt64> CreateArrayOfUInt64(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<uint64_t>> value = 0) {
  ArrayOfUInt64Builder builder_(_fbb);
  builder_.add_value(value);
  return builder_.Finish();
}

inline flatbuffers::Offset<ArrayOfUInt64> CreateArrayOfUInt64Direct(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<uint64_t> *value = nullptr) {
  auto value__ = value ? _fbb.CreateVector<uint64_t>(*value) : 0;
  return comm::datalayer::CreateArrayOfUInt64(
      _fbb,
      value__);
}

flatbuffers::Offset<ArrayOfUInt64> CreateArrayOfUInt64(flatbuffers::FlatBufferBuilder &_fbb, const ArrayOfUInt64T *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

inline ArrayOfUInt64T *ArrayOfUInt64::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = std::unique_ptr<ArrayOfUInt64T>(new ArrayOfUInt64T());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void ArrayOfUInt64::UnPackTo(ArrayOfUInt64T *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = value(); if (_e) { _o->value.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->value[_i] = _e->Get(_i); } } }
}

inline flatbuffers::Offset<ArrayOfUInt64> ArrayOfUInt64::Pack(flatbuffers::FlatBufferBuilder &_fbb, const ArrayOfUInt64T* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateArrayOfUInt64(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<ArrayOfUInt64> CreateArrayOfUInt64(flatbuffers::FlatBufferBuilder &_fbb, const ArrayOfUInt64T *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ArrayOfUInt64T* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _value = _o->value.size() ? _fbb.CreateVector(_o->value) : 0;
  return comm::datalayer::CreateArrayOfUInt64(
      _fbb,
      _value);
}

inline const comm::datalayer::ArrayOfUInt64 *GetArrayOfUInt64(const void *buf) {
  return flatbuffers::GetRoot<comm::datalayer::ArrayOfUInt64>(buf);
}

inline const comm::datalayer::ArrayOfUInt64 *GetSizePrefixedArrayOfUInt64(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<comm::datalayer::ArrayOfUInt64>(buf);
}

inline ArrayOfUInt64 *GetMutableArrayOfUInt64(void *buf) {
  return flatbuffers::GetMutableRoot<ArrayOfUInt64>(buf);
}

inline bool VerifyArrayOfUInt64Buffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<comm::datalayer::ArrayOfUInt64>(nullptr);
}

inline bool VerifySizePrefixedArrayOfUInt64Buffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<comm::datalayer::ArrayOfUInt64>(nullptr);
}

inline void FinishArrayOfUInt64Buffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<comm::datalayer::ArrayOfUInt64> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedArrayOfUInt64Buffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<comm::datalayer::ArrayOfUInt64> root) {
  fbb.FinishSizePrefixed(root);
}

inline std::unique_ptr<comm::datalayer::ArrayOfUInt64T> UnPackArrayOfUInt64(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<comm::datalayer::ArrayOfUInt64T>(GetArrayOfUInt64(buf)->UnPack(res));
}

inline std::unique_ptr<comm::datalayer::ArrayOfUInt64T> UnPackSizePrefixedArrayOfUInt64(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<comm::datalayer::ArrayOfUInt64T>(GetSizePrefixedArrayOfUInt64(buf)->UnPack(res));
}

}  // namespace datalayer
}  // namespace comm

#endif  // FLATBUFFERS_GENERATED_ARRAYOFUINT64_COMM_DATALAYER_H_