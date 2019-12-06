//
//  B-215.hpp
//  Talkers
//
//  Created by Valentin Dufois on 2019-12-02.
//

#ifndef B_215_hpp
#define B_215_hpp


#include "../../Behaviour.hpp"

class B215: public Behaviour {
public:
	B215(): Behaviour(215,	// ID
					  2,		// Tree ID
					  false,	// Is tree start ?
					  false,	// Force start ?
					  {		// Expected inputs
	},
					  {		// Expected outputs
		21500, // S-215-00
	}) {}

	virtual bool execute(Machine * machine) override {
		return true;
	}
};

#endif /* B_215_hpp */