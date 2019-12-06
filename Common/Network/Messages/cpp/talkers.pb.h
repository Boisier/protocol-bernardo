// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: talkers.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_talkers_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_talkers_2eproto

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
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_talkers_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_talkers_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_talkers_2eproto;
namespace messages {
class Machine;
class MachineDefaultTypeInternal;
extern MachineDefaultTypeInternal _Machine_default_instance_;
}  // namespace messages
PROTOBUF_NAMESPACE_OPEN
template<> ::messages::Machine* Arena::CreateMaybeMessage<::messages::Machine>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace messages {

// ===================================================================

class Machine :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:messages.Machine) */ {
 public:
  Machine();
  virtual ~Machine();

  Machine(const Machine& from);
  Machine(Machine&& from) noexcept
    : Machine() {
    *this = ::std::move(from);
  }

  inline Machine& operator=(const Machine& from) {
    CopyFrom(from);
    return *this;
  }
  inline Machine& operator=(Machine&& from) noexcept {
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
  static const Machine& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Machine* internal_default_instance() {
    return reinterpret_cast<const Machine*>(
               &_Machine_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Machine& a, Machine& b) {
    a.Swap(&b);
  }
  inline void Swap(Machine* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Machine* New() const final {
    return CreateMaybeMessage<Machine>(nullptr);
  }

  Machine* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Machine>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Machine& from);
  void MergeFrom(const Machine& from);
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
  void InternalSwap(Machine* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "messages.Machine";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_talkers_2eproto);
    return ::descriptor_table_talkers_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLabelFieldNumber = 1,
    kCaptionFieldNumber = 5,
  };
  // string label = 1;
  void clear_label();
  const std::string& label() const;
  void set_label(const std::string& value);
  void set_label(std::string&& value);
  void set_label(const char* value);
  void set_label(const char* value, size_t size);
  std::string* mutable_label();
  std::string* release_label();
  void set_allocated_label(std::string* label);
  private:
  const std::string& _internal_label() const;
  void _internal_set_label(const std::string& value);
  std::string* _internal_mutable_label();
  public:

  // string caption = 5;
  void clear_caption();
  const std::string& caption() const;
  void set_caption(const std::string& value);
  void set_caption(std::string&& value);
  void set_caption(const char* value);
  void set_caption(const char* value, size_t size);
  std::string* mutable_caption();
  std::string* release_caption();
  void set_allocated_caption(std::string* caption);
  private:
  const std::string& _internal_caption() const;
  void _internal_set_caption(const std::string& value);
  std::string* _internal_mutable_caption();
  public:

  // @@protoc_insertion_point(class_scope:messages.Machine)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr label_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr caption_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_talkers_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Machine

// string label = 1;
inline void Machine::clear_label() {
  label_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Machine::label() const {
  // @@protoc_insertion_point(field_get:messages.Machine.label)
  return _internal_label();
}
inline void Machine::set_label(const std::string& value) {
  _internal_set_label(value);
  // @@protoc_insertion_point(field_set:messages.Machine.label)
}
inline std::string* Machine::mutable_label() {
  // @@protoc_insertion_point(field_mutable:messages.Machine.label)
  return _internal_mutable_label();
}
inline const std::string& Machine::_internal_label() const {
  return label_.GetNoArena();
}
inline void Machine::_internal_set_label(const std::string& value) {
  
  label_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Machine::set_label(std::string&& value) {
  
  label_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:messages.Machine.label)
}
inline void Machine::set_label(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  label_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:messages.Machine.label)
}
inline void Machine::set_label(const char* value, size_t size) {
  
  label_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:messages.Machine.label)
}
inline std::string* Machine::_internal_mutable_label() {
  
  return label_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Machine::release_label() {
  // @@protoc_insertion_point(field_release:messages.Machine.label)
  
  return label_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Machine::set_allocated_label(std::string* label) {
  if (label != nullptr) {
    
  } else {
    
  }
  label_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), label);
  // @@protoc_insertion_point(field_set_allocated:messages.Machine.label)
}

// string caption = 5;
inline void Machine::clear_caption() {
  caption_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Machine::caption() const {
  // @@protoc_insertion_point(field_get:messages.Machine.caption)
  return _internal_caption();
}
inline void Machine::set_caption(const std::string& value) {
  _internal_set_caption(value);
  // @@protoc_insertion_point(field_set:messages.Machine.caption)
}
inline std::string* Machine::mutable_caption() {
  // @@protoc_insertion_point(field_mutable:messages.Machine.caption)
  return _internal_mutable_caption();
}
inline const std::string& Machine::_internal_caption() const {
  return caption_.GetNoArena();
}
inline void Machine::_internal_set_caption(const std::string& value) {
  
  caption_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Machine::set_caption(std::string&& value) {
  
  caption_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:messages.Machine.caption)
}
inline void Machine::set_caption(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  caption_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:messages.Machine.caption)
}
inline void Machine::set_caption(const char* value, size_t size) {
  
  caption_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:messages.Machine.caption)
}
inline std::string* Machine::_internal_mutable_caption() {
  
  return caption_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Machine::release_caption() {
  // @@protoc_insertion_point(field_release:messages.Machine.caption)
  
  return caption_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Machine::set_allocated_caption(std::string* caption) {
  if (caption != nullptr) {
    
  } else {
    
  }
  caption_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), caption);
  // @@protoc_insertion_point(field_set_allocated:messages.Machine.caption)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace messages

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_talkers_2eproto