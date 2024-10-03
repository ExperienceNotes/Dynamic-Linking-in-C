#pragma once
#include "Base.h"

class cal_3 :public Base {
public:
	cal_3(int (*add_D)(int, int), int(*sub_D)(int, int), int(*cmp_D)(int*, int*))
		: Base(add_D, sub_D, cmp_D) {};
	bool bprocess(int*, int*);
	int compareTwo(void*, void*, int(*)(void*, void*));
};