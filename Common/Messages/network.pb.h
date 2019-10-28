// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: network.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_network_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_network_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3010000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3010000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/any.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_network_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_network_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_network_2eproto;
namespace messages {
class Datagram;
class DatagramDefaultTypeInternal;
extern DatagramDefaultTypeInternal _Datagram_default_instance_;
class Endpoint;
class EndpointDefaultTypeInternal;
extern EndpointDefaultTypeInternal _Endpoint_default_instance_;
class Ping;
class PingDefaultTypeInternal;
extern PingDefaultTypeInternal _Ping_default_instance_;
}  // namespace messages
PROTOBUF_NAMESPACE_OPEN
template<> ::messages::Datagram* Arena::CreateMaybeMessage<::messages::Datagram>(Arena*);
template<> ::messages::Endpoint* Arena::CreateMaybeMessage<::messages::Endpoint>(Arena*);
template<> ::messages::Ping* Arena::CreateMaybeMessage<::messages::Ping>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace messages {

enum Endpoint_Type : int {
  Endpoint_Type_UNDEFINED = 0,
  Endpoint_Type_ACQUISITOR = 1,
  Endpoint_Type_BROADCASTER = 2,
  Endpoint_Type_MASTER = 3,
  Endpoint_Type_TERMINAL = 4,
  Endpoint_Type_Endpoint_Type_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  Endpoint_Type_Endpoint_Type_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool Endpoint_Type_IsValid(int value);
constexpr Endpoint_Type Endpoint_Type_Type_MIN = Endpoint_Type_UNDEFINED;
constexpr Endpoint_Type Endpoint_Type_Type_MAX = Endpoint_Type_TERMINAL;
constexpr int Endpoint_Type_Type_ARRAYSIZE = Endpoint_Type_Type_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Endpoint_Type_descriptor();
template<typename T>
inline const std::string& Endpoint_Type_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Endpoint_Type>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Endpoint_Type_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Endpoint_Type_descriptor(), enum_t_value);
}
inline bool Endpoint_Type_Parse(
    const std::string& name, Endpoint_Type* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Endpoint_Type>(
    Endpoint_Type_descriptor(), name, value);
}
enum Datagram_Type : int {
  Datagram_Type_UNDEFINED = 0,
  Datagram_Type_CLOSE = 5,
  Datagram_Type_HEARTBEAT = 7,
  Datagram_Type_PING = 10,
  Datagram_Type_PONG = 11,
  Datagram_Type_ACQ_GET_BODY_STREAM = 110,
  Datagram_Type_ACQ_END_BODY_STREAM = 111,
  Datagram_Type_ACQ_BODY = 115,
  Datagram_Type_LAYOUT_LIST = 210,
  Datagram_Type_LAYOUT_CREATE = 211,
  Datagram_Type_LAYOUT_OPEN = 212,
  Datagram_Type_LAYOUT_RENAME = 213,
  Datagram_Type_LAYOUT_UPDATE = 214,
  Datagram_Type_LAYOUT_CLOSE = 215,
  Datagram_Type_LAYOUT_DELETE = 216,
  Datagram_Type_Datagram_Type_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  Datagram_Type_Datagram_Type_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool Datagram_Type_IsValid(int value);
constexpr Datagram_Type Datagram_Type_Type_MIN = Datagram_Type_UNDEFINED;
constexpr Datagram_Type Datagram_Type_Type_MAX = Datagram_Type_LAYOUT_DELETE;
constexpr int Datagram_Type_Type_ARRAYSIZE = Datagram_Type_Type_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Datagram_Type_descriptor();
template<typename T>
inline const std::string& Datagram_Type_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Datagram_Type>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Datagram_Type_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Datagram_Type_descriptor(), enum_t_value);
}
inline bool Datagram_Type_Parse(
    const std::string& name, Datagram_Type* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Datagram_Type>(
    Datagram_Type_descriptor(), name, value);
}
// ===================================================================

class Endpoint :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:messages.Endpoint) */ {
 public:
  Endpoint();
  virtual ~Endpoint();

  Endpoint(const Endpoint& from);
  Endpoint(Endpoint&& from) noexcept
    : Endpoint() {
    *this = ::std::move(from);
  }

  inline Endpoint& operator=(const Endpoint& from) {
    CopyFrom(from);
    return *this;
  }
  inline Endpoint& operator=(Endpoint&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Endpoint& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Endpoint* internal_default_instance() {
    return reinterpret_cast<const Endpoint*>(
               &_Endpoint_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Endpoint& a, Endpoint& b) {
    a.Swap(&b);
  }
  inline void Swap(Endpoint* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Endpoint* New() const final {
    return CreateMaybeMessage<Endpoint>(nullptr);
  }

  Endpoint* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Endpoint>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Endpoint& from);
  void MergeFrom(const Endpoint& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Endpoint* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "messages.Endpoint";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_network_2eproto);
    return ::descriptor_table_network_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef Endpoint_Type Type;
  static constexpr Type UNDEFINED =
    Endpoint_Type_UNDEFINED;
  static constexpr Type ACQUISITOR =
    Endpoint_Type_ACQUISITOR;
  static constexpr Type BROADCASTER =
    Endpoint_Type_BROADCASTER;
  static constexpr Type MASTER =
    Endpoint_Type_MASTER;
  static constexpr Type TERMINAL =
    Endpoint_Type_TERMINAL;
  static inline bool Type_IsValid(int value) {
    return Endpoint_Type_IsValid(value);
  }
  static constexpr Type Type_MIN =
    Endpoint_Type_Type_MIN;
  static constexpr Type Type_MAX =
    Endpoint_Type_Type_MAX;
  static constexpr int Type_ARRAYSIZE =
    Endpoint_Type_Type_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  Type_descriptor() {
    return Endpoint_Type_descriptor();
  }
  template<typename T>
  static inline const std::string& Type_Name(T enum_t_value) {
    static_assert(::std::is_same<T, Type>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function Type_Name.");
    return Endpoint_Type_Name(enum_t_value);
  }
  static inline bool Type_Parse(const std::string& name,
      Type* value) {
    return Endpoint_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kTypeFieldNumber = 2,
  };
  // string name = 1;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // .messages.Endpoint.Type type = 2;
  void clear_type();
  ::messages::Endpoint_Type type() const;
  void set_type(::messages::Endpoint_Type value);
  private:
  ::messages::Endpoint_Type _internal_type() const;
  void _internal_set_type(::messages::Endpoint_Type value);
  public:

  // @@protoc_insertion_point(class_scope:messages.Endpoint)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  int type_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_network_2eproto;
};
// -------------------------------------------------------------------

class Ping :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:messages.Ping) */ {
 public:
  Ping();
  virtual ~Ping();

  Ping(const Ping& from);
  Ping(Ping&& from) noexcept
    : Ping() {
    *this = ::std::move(from);
  }

  inline Ping& operator=(const Ping& from) {
    CopyFrom(from);
    return *this;
  }
  inline Ping& operator=(Ping&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Ping& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Ping* internal_default_instance() {
    return reinterpret_cast<const Ping*>(
               &_Ping_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Ping& a, Ping& b) {
    a.Swap(&b);
  }
  inline void Swap(Ping* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Ping* New() const final {
    return CreateMaybeMessage<Ping>(nullptr);
  }

  Ping* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Ping>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Ping& from);
  void MergeFrom(const Ping& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Ping* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "messages.Ping";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_network_2eproto);
    return ::descriptor_table_network_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTimeFieldNumber = 1,
  };
  // uint64 time = 1;
  void clear_time();
  ::PROTOBUF_NAMESPACE_ID::uint64 time() const;
  void set_time(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_time() const;
  void _internal_set_time(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // @@protoc_insertion_point(class_scope:messages.Ping)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::uint64 time_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_network_2eproto;
};
// -------------------------------------------------------------------

class Datagram :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:messages.Datagram) */ {
 public:
  Datagram();
  virtual ~Datagram();

  Datagram(const Datagram& from);
  Datagram(Datagram&& from) noexcept
    : Datagram() {
    *this = ::std::move(from);
  }

  inline Datagram& operator=(const Datagram& from) {
    CopyFrom(from);
    return *this;
  }
  inline Datagram& operator=(Datagram&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Datagram& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Datagram* internal_default_instance() {
    return reinterpret_cast<const Datagram*>(
               &_Datagram_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(Datagram& a, Datagram& b) {
    a.Swap(&b);
  }
  inline void Swap(Datagram* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Datagram* New() const final {
    return CreateMaybeMessage<Datagram>(nullptr);
  }

  Datagram* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Datagram>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Datagram& from);
  void MergeFrom(const Datagram& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Datagram* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "messages.Datagram";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_network_2eproto);
    return ::descriptor_table_network_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef Datagram_Type Type;
  static constexpr Type UNDEFINED =
    Datagram_Type_UNDEFINED;
  static constexpr Type CLOSE =
    Datagram_Type_CLOSE;
  static constexpr Type HEARTBEAT =
    Datagram_Type_HEARTBEAT;
  static constexpr Type PING =
    Datagram_Type_PING;
  static constexpr Type PONG =
    Datagram_Type_PONG;
  static constexpr Type ACQ_GET_BODY_STREAM =
    Datagram_Type_ACQ_GET_BODY_STREAM;
  static constexpr Type ACQ_END_BODY_STREAM =
    Datagram_Type_ACQ_END_BODY_STREAM;
  static constexpr Type ACQ_BODY =
    Datagram_Type_ACQ_BODY;
  static constexpr Type LAYOUT_LIST =
    Datagram_Type_LAYOUT_LIST;
  static constexpr Type LAYOUT_CREATE =
    Datagram_Type_LAYOUT_CREATE;
  static constexpr Type LAYOUT_OPEN =
    Datagram_Type_LAYOUT_OPEN;
  static constexpr Type LAYOUT_RENAME =
    Datagram_Type_LAYOUT_RENAME;
  static constexpr Type LAYOUT_UPDATE =
    Datagram_Type_LAYOUT_UPDATE;
  static constexpr Type LAYOUT_CLOSE =
    Datagram_Type_LAYOUT_CLOSE;
  static constexpr Type LAYOUT_DELETE =
    Datagram_Type_LAYOUT_DELETE;
  static inline bool Type_IsValid(int value) {
    return Datagram_Type_IsValid(value);
  }
  static constexpr Type Type_MIN =
    Datagram_Type_Type_MIN;
  static constexpr Type Type_MAX =
    Datagram_Type_Type_MAX;
  static constexpr int Type_ARRAYSIZE =
    Datagram_Type_Type_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  Type_descriptor() {
    return Datagram_Type_descriptor();
  }
  template<typename T>
  static inline const std::string& Type_Name(T enum_t_value) {
    static_assert(::std::is_same<T, Type>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function Type_Name.");
    return Datagram_Type_Name(enum_t_value);
  }
  static inline bool Type_Parse(const std::string& name,
      Type* value) {
    return Datagram_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kDataFieldNumber = 100,
    kTypeFieldNumber = 1,
  };
  // .google.protobuf.Any data = 100;
  bool has_data() const;
  private:
  bool _internal_has_data() const;
  public:
  void clear_data();
  const PROTOBUF_NAMESPACE_ID::Any& data() const;
  PROTOBUF_NAMESPACE_ID::Any* release_data();
  PROTOBUF_NAMESPACE_ID::Any* mutable_data();
  void set_allocated_data(PROTOBUF_NAMESPACE_ID::Any* data);
  private:
  const PROTOBUF_NAMESPACE_ID::Any& _internal_data() const;
  PROTOBUF_NAMESPACE_ID::Any* _internal_mutable_data();
  public:

  // .messages.Datagram.Type type = 1;
  void clear_type();
  ::messages::Datagram_Type type() const;
  void set_type(::messages::Datagram_Type value);
  private:
  ::messages::Datagram_Type _internal_type() const;
  void _internal_set_type(::messages::Datagram_Type value);
  public:

  // @@protoc_insertion_point(class_scope:messages.Datagram)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  PROTOBUF_NAMESPACE_ID::Any* data_;
  int type_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_network_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Endpoint

// string name = 1;
inline void Endpoint::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Endpoint::name() const {
  // @@protoc_insertion_point(field_get:messages.Endpoint.name)
  return _internal_name();
}
inline void Endpoint::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:messages.Endpoint.name)
}
inline std::string* Endpoint::mutable_name() {
  // @@protoc_insertion_point(field_mutable:messages.Endpoint.name)
  return _internal_mutable_name();
}
inline const std::string& Endpoint::_internal_name() const {
  return name_.GetNoArena();
}
inline void Endpoint::_internal_set_name(const std::string& value) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Endpoint::set_name(std::string&& value) {
  
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:messages.Endpoint.name)
}
inline void Endpoint::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:messages.Endpoint.name)
}
inline void Endpoint::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:messages.Endpoint.name)
}
inline std::string* Endpoint::_internal_mutable_name() {
  
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Endpoint::release_name() {
  // @@protoc_insertion_point(field_release:messages.Endpoint.name)
  
  return name_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Endpoint::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:messages.Endpoint.name)
}

// .messages.Endpoint.Type type = 2;
inline void Endpoint::clear_type() {
  type_ = 0;
}
inline ::messages::Endpoint_Type Endpoint::_internal_type() const {
  return static_cast< ::messages::Endpoint_Type >(type_);
}
inline ::messages::Endpoint_Type Endpoint::type() const {
  // @@protoc_insertion_point(field_get:messages.Endpoint.type)
  return _internal_type();
}
inline void Endpoint::_internal_set_type(::messages::Endpoint_Type value) {
  
  type_ = value;
}
inline void Endpoint::set_type(::messages::Endpoint_Type value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:messages.Endpoint.type)
}

// -------------------------------------------------------------------

// Ping

// uint64 time = 1;
inline void Ping::clear_time() {
  time_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 Ping::_internal_time() const {
  return time_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 Ping::time() const {
  // @@protoc_insertion_point(field_get:messages.Ping.time)
  return _internal_time();
}
inline void Ping::_internal_set_time(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  time_ = value;
}
inline void Ping::set_time(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_time(value);
  // @@protoc_insertion_point(field_set:messages.Ping.time)
}

// -------------------------------------------------------------------

// Datagram

// .messages.Datagram.Type type = 1;
inline void Datagram::clear_type() {
  type_ = 0;
}
inline ::messages::Datagram_Type Datagram::_internal_type() const {
  return static_cast< ::messages::Datagram_Type >(type_);
}
inline ::messages::Datagram_Type Datagram::type() const {
  // @@protoc_insertion_point(field_get:messages.Datagram.type)
  return _internal_type();
}
inline void Datagram::_internal_set_type(::messages::Datagram_Type value) {
  
  type_ = value;
}
inline void Datagram::set_type(::messages::Datagram_Type value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:messages.Datagram.type)
}

// .google.protobuf.Any data = 100;
inline bool Datagram::_internal_has_data() const {
  return this != internal_default_instance() && data_ != nullptr;
}
inline bool Datagram::has_data() const {
  return _internal_has_data();
}
inline const PROTOBUF_NAMESPACE_ID::Any& Datagram::_internal_data() const {
  const PROTOBUF_NAMESPACE_ID::Any* p = data_;
  return p != nullptr ? *p : *reinterpret_cast<const PROTOBUF_NAMESPACE_ID::Any*>(
      &PROTOBUF_NAMESPACE_ID::_Any_default_instance_);
}
inline const PROTOBUF_NAMESPACE_ID::Any& Datagram::data() const {
  // @@protoc_insertion_point(field_get:messages.Datagram.data)
  return _internal_data();
}
inline PROTOBUF_NAMESPACE_ID::Any* Datagram::release_data() {
  // @@protoc_insertion_point(field_release:messages.Datagram.data)
  
  PROTOBUF_NAMESPACE_ID::Any* temp = data_;
  data_ = nullptr;
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Any* Datagram::_internal_mutable_data() {
  
  if (data_ == nullptr) {
    auto* p = CreateMaybeMessage<PROTOBUF_NAMESPACE_ID::Any>(GetArenaNoVirtual());
    data_ = p;
  }
  return data_;
}
inline PROTOBUF_NAMESPACE_ID::Any* Datagram::mutable_data() {
  // @@protoc_insertion_point(field_mutable:messages.Datagram.data)
  return _internal_mutable_data();
}
inline void Datagram::set_allocated_data(PROTOBUF_NAMESPACE_ID::Any* data) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(data_);
  }
  if (data) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      data = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, data, submessage_arena);
    }
    
  } else {
    
  }
  data_ = data;
  // @@protoc_insertion_point(field_set_allocated:messages.Datagram.data)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace messages

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::messages::Endpoint_Type> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::messages::Endpoint_Type>() {
  return ::messages::Endpoint_Type_descriptor();
}
template <> struct is_proto_enum< ::messages::Datagram_Type> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::messages::Datagram_Type>() {
  return ::messages::Datagram_Type_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_network_2eproto
