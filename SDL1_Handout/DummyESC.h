#ifndef __DUMMYESC_H__
#define __DUMMYESC_H__

#include "Module.h"
#include "Globals.h"
#include <conio.h>

class DummyESC : public Module
{
public:
	DummyESC() {};
	~DummyESC() {};

	update_status Update() {
		update_status ret = update_status::UPDATE_CONTINUE;
		if (_kbhit())
			ret = update_status::UPDATE_STOP;

		return ret;
	}
};

#endif // __DUMMYESC_H__