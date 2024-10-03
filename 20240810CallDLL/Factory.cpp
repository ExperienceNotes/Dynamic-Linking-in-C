#include "Factory.h"
#include "calculate.h"
#include "calculate_2.h"
#include "calculate_3.h"

Base* Factory::Createprocess(string szCalName,
							 int (*add)(int, int), int (*sub)(int, int), int(*cmp)(int*, int*))
{
	Base* pc = NULL;
	if (0 == strcmp(szCalName.c_str(), "Addpow")) {
		pc = new cal(add, sub, cmp);
	}
	else if (0 == strcmp(szCalName.c_str(), "Subpow")) {
		pc = new cal_2(add, sub, cmp);
	}
	else if (0 == strcmp(szCalName.c_str(), "CmpNum")) {
		pc = new cal_3(add, sub, cmp);
	}
	return pc;
}