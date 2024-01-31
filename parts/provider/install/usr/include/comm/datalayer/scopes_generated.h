// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_SCOPES_COMM_DATALAYER_H_
#define FLATBUFFERS_GENERATED_SCOPES_COMM_DATALAYER_H_

#include "flatbuffers/flatbuffers.h"

#include "scope_generated.h"

namespace comm {
namespace datalayer {

struct Scopes;
struct ScopesBuilder;
struct ScopesT;

struct ScopesT : public flatbuffers::NativeTable {
  typedef Scopes TableType;
  std::vector<std::unique_ptr<comm::datalayer::ScopeT>> scopes{};
};

struct Scopes FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef ScopesT NativeTableType;
  typedef ScopesBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_SCOPES = 4
  };
  /// List of scopes
  const flatbuffers::Vector<flatbuffers::Offset<comm::datalayer::Scope>> *scopes() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<comm::datalayer::Scope>> *>(VT_SCOPES);
  }
  flatbuffers::Vector<flatbuffers::Offset<comm::datalayer::Scope>> *mutable_scopes() {
    return GetPointer<flatbuffers::Vector<flatbuffers::Offset<comm::datalayer::Scope>> *>(VT_SCOPES);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_SCOPES) &&
           verifier.VerifyVector(scopes()) &&
           verifier.VerifyVectorOfTables(scopes()) &&
           verifier.EndTable();
  }
  ScopesT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(ScopesT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<Scopes> Pack(flatbuffers::FlatBufferBuilder &_fbb, const ScopesT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct ScopesBuilder {
  typedef Scopes Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_scopes(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<comm::datalayer::Scope>>> scopes) {
    fbb_.AddOffset(Scopes::VT_SCOPES, scopes);
  }
  explicit ScopesBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Scopes> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Scopes>(end);
    return o;
  }
};

inline flatbuffers::Offset<Scopes> CreateScopes(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<comm::datalayer::Scope>>> scopes = 0) {
  ScopesBuilder builder_(_fbb);
  builder_.add_scopes(scopes);
  return builder_.Finish();
}

inline flatbuffers::Offset<Scopes> CreateScopesDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    std::vector<flatbuffers::Offset<comm::datalayer::Scope>> *scopes = nullptr) {
  auto scopes__ = scopes ? _fbb.CreateVectorOfSortedTables<comm::datalayer::Scope>(scopes) : 0;
  return comm::datalayer::CreateScopes(
      _fbb,
      scopes__);
}

flatbuffers::Offset<Scopes> CreateScopes(flatbuffers::FlatBufferBuilder &_fbb, const ScopesT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

inline ScopesT *Scopes::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = std::unique_ptr<ScopesT>(new ScopesT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void Scopes::UnPackTo(ScopesT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = scopes(); if (_e) { _o->scopes.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->scopes[_i] = std::unique_ptr<comm::datalayer::ScopeT>(_e->Get(_i)->UnPack(_resolver)); } } }
}

inline flatbuffers::Offset<Scopes> Scopes::Pack(flatbuffers::FlatBufferBuilder &_fbb, const ScopesT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateScopes(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<Scopes> CreateScopes(flatbuffers::FlatBufferBuilder &_fbb, const ScopesT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ScopesT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _scopes = _o->scopes.size() ? _fbb.CreateVector<flatbuffers::Offset<comm::datalayer::Scope>> (_o->scopes.size(), [](size_t i, _VectorArgs *__va) { return CreateScope(*__va->__fbb, __va->__o->scopes[i].get(), __va->__rehasher); }, &_va ) : 0;
  return comm::datalayer::CreateScopes(
      _fbb,
      _scopes);
}

inline const comm::datalayer::Scopes *GetScopes(const void *buf) {
  return flatbuffers::GetRoot<comm::datalayer::Scopes>(buf);
}

inline const comm::datalayer::Scopes *GetSizePrefixedScopes(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<comm::datalayer::Scopes>(buf);
}

inline Scopes *GetMutableScopes(void *buf) {
  return flatbuffers::GetMutableRoot<Scopes>(buf);
}

inline bool VerifyScopesBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<comm::datalayer::Scopes>(nullptr);
}

inline bool VerifySizePrefixedScopesBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<comm::datalayer::Scopes>(nullptr);
}

inline void FinishScopesBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<comm::datalayer::Scopes> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedScopesBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<comm::datalayer::Scopes> root) {
  fbb.FinishSizePrefixed(root);
}

inline std::unique_ptr<comm::datalayer::ScopesT> UnPackScopes(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<comm::datalayer::ScopesT>(GetScopes(buf)->UnPack(res));
}

inline std::unique_ptr<comm::datalayer::ScopesT> UnPackSizePrefixedScopes(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<comm::datalayer::ScopesT>(GetSizePrefixedScopes(buf)->UnPack(res));
}

}  // namespace datalayer
}  // namespace comm

#endif  // FLATBUFFERS_GENERATED_SCOPES_COMM_DATALAYER_H_
