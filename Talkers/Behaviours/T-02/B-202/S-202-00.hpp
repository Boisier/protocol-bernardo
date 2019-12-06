//
//  S-202-00.hpp
//  Talkers
//
//  Created by Valentin Dufois on 2019-12-02.
//

#ifndef S_202_00_hpp
#define S_202_00_hpp

#include "../../Output.hpp"

class S20200: public Output {
public:

	S20200(): Output(20200,	// Output ID
					 false,	// Is tree end ?
					 203,	// Next Behaviour ID
					 DELAY_DEFAULT,	// Is delayed
					 DELAY_VALUE_DEFAULT,		// Delay value (seconds)
					 DELAY_VARIANCE_DEFAULT ,		// Delay variance (seconds)
					 {		// Output values
	},
					 {		// Captions
		"Et bien."
	}) {}

	virtual bool isConditionValid(const State &behaviourState) override {
		return true;
	};
};

#endif /* S_202_00_hpp */