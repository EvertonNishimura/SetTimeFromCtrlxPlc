// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_MESSAGEDETAIL_COMM_DATALAYER_H_
#define FLATBUFFERS_GENERATED_MESSAGEDETAIL_COMM_DATALAYER_H_

#include "flatbuffers/flatbuffers.h"

namespace comm {
namespace datalayer {

struct MessageDetail;
struct MessageDetailBuilder;
struct MessageDetailT;

struct MessageDetailT : public flatbuffers::NativeTable {
  typedef MessageDetail TableType;
  uint64_t timestamp = 0;
};

struct MessageDetail FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef MessageDetailT NativeTableType;
  typedef MessageDetailBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_TIMESTAMP = 4
  };
  /// source timestamp of message as FILETIME
  uint64_t timestamp() const {
    return GetField<uint64_t>(VT_TIMESTAMP, 0);
  }
  bool mutate_timestamp(uint64_t _timestamp) {
    return SetField<uint64_t>(VT_TIMESTAMP, _timestamp, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint64_t>(verifier, VT_TIMESTAMP) &&
           verifier.EndTable();
  }
  MessageDetailT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(MessageDetailT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<MessageDetail> Pack(flatbuffers::FlatBufferBuilder &_fbb, const MessageDetailT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct MessageDetailBuilder {
  typedef MessageDetail Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_timestamp(uint64_t timestamp) {
    fbb_.AddElement<uint64_t>(MessageDetail::VT_TIMESTAMP, timestamp, 0);
  }
  explicit MessageDetailBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<MessageDetail> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<MessageDetail>(end);
    return o;
  }
};

inline flatbuffers::Offset<MessageDetail> CreateMessageDetail(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t timestamp = 0) {
  MessageDetailBuilder builder_(_fbb);
  builder_.add_timestamp(timestamp);
  return builder_.Finish();
}

flatbuffers::Offset<MessageDetail> CreateMessageDetail(flatbuffers::FlatBufferBuilder &_fbb, const MessageDetailT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

inline MessageDetailT *MessageDetail::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = std::unique_ptr<MessageDetailT>(new MessageDetailT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void MessageDetail::UnPackTo(MessageDetailT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = timestamp(); _o->timestamp = _e; }
}

inline flatbuffers::Offset<MessageDetail> MessageDetail::Pack(flatbuffers::FlatBufferBuilder &_fbb, const MessageDetailT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateMessageDetail(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<MessageDetail> CreateMessageDetail(flatbuffers::FlatBufferBuilder &_fbb, const MessageDetailT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const MessageDetailT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _timestamp = _o->timestamp;
  return comm::datalayer::CreateMessageDetail(
      _fbb,
      _timestamp);
}

inline const comm::datalayer::MessageDetail *GetMessageDetail(const void *buf) {
  return flatbuffers::GetRoot<comm::datalayer::MessageDetail>(buf);
}

inline const comm::datalayer::MessageDetail *GetSizePrefixedMessageDetail(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<comm::datalayer::MessageDetail>(buf);
}

inline MessageDetail *GetMutableMessageDetail(void *buf) {
  return flatbuffers::GetMutableRoot<MessageDetail>(buf);
}

inline bool VerifyMessageDetailBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<comm::datalayer::MessageDetail>(nullptr);
}

inline bool VerifySizePrefixedMessageDetailBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<comm::datalayer::MessageDetail>(nullptr);
}

inline void FinishMessageDetailBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<comm::datalayer::MessageDetail> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedMessageDetailBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<comm::datalayer::MessageDetail> root) {
  fbb.FinishSizePrefixed(root);
}

inline std::unique_ptr<comm::datalayer::MessageDetailT> UnPackMessageDetail(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<comm::datalayer::MessageDetailT>(GetMessageDetail(buf)->UnPack(res));
}

inline std::unique_ptr<comm::datalayer::MessageDetailT> UnPackSizePrefixedMessageDetail(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<comm::datalayer::MessageDetailT>(GetSizePrefixedMessageDetail(buf)->UnPack(res));
}

}  // namespace datalayer
}  // namespace comm

#endif  // FLATBUFFERS_GENERATED_MESSAGEDETAIL_COMM_DATALAYER_H_
