#pragma once
#include "Base.h"

class cal_2 :public Base {
public:
	cal_2(int (*add_D)(int, int), int(*sub_D)(int, int), int(*cmp_D)(int*, int*))
		: Base(add_D, sub_D, cmp_D) {};
	int process(int, int);
	int pow(int);
};
