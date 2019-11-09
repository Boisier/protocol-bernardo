// DO NOT EDIT.
//
// Generated by the Swift generator plugin for the protocol buffer compiler.
// Source: network.proto
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

struct Messages_Endpoint {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  var name: String = String()

  var type: Messages_Endpoint.TypeEnum = .undefined

  var unknownFields = SwiftProtobuf.UnknownStorage()

  enum TypeEnum: SwiftProtobuf.Enum {
    typealias RawValue = Int

    /// Machine gathering users positions
    case undefined // = 0

    /// Machine gathering users positions
    case acquisitor // = 1

    /// Machine generating and displaying visuals
    case broadcaster // = 2

    /// The main machine, making everything works
    case master // = 3

    /// Terminal used to control the master
    case terminal // = 4
    case UNRECOGNIZED(Int)

    init() {
      self = .undefined
    }

    init?(rawValue: Int) {
      switch rawValue {
      case 0: self = .undefined
      case 1: self = .acquisitor
      case 2: self = .broadcaster
      case 3: self = .master
      case 4: self = .terminal
      default: self = .UNRECOGNIZED(rawValue)
      }
    }

    var rawValue: Int {
      switch self {
      case .undefined: return 0
      case .acquisitor: return 1
      case .broadcaster: return 2
      case .master: return 3
      case .terminal: return 4
      case .UNRECOGNIZED(let i): return i
      }
    }

  }

  init() {}
}

#if swift(>=4.2)

extension Messages_Endpoint.TypeEnum: CaseIterable {
  // The compiler won't synthesize support with the UNRECOGNIZED case.
  static var allCases: [Messages_Endpoint.TypeEnum] = [
    .undefined,
    .acquisitor,
    .broadcaster,
    .master,
    .terminal,
  ]
}

#endif  // swift(>=4.2)

struct Messages_Ping {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  var time: UInt64 = 0

  var unknownFields = SwiftProtobuf.UnknownStorage()

  init() {}
}

struct Messages_MasterStatus {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  var activeLayout: String = String()

  var connectedDevices: [String] = []

  var unknownFields = SwiftProtobuf.UnknownStorage()

  init() {}
}

struct Messages_Datagram {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  var type: Messages_Datagram.TypeEnum {
    get {return _storage._type}
    set {_uniqueStorage()._type = newValue}
  }

  var data: SwiftProtobuf.Google_Protobuf_Any {
    get {return _storage._data ?? SwiftProtobuf.Google_Protobuf_Any()}
    set {_uniqueStorage()._data = newValue}
  }
  /// Returns true if `data` has been explicitly set.
  var hasData: Bool {return _storage._data != nil}
  /// Clears the value of `data`. Subsequent reads from it will return its default value.
  mutating func clearData() {_uniqueStorage()._data = nil}

  var unknownFields = SwiftProtobuf.UnknownStorage()

  enum TypeEnum: SwiftProtobuf.Enum {
    typealias RawValue = Int

    /// (0)XX: Common and special types -
    case undefined // = 0

    /// Tell other side to close the connection
    case close // = 5

    /// Check connection is still active
    case heartbeat // = 7

    /// Ping command
    case ping // = 10

    /// Pong response
    case pong // = 11

    /// Request/Holds the status, the data format
    case status // = 50

    /// 1XX: Acquisitor types -
    case acqGetBodyStream // = 110

    /// Requests end of bodies stream
    case acqEndBodyStream // = 111

    /// A Body sent through the stream
    case acqBody // = 115

    /// 2XX: Master types -
    /// Layout
    case layoutLayout // = 205

    /// Asks/Hold the list of layouts
    case layoutList // = 210

    /// Create a new layout
    case layoutCreate // = 211

    /// Open a layout on the master
    case layoutOpen // = 212

    /// Rename a layout
    case layoutRename // = 213

    /// Update a layout
    case layoutUpdate // = 214

    /// Close the opened layout
    case layoutClose // = 215

    /// Delete the specified layout
    case layoutDelete // = 216
    case UNRECOGNIZED(Int)

    init() {
      self = .undefined
    }

    init?(rawValue: Int) {
      switch rawValue {
      case 0: self = .undefined
      case 5: self = .close
      case 7: self = .heartbeat
      case 10: self = .ping
      case 11: self = .pong
      case 50: self = .status
      case 110: self = .acqGetBodyStream
      case 111: self = .acqEndBodyStream
      case 115: self = .acqBody
      case 205: self = .layoutLayout
      case 210: self = .layoutList
      case 211: self = .layoutCreate
      case 212: self = .layoutOpen
      case 213: self = .layoutRename
      case 214: self = .layoutUpdate
      case 215: self = .layoutClose
      case 216: self = .layoutDelete
      default: self = .UNRECOGNIZED(rawValue)
      }
    }

    var rawValue: Int {
      switch self {
      case .undefined: return 0
      case .close: return 5
      case .heartbeat: return 7
      case .ping: return 10
      case .pong: return 11
      case .status: return 50
      case .acqGetBodyStream: return 110
      case .acqEndBodyStream: return 111
      case .acqBody: return 115
      case .layoutLayout: return 205
      case .layoutList: return 210
      case .layoutCreate: return 211
      case .layoutOpen: return 212
      case .layoutRename: return 213
      case .layoutUpdate: return 214
      case .layoutClose: return 215
      case .layoutDelete: return 216
      case .UNRECOGNIZED(let i): return i
      }
    }

  }

  init() {}

  fileprivate var _storage = _StorageClass.defaultInstance
}

#if swift(>=4.2)

extension Messages_Datagram.TypeEnum: CaseIterable {
  // The compiler won't synthesize support with the UNRECOGNIZED case.
  static var allCases: [Messages_Datagram.TypeEnum] = [
    .undefined,
    .close,
    .heartbeat,
    .ping,
    .pong,
    .status,
    .acqGetBodyStream,
    .acqEndBodyStream,
    .acqBody,
    .layoutLayout,
    .layoutList,
    .layoutCreate,
    .layoutOpen,
    .layoutRename,
    .layoutUpdate,
    .layoutClose,
    .layoutDelete,
  ]
}

#endif  // swift(>=4.2)

// MARK: - Code below here is support for the SwiftProtobuf runtime.

fileprivate let _protobuf_package = "messages"

extension Messages_Endpoint: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  static let protoMessageName: String = _protobuf_package + ".Endpoint"
  static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .same(proto: "name"),
    2: .same(proto: "type"),
  ]

  mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      switch fieldNumber {
      case 1: try decoder.decodeSingularStringField(value: &self.name)
      case 2: try decoder.decodeSingularEnumField(value: &self.type)
      default: break
      }
    }
  }

  func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    if !self.name.isEmpty {
      try visitor.visitSingularStringField(value: self.name, fieldNumber: 1)
    }
    if self.type != .undefined {
      try visitor.visitSingularEnumField(value: self.type, fieldNumber: 2)
    }
    try unknownFields.traverse(visitor: &visitor)
  }

  static func ==(lhs: Messages_Endpoint, rhs: Messages_Endpoint) -> Bool {
    if lhs.name != rhs.name {return false}
    if lhs.type != rhs.type {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Messages_Endpoint.TypeEnum: SwiftProtobuf._ProtoNameProviding {
  static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    0: .same(proto: "UNDEFINED"),
    1: .same(proto: "ACQUISITOR"),
    2: .same(proto: "BROADCASTER"),
    3: .same(proto: "MASTER"),
    4: .same(proto: "TERMINAL"),
  ]
}

extension Messages_Ping: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  static let protoMessageName: String = _protobuf_package + ".Ping"
  static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .same(proto: "time"),
  ]

  mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      switch fieldNumber {
      case 1: try decoder.decodeSingularUInt64Field(value: &self.time)
      default: break
      }
    }
  }

  func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    if self.time != 0 {
      try visitor.visitSingularUInt64Field(value: self.time, fieldNumber: 1)
    }
    try unknownFields.traverse(visitor: &visitor)
  }

  static func ==(lhs: Messages_Ping, rhs: Messages_Ping) -> Bool {
    if lhs.time != rhs.time {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Messages_MasterStatus: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  static let protoMessageName: String = _protobuf_package + ".MasterStatus"
  static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    10: .same(proto: "activeLayout"),
    20: .same(proto: "connectedDevices"),
  ]

  mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      switch fieldNumber {
      case 10: try decoder.decodeSingularStringField(value: &self.activeLayout)
      case 20: try decoder.decodeRepeatedStringField(value: &self.connectedDevices)
      default: break
      }
    }
  }

  func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    if !self.activeLayout.isEmpty {
      try visitor.visitSingularStringField(value: self.activeLayout, fieldNumber: 10)
    }
    if !self.connectedDevices.isEmpty {
      try visitor.visitRepeatedStringField(value: self.connectedDevices, fieldNumber: 20)
    }
    try unknownFields.traverse(visitor: &visitor)
  }

  static func ==(lhs: Messages_MasterStatus, rhs: Messages_MasterStatus) -> Bool {
    if lhs.activeLayout != rhs.activeLayout {return false}
    if lhs.connectedDevices != rhs.connectedDevices {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Messages_Datagram: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  static let protoMessageName: String = _protobuf_package + ".Datagram"
  static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .same(proto: "type"),
    100: .same(proto: "data"),
  ]

  fileprivate class _StorageClass {
    var _type: Messages_Datagram.TypeEnum = .undefined
    var _data: SwiftProtobuf.Google_Protobuf_Any? = nil

    static let defaultInstance = _StorageClass()

    private init() {}

    init(copying source: _StorageClass) {
      _type = source._type
      _data = source._data
    }
  }

  fileprivate mutating func _uniqueStorage() -> _StorageClass {
    if !isKnownUniquelyReferenced(&_storage) {
      _storage = _StorageClass(copying: _storage)
    }
    return _storage
  }

  mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    _ = _uniqueStorage()
    try withExtendedLifetime(_storage) { (_storage: _StorageClass) in
      while let fieldNumber = try decoder.nextFieldNumber() {
        switch fieldNumber {
        case 1: try decoder.decodeSingularEnumField(value: &_storage._type)
        case 100: try decoder.decodeSingularMessageField(value: &_storage._data)
        default: break
        }
      }
    }
  }

  func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    try withExtendedLifetime(_storage) { (_storage: _StorageClass) in
      if _storage._type != .undefined {
        try visitor.visitSingularEnumField(value: _storage._type, fieldNumber: 1)
      }
      if let v = _storage._data {
        try visitor.visitSingularMessageField(value: v, fieldNumber: 100)
      }
    }
    try unknownFields.traverse(visitor: &visitor)
  }

  static func ==(lhs: Messages_Datagram, rhs: Messages_Datagram) -> Bool {
    if lhs._storage !== rhs._storage {
      let storagesAreEqual: Bool = withExtendedLifetime((lhs._storage, rhs._storage)) { (_args: (_StorageClass, _StorageClass)) in
        let _storage = _args.0
        let rhs_storage = _args.1
        if _storage._type != rhs_storage._type {return false}
        if _storage._data != rhs_storage._data {return false}
        return true
      }
      if !storagesAreEqual {return false}
    }
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Messages_Datagram.TypeEnum: SwiftProtobuf._ProtoNameProviding {
  static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    0: .same(proto: "UNDEFINED"),
    5: .same(proto: "CLOSE"),
    7: .same(proto: "HEARTBEAT"),
    10: .same(proto: "PING"),
    11: .same(proto: "PONG"),
    50: .same(proto: "STATUS"),
    110: .same(proto: "ACQ_GET_BODY_STREAM"),
    111: .same(proto: "ACQ_END_BODY_STREAM"),
    115: .same(proto: "ACQ_BODY"),
    205: .same(proto: "LAYOUT_LAYOUT"),
    210: .same(proto: "LAYOUT_LIST"),
    211: .same(proto: "LAYOUT_CREATE"),
    212: .same(proto: "LAYOUT_OPEN"),
    213: .same(proto: "LAYOUT_RENAME"),
    214: .same(proto: "LAYOUT_UPDATE"),
    215: .same(proto: "LAYOUT_CLOSE"),
    216: .same(proto: "LAYOUT_DELETE"),
  ]
}
