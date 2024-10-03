#include "calculate_3.h"

bool cal_3::bprocess(int* a, int* b) {
	int ans = compareTwo(a, b, (int (*)(void*, void*))Base::cmp);
	if (ans == 0)
		return true;
	else
		return false;
}

int cal_3::compareTwo(void* a, void* b, int(*comp)(void*, void*)) {
	return (*comp)(a, b);
}