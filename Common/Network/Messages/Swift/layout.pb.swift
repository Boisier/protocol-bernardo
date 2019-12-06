// DO NOT EDIT.
//
// Generated by the Swift generator plugin for the protocol buffer compiler.
// Source: layout.proto
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

struct Pb_Network_Messages_LayoutList {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  var layoutName: [String] = []

  var unknownFields = SwiftProtobuf.UnknownStorage()

  init() {}
}

struct Pb_Network_Messages_LayoutName {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  var name: String = String()

  var unknownFields = SwiftProtobuf.UnknownStorage()

  init() {}
}

struct Pb_Network_Messages_Device {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  var name: String {
    get {return _storage._name}
    set {_uniqueStorage()._name = newValue}
  }

  var uid: String {
    get {return _storage._uid}
    set {_uniqueStorage()._uid = newValue}
  }

  var horizontalFov: Double {
    get {return _storage._horizontalFov}
    set {_uniqueStorage()._horizontalFov = newValue}
  }

  var minDistance: Double {
    get {return _storage._minDistance}
    set {_uniqueStorage()._minDistance = newValue}
  }

  var maxDistance: Double {
    get {return _storage._maxDistance}
    set {_uniqueStorage()._maxDistance = newValue}
  }

  var position: Pb_Network_Messages_vec3 {
    get {return _storage._position ?? Pb_Network_Messages_vec3()}
    set {_uniqueStorage()._position = newValue}
  }
  /// Returns true if `position` has been explicitly set.
  var hasPosition: Bool {return _storage._position != nil}
  /// Clears the value of `position`. Subsequent reads from it will return its default value.
  mutating func clearPosition() {_uniqueStorage()._position = nil}

  var orientation: Pb_Network_Messages_vec3 {
    get {return _storage._orientation ?? Pb_Network_Messages_vec3()}
    set {_uniqueStorage()._orientation = newValue}
  }
  /// Returns true if `orientation` has been explicitly set.
  var hasOrientation: Bool {return _storage._orientation != nil}
  /// Clears the value of `orientation`. Subsequent reads from it will return its default value.
  mutating func clearOrientation() {_uniqueStorage()._orientation = nil}

  var physicaluid: String {
    get {return _storage._physicaluid}
    set {_uniqueStorage()._physicaluid = newValue}
  }

  var positionDelta: Pb_Network_Messages_vec3 {
    get {return _storage._positionDelta ?? Pb_Network_Messages_vec3()}
    set {_uniqueStorage()._positionDelta = newValue}
  }
  /// Returns true if `positionDelta` has been explicitly set.
  var hasPositionDelta: Bool {return _storage._positionDelta != nil}
  /// Clears the value of `positionDelta`. Subsequent reads from it will return its default value.
  mutating func clearPositionDelta() {_uniqueStorage()._positionDelta = nil}

  var orientationDelta: Pb_Network_Messages_vec3 {
    get {return _storage._orientationDelta ?? Pb_Network_Messages_vec3()}
    set {_uniqueStorage()._orientationDelta = newValue}
  }
  /// Returns true if `orientationDelta` has been explicitly set.
  var hasOrientationDelta: Bool {return _storage._orientationDelta != nil}
  /// Clears the value of `orientationDelta`. Subsequent reads from it will return its default value.
  mutating func clearOrientationDelta() {_uniqueStorage()._orientationDelta = nil}

  var unknownFields = SwiftProtobuf.UnknownStorage()

  init() {}

  fileprivate var _storage = _StorageClass.defaultInstance
}

struct Pb_Network_Messages_Screen {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  var name: String {
    get {return _storage._name}
    set {_uniqueStorage()._name = newValue}
  }

  var uid: String {
    get {return _storage._uid}
    set {_uniqueStorage()._uid = newValue}
  }

  var position: Pb_Network_Messages_vec3 {
    get {return _storage._position ?? Pb_Network_Messages_vec3()}
    set {_uniqueStorage()._position = newValue}
  }
  /// Returns true if `position` has been explicitly set.
  var hasPosition: Bool {return _storage._position != nil}
  /// Clears the value of `position`. Subsequent reads from it will return its default value.
  mutating func clearPosition() {_uniqueStorage()._position = nil}

  var orientation: Pb_Network_Messages_vec3 {
    get {return _storage._orientation ?? Pb_Network_Messages_vec3()}
    set {_uniqueStorage()._orientation = newValue}
  }
  /// Returns true if `orientation` has been explicitly set.
  var hasOrientation: Bool {return _storage._orientation != nil}
  /// Clears the value of `orientation`. Subsequent reads from it will return its default value.
  mutating func clearOrientation() {_uniqueStorage()._orientation = nil}

  var size: Pb_Network_Messages_vec2 {
    get {return _storage._size ?? Pb_Network_Messages_vec2()}
    set {_uniqueStorage()._size = newValue}
  }
  /// Returns true if `size` has been explicitly set.
  var hasSize: Bool {return _storage._size != nil}
  /// Clears the value of `size`. Subsequent reads from it will return its default value.
  mutating func clearSize() {_uniqueStorage()._size = nil}

  var unknownFields = SwiftProtobuf.UnknownStorage()

  init() {}

  fileprivate var _storage = _StorageClass.defaultInstance
}

struct Pb_Network_Messages_Layout {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  var name: String = String()

  var devices: [Pb_Network_Messages_Device] = []

  var screens: [Pb_Network_Messages_Screen] = []

  var unknownFields = SwiftProtobuf.UnknownStorage()

  init() {}
}

struct Pb_Network_Messages_CalibrationValues {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  var angle: Pb_Network_Messages_vec3 {
    get {return _storage._angle ?? Pb_Network_Messages_vec3()}
    set {_uniqueStorage()._angle = newValue}
  }
  /// Returns true if `angle` has been explicitly set.
  var hasAngle: Bool {return _storage._angle != nil}
  /// Clears the value of `angle`. Subsequent reads from it will return its default value.
  mutating func clearAngle() {_uniqueStorage()._angle = nil}

  var position: Pb_Network_Messages_vec3 {
    get {return _storage._position ?? Pb_Network_Messages_vec3()}
    set {_uniqueStorage()._position = newValue}
  }
  /// Returns true if `position` has been explicitly set.
  var hasPosition: Bool {return _storage._position != nil}
  /// Clears the value of `position`. Subsequent reads from it will return its default value.
  mutating func clearPosition() {_uniqueStorage()._position = nil}

  var unknownFields = SwiftProtobuf.UnknownStorage()

  init() {}

  fileprivate var _storage = _StorageClass.defaultInstance
}

struct Pb_Network_Messages_CalibrationDevices {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  var deviceA: String = String()

  var deviceB: String = String()

  var unknownFields = SwiftProtobuf.UnknownStorage()

  init() {}
}

// MARK: - Code below here is support for the SwiftProtobuf runtime.

fileprivate let _protobuf_package = "pb.network.messages"

extension Pb_Network_Messages_LayoutList: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  static let protoMessageName: String = _protobuf_package + ".LayoutList"
  static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    10: .same(proto: "layoutName"),
  ]

  mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      switch fieldNumber {
      case 10: try decoder.decodeRepeatedStringField(value: &self.layoutName)
      default: break
      }
    }
  }

  func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    if !self.layoutName.isEmpty {
      try visitor.visitRepeatedStringField(value: self.layoutName, fieldNumber: 10)
    }
    try unknownFields.traverse(visitor: &visitor)
  }

  static func ==(lhs: Pb_Network_Messages_LayoutList, rhs: Pb_Network_Messages_LayoutList) -> Bool {
    if lhs.layoutName != rhs.layoutName {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Pb_Network_Messages_LayoutName: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  static let protoMessageName: String = _protobuf_package + ".LayoutName"
  static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    10: .same(proto: "name"),
  ]

  mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      switch fieldNumber {
      case 10: try decoder.decodeSingularStringField(value: &self.name)
      default: break
      }
    }
  }

  func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    if !self.name.isEmpty {
      try visitor.visitSingularStringField(value: self.name, fieldNumber: 10)
    }
    try unknownFields.traverse(visitor: &visitor)
  }

  static func ==(lhs: Pb_Network_Messages_LayoutName, rhs: Pb_Network_Messages_LayoutName) -> Bool {
    if lhs.name != rhs.name {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Pb_Network_Messages_Device: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  static let protoMessageName: String = _protobuf_package + ".Device"
  static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    10: .same(proto: "name"),
    20: .same(proto: "uid"),
    30: .same(proto: "horizontalFOV"),
    40: .same(proto: "minDistance"),
    50: .same(proto: "maxDistance"),
    60: .same(proto: "position"),
    70: .same(proto: "orientation"),
    80: .same(proto: "physicaluid"),
    90: .same(proto: "positionDelta"),
    100: .same(proto: "orientationDelta"),
  ]

  fileprivate class _StorageClass {
    var _name: String = String()
    var _uid: String = String()
    var _horizontalFov: Double = 0
    var _minDistance: Double = 0
    var _maxDistance: Double = 0
    var _position: Pb_Network_Messages_vec3? = nil
    var _orientation: Pb_Network_Messages_vec3? = nil
    var _physicaluid: String = String()
    var _positionDelta: Pb_Network_Messages_vec3? = nil
    var _orientationDelta: Pb_Network_Messages_vec3? = nil

    static let defaultInstance = _StorageClass()

    private init() {}

    init(copying source: _StorageClass) {
      _name = source._name
      _uid = source._uid
      _horizontalFov = source._horizontalFov
      _minDistance = source._minDistance
      _maxDistance = source._maxDistance
      _position = source._position
      _orientation = source._orientation
      _physicaluid = source._physicaluid
      _positionDelta = source._positionDelta
      _orientationDelta = source._orientationDelta
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
        case 10: try decoder.decodeSingularStringField(value: &_storage._name)
        case 20: try decoder.decodeSingularStringField(value: &_storage._uid)
        case 30: try decoder.decodeSingularDoubleField(value: &_storage._horizontalFov)
        case 40: try decoder.decodeSingularDoubleField(value: &_storage._minDistance)
        case 50: try decoder.decodeSingularDoubleField(value: &_storage._maxDistance)
        case 60: try decoder.decodeSingularMessageField(value: &_storage._position)
        case 70: try decoder.decodeSingularMessageField(value: &_storage._orientation)
        case 80: try decoder.decodeSingularStringField(value: &_storage._physicaluid)
        case 90: try decoder.decodeSingularMessageField(value: &_storage._positionDelta)
        case 100: try decoder.decodeSingularMessageField(value: &_storage._orientationDelta)
        default: break
        }
      }
    }
  }

  func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    try withExtendedLifetime(_storage) { (_storage: _StorageClass) in
      if !_storage._name.isEmpty {
        try visitor.visitSingularStringField(value: _storage._name, fieldNumber: 10)
      }
      if !_storage._uid.isEmpty {
        try visitor.visitSingularStringField(value: _storage._uid, fieldNumber: 20)
      }
      if _storage._horizontalFov != 0 {
        try visitor.visitSingularDoubleField(value: _storage._horizontalFov, fieldNumber: 30)
      }
      if _storage._minDistance != 0 {
        try visitor.visitSingularDoubleField(value: _storage._minDistance, fieldNumber: 40)
      }
      if _storage._maxDistance != 0 {
        try visitor.visitSingularDoubleField(value: _storage._maxDistance, fieldNumber: 50)
      }
      if let v = _storage._position {
        try visitor.visitSingularMessageField(value: v, fieldNumber: 60)
      }
      if let v = _storage._orientation {
        try visitor.visitSingularMessageField(value: v, fieldNumber: 70)
      }
      if !_storage._physicaluid.isEmpty {
        try visitor.visitSingularStringField(value: _storage._physicaluid, fieldNumber: 80)
      }
      if let v = _storage._positionDelta {
        try visitor.visitSingularMessageField(value: v, fieldNumber: 90)
      }
      if let v = _storage._orientationDelta {
        try visitor.visitSingularMessageField(value: v, fieldNumber: 100)
      }
    }
    try unknownFields.traverse(visitor: &visitor)
  }

  static func ==(lhs: Pb_Network_Messages_Device, rhs: Pb_Network_Messages_Device) -> Bool {
    if lhs._storage !== rhs._storage {
      let storagesAreEqual: Bool = withExtendedLifetime((lhs._storage, rhs._storage)) { (_args: (_StorageClass, _StorageClass)) in
        let _storage = _args.0
        let rhs_storage = _args.1
        if _storage._name != rhs_storage._name {return false}
        if _storage._uid != rhs_storage._uid {return false}
        if _storage._horizontalFov != rhs_storage._horizontalFov {return false}
        if _storage._minDistance != rhs_storage._minDistance {return false}
        if _storage._maxDistance != rhs_storage._maxDistance {return false}
        if _storage._position != rhs_storage._position {return false}
        if _storage._orientation != rhs_storage._orientation {return false}
        if _storage._physicaluid != rhs_storage._physicaluid {return false}
        if _storage._positionDelta != rhs_storage._positionDelta {return false}
        if _storage._orientationDelta != rhs_storage._orientationDelta {return false}
        return true
      }
      if !storagesAreEqual {return false}
    }
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Pb_Network_Messages_Screen: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  static let protoMessageName: String = _protobuf_package + ".Screen"
  static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    10: .same(proto: "name"),
    20: .same(proto: "uid"),
    30: .same(proto: "position"),
    40: .same(proto: "orientation"),
    50: .same(proto: "size"),
  ]

  fileprivate class _StorageClass {
    var _name: String = String()
    var _uid: String = String()
    var _position: Pb_Network_Messages_vec3? = nil
    var _orientation: Pb_Network_Messages_vec3? = nil
    var _size: Pb_Network_Messages_vec2? = nil

    static let defaultInstance = _StorageClass()

    private init() {}

    init(copying source: _StorageClass) {
      _name = source._name
      _uid = source._uid
      _position = source._position
      _orientation = source._orientation
      _size = source._size
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
        case 10: try decoder.decodeSingularStringField(value: &_storage._name)
        case 20: try decoder.decodeSingularStringField(value: &_storage._uid)
        case 30: try decoder.decodeSingularMessageField(value: &_storage._position)
        case 40: try decoder.decodeSingularMessageField(value: &_storage._orientation)
        case 50: try decoder.decodeSingularMessageField(value: &_storage._size)
        default: break
        }
      }
    }
  }

  func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    try withExtendedLifetime(_storage) { (_storage: _StorageClass) in
      if !_storage._name.isEmpty {
        try visitor.visitSingularStringField(value: _storage._name, fieldNumber: 10)
      }
      if !_storage._uid.isEmpty {
        try visitor.visitSingularStringField(value: _storage._uid, fieldNumber: 20)
      }
      if let v = _storage._position {
        try visitor.visitSingularMessageField(value: v, fieldNumber: 30)
      }
      if let v = _storage._orientation {
        try visitor.visitSingularMessageField(value: v, fieldNumber: 40)
      }
      if let v = _storage._size {
        try visitor.visitSingularMessageField(value: v, fieldNumber: 50)
      }
    }
    try unknownFields.traverse(visitor: &visitor)
  }

  static func ==(lhs: Pb_Network_Messages_Screen, rhs: Pb_Network_Messages_Screen) -> Bool {
    if lhs._storage !== rhs._storage {
      let storagesAreEqual: Bool = withExtendedLifetime((lhs._storage, rhs._storage)) { (_args: (_StorageClass, _StorageClass)) in
        let _storage = _args.0
        let rhs_storage = _args.1
        if _storage._name != rhs_storage._name {return false}
        if _storage._uid != rhs_storage._uid {return false}
        if _storage._position != rhs_storage._position {return false}
        if _storage._orientation != rhs_storage._orientation {return false}
        if _storage._size != rhs_storage._size {return false}
        return true
      }
      if !storagesAreEqual {return false}
    }
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Pb_Network_Messages_Layout: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  static let protoMessageName: String = _protobuf_package + ".Layout"
  static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    10: .same(proto: "name"),
    20: .same(proto: "devices"),
    30: .same(proto: "screens"),
  ]

  mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      switch fieldNumber {
      case 10: try decoder.decodeSingularStringField(value: &self.name)
      case 20: try decoder.decodeRepeatedMessageField(value: &self.devices)
      case 30: try decoder.decodeRepeatedMessageField(value: &self.screens)
      default: break
      }
    }
  }

  func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    if !self.name.isEmpty {
      try visitor.visitSingularStringField(value: self.name, fieldNumber: 10)
    }
    if !self.devices.isEmpty {
      try visitor.visitRepeatedMessageField(value: self.devices, fieldNumber: 20)
    }
    if !self.screens.isEmpty {
      try visitor.visitRepeatedMessageField(value: self.screens, fieldNumber: 30)
    }
    try unknownFields.traverse(visitor: &visitor)
  }

  static func ==(lhs: Pb_Network_Messages_Layout, rhs: Pb_Network_Messages_Layout) -> Bool {
    if lhs.name != rhs.name {return false}
    if lhs.devices != rhs.devices {return false}
    if lhs.screens != rhs.screens {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Pb_Network_Messages_CalibrationValues: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  static let protoMessageName: String = _protobuf_package + ".CalibrationValues"
  static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    10: .same(proto: "angle"),
    20: .same(proto: "position"),
  ]

  fileprivate class _StorageClass {
    var _angle: Pb_Network_Messages_vec3? = nil
    var _position: Pb_Network_Messages_vec3? = nil

    static let defaultInstance = _StorageClass()

    private init() {}

    init(copying source: _StorageClass) {
      _angle = source._angle
      _position = source._position
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
        case 10: try decoder.decodeSingularMessageField(value: &_storage._angle)
        case 20: try decoder.decodeSingularMessageField(value: &_storage._position)
        default: break
        }
      }
    }
  }

  func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    try withExtendedLifetime(_storage) { (_storage: _StorageClass) in
      if let v = _storage._angle {
        try visitor.visitSingularMessageField(value: v, fieldNumber: 10)
      }
      if let v = _storage._position {
        try visitor.visitSingularMessageField(value: v, fieldNumber: 20)
      }
    }
    try unknownFields.traverse(visitor: &visitor)
  }

  static func ==(lhs: Pb_Network_Messages_CalibrationValues, rhs: Pb_Network_Messages_CalibrationValues) -> Bool {
    if lhs._storage !== rhs._storage {
      let storagesAreEqual: Bool = withExtendedLifetime((lhs._storage, rhs._storage)) { (_args: (_StorageClass, _StorageClass)) in
        let _storage = _args.0
        let rhs_storage = _args.1
        if _storage._angle != rhs_storage._angle {return false}
        if _storage._position != rhs_storage._position {return false}
        return true
      }
      if !storagesAreEqual {return false}
    }
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Pb_Network_Messages_CalibrationDevices: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  static let protoMessageName: String = _protobuf_package + ".CalibrationDevices"
  static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    10: .same(proto: "deviceA"),
    20: .same(proto: "deviceB"),
  ]

  mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      switch fieldNumber {
      case 10: try decoder.decodeSingularStringField(value: &self.deviceA)
      case 20: try decoder.decodeSingularStringField(value: &self.deviceB)
      default: break
      }
    }
  }

  func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    if !self.deviceA.isEmpty {
      try visitor.visitSingularStringField(value: self.deviceA, fieldNumber: 10)
    }
    if !self.deviceB.isEmpty {
      try visitor.visitSingularStringField(value: self.deviceB, fieldNumber: 20)
    }
    try unknownFields.traverse(visitor: &visitor)
  }

  static func ==(lhs: Pb_Network_Messages_CalibrationDevices, rhs: Pb_Network_Messages_CalibrationDevices) -> Bool {
    if lhs.deviceA != rhs.deviceA {return false}
    if lhs.deviceB != rhs.deviceB {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}