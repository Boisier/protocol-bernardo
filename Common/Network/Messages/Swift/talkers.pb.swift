// DO NOT EDIT.
//
// Generated by the Swift generator plugin for the protocol buffer compiler.
// Source: talkers.proto
//
// For information on using the generated types, please see the documentation:
//   https://github.com/apple/swift-protobuf/

import Foundation
import SwiftProtobuf

// If the compiler emits an error on this type, it is because this file
// was generated by a version of the `protoc` Swift plug-in that is
// incompatible with the version of SwiftProtobuf to which you are linking.
// Please ensure that your are building against the same version of the API
// that was used to generate this file.
fileprivate struct _GeneratedWithProtocGenSwiftVersion: SwiftProtobuf.ProtobufAPIVersionCheck {
  struct _2: SwiftProtobuf.ProtobufAPIVersion_2 {}
  typealias Version = _2
}

struct Messages_Talkers {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  /// Content details
  var type: String = String()

  /// Machine label
  var label: String = String()

  /// Caption said by machine (if any)
  var caption: String = String()

  /// Machine status
  var bodyCount: Int32 = 0

  var averageActivity: Float = 0

  var maximumActivity: Float = 0

  var tree: Bool = false

  /// Event
  var event: String = String()

  var unknownFields = SwiftProtobuf.UnknownStorage()

  init() {}
}

// MARK: - Code below here is support for the SwiftProtobuf runtime.

fileprivate let _protobuf_package = "messages"

extension Messages_Talkers: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  static let protoMessageName: String = _protobuf_package + ".Talkers"
  static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .same(proto: "type"),
    2: .same(proto: "label"),
    5: .same(proto: "caption"),
    10: .same(proto: "bodyCount"),
    11: .same(proto: "averageActivity"),
    12: .same(proto: "maximumActivity"),
    13: .same(proto: "tree"),
    20: .same(proto: "event"),
  ]

  mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      switch fieldNumber {
      case 1: try decoder.decodeSingularStringField(value: &self.type)
      case 2: try decoder.decodeSingularStringField(value: &self.label)
      case 5: try decoder.decodeSingularStringField(value: &self.caption)
      case 10: try decoder.decodeSingularInt32Field(value: &self.bodyCount)
      case 11: try decoder.decodeSingularFloatField(value: &self.averageActivity)
      case 12: try decoder.decodeSingularFloatField(value: &self.maximumActivity)
      case 13: try decoder.decodeSingularBoolField(value: &self.tree)
      case 20: try decoder.decodeSingularStringField(value: &self.event)
      default: break
      }
    }
  }

  func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    if !self.type.isEmpty {
      try visitor.visitSingularStringField(value: self.type, fieldNumber: 1)
    }
    if !self.label.isEmpty {
      try visitor.visitSingularStringField(value: self.label, fieldNumber: 2)
    }
    if !self.caption.isEmpty {
      try visitor.visitSingularStringField(value: self.caption, fieldNumber: 5)
    }
    if self.bodyCount != 0 {
      try visitor.visitSingularInt32Field(value: self.bodyCount, fieldNumber: 10)
    }
    if self.averageActivity != 0 {
      try visitor.visitSingularFloatField(value: self.averageActivity, fieldNumber: 11)
    }
    if self.maximumActivity != 0 {
      try visitor.visitSingularFloatField(value: self.maximumActivity, fieldNumber: 12)
    }
    if self.tree != false {
      try visitor.visitSingularBoolField(value: self.tree, fieldNumber: 13)
    }
    if !self.event.isEmpty {
      try visitor.visitSingularStringField(value: self.event, fieldNumber: 20)
    }
    try unknownFields.traverse(visitor: &visitor)
  }

  static func ==(lhs: Messages_Talkers, rhs: Messages_Talkers) -> Bool {
    if lhs.type != rhs.type {return false}
    if lhs.label != rhs.label {return false}
    if lhs.caption != rhs.caption {return false}
    if lhs.bodyCount != rhs.bodyCount {return false}
    if lhs.averageActivity != rhs.averageActivity {return false}
    if lhs.maximumActivity != rhs.maximumActivity {return false}
    if lhs.tree != rhs.tree {return false}
    if lhs.event != rhs.event {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}
