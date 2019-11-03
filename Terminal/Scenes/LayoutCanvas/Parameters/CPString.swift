//
//  CPString.swift
//  pb-terminal
//
//  Created by Valentin Dufois on 2019-11-03.
//

import AppKit

class CPString: NSView, CanvasParameter {
	var displayHeight: Float = 27

	@IBOutlet weak var label: NSTextField!
	@IBOutlet weak var field: NSTextField!

	weak var delegate: CPDelegate?

	static func make(label aLabel: String, defaultValue value: String, delegate aDelegate: CPDelegate?) -> CPString {
		let view:CPString = NSNib.make(fromNib: "CanvasParametersViews", owner: nil);
		view.label.stringValue = aLabel;
		view.field.stringValue = value;

		view.delegate = aDelegate

		return view;
	}

	func set(value: String) {
		field.stringValue = value;
	}

	@IBAction func fieldValueDidSet(_ sender: Any) {
		delegate?.property(label.stringValue, didUpdate: field.stringValue)
	}
}
