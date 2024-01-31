// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_CHECKOPERATIONS_COMM_DATALAYER_H_
#define FLATBUFFERS_GENERATED_CHECKOPERATIONS_COMM_DATALAYER_H_

#include "flatbuffers/flatbuffers.h"

namespace comm {
namespace datalayer {

struct CheckOperations;
struct CheckOperationsBuilder;
struct CheckOperationsT;

struct CheckOperationsT : public flatbuffers::NativeTable {
  typedef CheckOperations TableType;
  std::string address{};
  std::string token{};
};

struct CheckOperations FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef CheckOperationsT NativeTableType;
  typedef CheckOperationsBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_ADDRESS = 4,
    VT_TOKEN = 6
  };
  /// address to check
  const flatbuffers::String *address() const {
    return GetPointer<const flatbuffers::String *>(VT_ADDRESS);
  }
  flatbuffers::String *mutable_address() {
    return GetPointer<flatbuffers::String *>(VT_ADDRESS);
  }
  /// token to check
  const flatbuffers::String *token() const {
    return GetPointer<const flatbuffers::String *>(VT_TOKEN);
  }
  flatbuffers::String *mutable_token() {
    return GetPointer<flatbuffers::String *>(VT_TOKEN);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_ADDRESS) &&
           verifier.VerifyString(address()) &&
           VerifyOffset(verifier, VT_TOKEN) &&
           verifier.VerifyString(token()) &&
           verifier.EndTable();
  }
  CheckOperationsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(CheckOperationsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<CheckOperations> Pack(flatbuffers::FlatBufferBuilder &_fbb, const CheckOperationsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct CheckOperationsBuilder {
  typedef CheckOperations Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_address(flatbuffers::Offset<flatbuffers::String> address) {
    fbb_.AddOffset(CheckOperations::VT_ADDRESS, address);
  }
  void add_token(flatbuffers::Offset<flatbuffers::String> token) {
    fbb_.AddOffset(CheckOperations::VT_TOKEN, token);
  }
  explicit CheckOperationsBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<CheckOperations> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<CheckOperations>(end);
    return o;
  }
};

inline flatbuffers::Offset<CheckOperations> CreateCheckOperations(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> address = 0,
    flatbuffers::Offset<flatbuffers::String> token = 0) {
  CheckOperationsBuilder builder_(_fbb);
  builder_.add_token(token);
  builder_.add_address(address);
  return builder_.Finish();
}

inline flatbuffers::Offset<CheckOperations> CreateCheckOperationsDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *address = nullptr,
    const char *token = nullptr) {
  auto address__ = address ? _fbb.CreateString(address) : 0;
  auto token__ = token ? _fbb.CreateString(token) : 0;
  return comm::datalayer::CreateCheckOperations(
      _fbb,
      address__,
      token__);
}

flatbuffers::Offset<CheckOperations> CreateCheckOperations(flatbuffers::FlatBufferBuilder &_fbb, const CheckOperationsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

inline CheckOperationsT *CheckOperations::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = std::unique_ptr<CheckOperationsT>(new CheckOperationsT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void CheckOperations::UnPackTo(CheckOperationsT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = address(); if (_e) _o->address = _e->str(); }
  { auto _e = token(); if (_e) _o->token = _e->str(); }
}

inline flatbuffers::Offset<CheckOperations> CheckOperations::Pack(flatbuffers::FlatBufferBuilder &_fbb, const CheckOperationsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateCheckOperations(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<CheckOperations> CreateCheckOperations(flatbuffers::FlatBufferBuilder &_fbb, const CheckOperationsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const CheckOperationsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _address = _o->address.empty() ? 0 : _fbb.CreateString(_o->address);
  auto _token = _o->token.empty() ? 0 : _fbb.CreateString(_o->token);
  return comm::datalayer::CreateCheckOperations(
      _fbb,
      _address,
      _token);
}

inline const comm::datalayer::CheckOperations *GetCheckOperations(const void *buf) {
  return flatbuffers::GetRoot<comm::datalayer::CheckOperations>(buf);
}

inline const comm::datalayer::CheckOperations *GetSizePrefixedCheckOperations(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<comm::datalayer::CheckOperations>(buf);
}

inline CheckOperations *GetMutableCheckOperations(void *buf) {
  return flatbuffers::GetMutableRoot<CheckOperations>(buf);
}

inline bool VerifyCheckOperationsBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<comm::datalayer::CheckOperations>(nullptr);
}

inline bool VerifySizePrefixedCheckOperationsBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<comm::datalayer::CheckOperations>(nullptr);
}

inline void FinishCheckOperationsBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<comm::datalayer::CheckOperations> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedCheckOperationsBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<comm::datalayer::CheckOperations> root) {
  fbb.FinishSizePrefixed(root);
}

inline std::unique_ptr<comm::datalayer::CheckOperationsT> UnPackCheckOperations(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<comm::datalayer::CheckOperationsT>(GetCheckOperations(buf)->UnPack(res));
}

inline std::unique_ptr<comm::datalayer::CheckOperationsT> UnPackSizePrefixedCheckOperations(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<comm::datalayer::CheckOperationsT>(GetSizePrefixedCheckOperations(buf)->UnPack(res));
}

}  // namespace datalayer
}  // namespace comm

#endif  // FLATBUFFERS_GENERATED_CHECKOPERATIONS_COMM_DATALAYER_H_