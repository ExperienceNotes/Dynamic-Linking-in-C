#pragma once
#include "Base.h"

class cal :public Base {
public:
	cal(int (*add_D)(int, int), int(*sub_D)(int, int), int(*cmp_D)(int*, int*))
		: Base(add_D, sub_D, cmp_D) {};
	int process(int, int) override;
	//bool process(int*, int*);
	int pow(int);
};