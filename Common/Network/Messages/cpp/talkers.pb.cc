// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: talkers.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "talkers.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace messages {

namespace {

const ::google::protobuf::Descriptor* Machine_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Machine_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_talkers_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_talkers_2eproto() {
  protobuf_AddDesc_talkers_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "talkers.proto");
  GOOGLE_CHECK(file != NULL);
  Machine_descriptor_ = file->message_type(0);
  static const int Machine_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Machine, label_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Machine, caption_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Machine, bodycount_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Machine, averageactivity_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Machine, maximumactivity_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Machine, tree_),
  };
  Machine_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Machine_descriptor_,
      Machine::default_instance_,
      Machine_offsets_,
      -1,
      -1,
      -1,
      sizeof(Machine),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Machine, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Machine, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_talkers_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Machine_descriptor_, &Machine::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_talkers_2eproto() {
  delete Machine::default_instance_;
  delete Machine_reflection_;
}

void protobuf_AddDesc_talkers_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_talkers_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\rtalkers.proto\022\010messages\"|\n\007Machine\022\r\n\005"
    "label\030\001 \001(\t\022\017\n\007caption\030\005 \001(\t\022\021\n\tbodyCoun"
    "t\030\n \001(\005\022\027\n\017averageActivity\030\013 \001(\002\022\027\n\017maxi"
    "mumActivity\030\014 \001(\002\022\014\n\004tree\030\r \001(\010b\006proto3", 159);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "talkers.proto", &protobuf_RegisterTypes);
  Machine::default_instance_ = new Machine();
  Machine::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_talkers_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_talkers_2eproto {
  StaticDescriptorInitializer_talkers_2eproto() {
    protobuf_AddDesc_talkers_2eproto();
  }
} static_descriptor_initializer_talkers_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Machine::kLabelFieldNumber;
const int Machine::kCaptionFieldNumber;
const int Machine::kBodyCountFieldNumber;
const int Machine::kAverageActivityFieldNumber;
const int Machine::kMaximumActivityFieldNumber;
const int Machine::kTreeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Machine::Machine()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:messages.Machine)
}

void Machine::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Machine::Machine(const Machine& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:messages.Machine)
}

void Machine::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  label_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  caption_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  bodycount_ = 0;
  averageactivity_ = 0;
  maximumactivity_ = 0;
  tree_ = false;
}

Machine::~Machine() {
  // @@protoc_insertion_point(destructor:messages.Machine)
  SharedDtor();
}

void Machine::SharedDtor() {
  label_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  caption_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void Machine::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Machine::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Machine_descriptor_;
}

const Machine& Machine::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_talkers_2eproto();
  return *default_instance_;
}

Machine* Machine::default_instance_ = NULL;

Machine* Machine::New(::google::protobuf::Arena* arena) const {
  Machine* n = new Machine;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Machine::Clear() {
// @@protoc_insertion_point(message_clear_start:messages.Machine)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(Machine, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<Machine*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(bodycount_, tree_);
  label_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  caption_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());

#undef ZR_HELPER_
#undef ZR_

}

bool Machine::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:messages.Machine)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string label = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_label()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->label().data(), this->label().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "messages.Machine.label"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_caption;
        break;
      }

      // optional string caption = 5;
      case 5: {
        if (tag == 42) {
         parse_caption:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_caption()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->caption().data(), this->caption().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "messages.Machine.caption"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(80)) goto parse_bodyCount;
        break;
      }

      // optional int32 bodyCount = 10;
      case 10: {
        if (tag == 80) {
         parse_bodyCount:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &bodycount_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(93)) goto parse_averageActivity;
        break;
      }

      // optional float averageActivity = 11;
      case 11: {
        if (tag == 93) {
         parse_averageActivity:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &averageactivity_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(101)) goto parse_maximumActivity;
        break;
      }

      // optional float maximumActivity = 12;
      case 12: {
        if (tag == 101) {
         parse_maximumActivity:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &maximumactivity_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(104)) goto parse_tree;
        break;
      }

      // optional bool tree = 13;
      case 13: {
        if (tag == 104) {
         parse_tree:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &tree_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:messages.Machine)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:messages.Machine)
  return false;
#undef DO_
}

void Machine::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:messages.Machine)
  // optional string label = 1;
  if (this->label().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->label().data(), this->label().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "messages.Machine.label");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->label(), output);
  }

  // optional string caption = 5;
  if (this->caption().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->caption().data(), this->caption().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "messages.Machine.caption");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->caption(), output);
  }

  // optional int32 bodyCount = 10;
  if (this->bodycount() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(10, this->bodycount(), output);
  }

  // optional float averageActivity = 11;
  if (this->averageactivity() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(11, this->averageactivity(), output);
  }

  // optional float maximumActivity = 12;
  if (this->maximumactivity() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(12, this->maximumactivity(), output);
  }

  // optional bool tree = 13;
  if (this->tree() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(13, this->tree(), output);
  }

  // @@protoc_insertion_point(serialize_end:messages.Machine)
}

::google::protobuf::uint8* Machine::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:messages.Machine)
  // optional string label = 1;
  if (this->label().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->label().data(), this->label().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "messages.Machine.label");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->label(), target);
  }

  // optional string caption = 5;
  if (this->caption().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->caption().data(), this->caption().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "messages.Machine.caption");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->caption(), target);
  }

  // optional int32 bodyCount = 10;
  if (this->bodycount() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(10, this->bodycount(), target);
  }

  // optional float averageActivity = 11;
  if (this->averageactivity() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(11, this->averageactivity(), target);
  }

  // optional float maximumActivity = 12;
  if (this->maximumactivity() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(12, this->maximumactivity(), target);
  }

  // optional bool tree = 13;
  if (this->tree() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(13, this->tree(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:messages.Machine)
  return target;
}

int Machine::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:messages.Machine)
  int total_size = 0;

  // optional string label = 1;
  if (this->label().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->label());
  }

  // optional string caption = 5;
  if (this->caption().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->caption());
  }

  // optional int32 bodyCount = 10;
  if (this->bodycount() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->bodycount());
  }

  // optional float averageActivity = 11;
  if (this->averageactivity() != 0) {
    total_size += 1 + 4;
  }

  // optional float maximumActivity = 12;
  if (this->maximumactivity() != 0) {
    total_size += 1 + 4;
  }

  // optional bool tree = 13;
  if (this->tree() != 0) {
    total_size += 1 + 1;
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Machine::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:messages.Machine)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Machine* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Machine>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:messages.Machine)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:messages.Machine)
    MergeFrom(*source);
  }
}

void Machine::MergeFrom(const Machine& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:messages.Machine)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.label().size() > 0) {

    label_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.label_);
  }
  if (from.caption().size() > 0) {

    caption_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.caption_);
  }
  if (from.bodycount() != 0) {
    set_bodycount(from.bodycount());
  }
  if (from.averageactivity() != 0) {
    set_averageactivity(from.averageactivity());
  }
  if (from.maximumactivity() != 0) {
    set_maximumactivity(from.maximumactivity());
  }
  if (from.tree() != 0) {
    set_tree(from.tree());
  }
}

void Machine::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:messages.Machine)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Machine::CopyFrom(const Machine& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:messages.Machine)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Machine::IsInitialized() const {

  return true;
}

void Machine::Swap(Machine* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Machine::InternalSwap(Machine* other) {
  label_.Swap(&other->label_);
  caption_.Swap(&other->caption_);
  std::swap(bodycount_, other->bodycount_);
  std::swap(averageactivity_, other->averageactivity_);
  std::swap(maximumactivity_, other->maximumactivity_);
  std::swap(tree_, other->tree_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Machine::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Machine_descriptor_;
  metadata.reflection = Machine_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Machine

// optional string label = 1;
void Machine::clear_label() {
  label_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Machine::label() const {
  // @@protoc_insertion_point(field_get:messages.Machine.label)
  return label_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Machine::set_label(const ::std::string& value) {
  
  label_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:messages.Machine.label)
}
 void Machine::set_label(const char* value) {
  
  label_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:messages.Machine.label)
}
 void Machine::set_label(const char* value, size_t size) {
  
  label_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:messages.Machine.label)
}
 ::std::string* Machine::mutable_label() {
  
  // @@protoc_insertion_point(field_mutable:messages.Machine.label)
  return label_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Machine::release_label() {
  // @@protoc_insertion_point(field_release:messages.Machine.label)
  
  return label_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Machine::set_allocated_label(::std::string* label) {
  if (label != NULL) {
    
  } else {
    
  }
  label_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), label);
  // @@protoc_insertion_point(field_set_allocated:messages.Machine.label)
}

// optional string caption = 5;
void Machine::clear_caption() {
  caption_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Machine::caption() const {
  // @@protoc_insertion_point(field_get:messages.Machine.caption)
  return caption_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Machine::set_caption(const ::std::string& value) {
  
  caption_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:messages.Machine.caption)
}
 void Machine::set_caption(const char* value) {
  
  caption_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:messages.Machine.caption)
}
 void Machine::set_caption(const char* value, size_t size) {
  
  caption_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:messages.Machine.caption)
}
 ::std::string* Machine::mutable_caption() {
  
  // @@protoc_insertion_point(field_mutable:messages.Machine.caption)
  return caption_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Machine::release_caption() {
  // @@protoc_insertion_point(field_release:messages.Machine.caption)
  
  return caption_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Machine::set_allocated_caption(::std::string* caption) {
  if (caption != NULL) {
    
  } else {
    
  }
  caption_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), caption);
  // @@protoc_insertion_point(field_set_allocated:messages.Machine.caption)
}

// optional int32 bodyCount = 10;
void Machine::clear_bodycount() {
  bodycount_ = 0;
}
 ::google::protobuf::int32 Machine::bodycount() const {
  // @@protoc_insertion_point(field_get:messages.Machine.bodyCount)
  return bodycount_;
}
 void Machine::set_bodycount(::google::protobuf::int32 value) {
  
  bodycount_ = value;
  // @@protoc_insertion_point(field_set:messages.Machine.bodyCount)
}

// optional float averageActivity = 11;
void Machine::clear_averageactivity() {
  averageactivity_ = 0;
}
 float Machine::averageactivity() const {
  // @@protoc_insertion_point(field_get:messages.Machine.averageActivity)
  return averageactivity_;
}
 void Machine::set_averageactivity(float value) {
  
  averageactivity_ = value;
  // @@protoc_insertion_point(field_set:messages.Machine.averageActivity)
}

// optional float maximumActivity = 12;
void Machine::clear_maximumactivity() {
  maximumactivity_ = 0;
}
 float Machine::maximumactivity() const {
  // @@protoc_insertion_point(field_get:messages.Machine.maximumActivity)
  return maximumactivity_;
}
 void Machine::set_maximumactivity(float value) {
  
  maximumactivity_ = value;
  // @@protoc_insertion_point(field_set:messages.Machine.maximumActivity)
}

// optional bool tree = 13;
void Machine::clear_tree() {
  tree_ = false;
}
 bool Machine::tree() const {
  // @@protoc_insertion_point(field_get:messages.Machine.tree)
  return tree_;
}
 void Machine::set_tree(bool value) {
  
  tree_ = value;
  // @@protoc_insertion_point(field_set:messages.Machine.tree)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace messages

// @@protoc_insertion_point(global_scope)
