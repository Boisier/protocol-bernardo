//
//  S-109-00.hpp
//  Talkers
//
//  Created by Valentin Dufois on 2019-12-02.
//

#ifndef S_109_00_hpp
#define S_109_00_hpp

#include "../../Output.hpp"

class S10900 : public Output {
public:
	S10900(): Output(10900,					// Output ID
					 false,					// Is tree end ?
					 110,					// Next Behaviour ID
					 DELAY_DEFAULT,			// Is delayed
					 DELAY_VALUE_DEFAULT,		// Delay value (seconds)
					 DELAY_VARIANCE_DEFAULT,	// Delay variance (seconds)
					 {						// Output values
		"NBR_QUESTIONS"
	},
					 {						// Captions
		"{NBR_QUESTIONS_STR} précisément."
	}) {}

	inline bool isConditionValid(State &behaviourState) {
		_state["NBR_QUESTIONS_STR"] = std::to_string(std::get<int>(behaviourState["NBR_QUESTIONS"]));
		_state["NBR_QUESTIONS"] = behaviourState["NBR_QUESTIONS"];
		return true;
	};
};

#endif /* S_109_00_hpp */
