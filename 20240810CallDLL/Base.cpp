#include "Base.h"

Base::Base(int (*add_D)(int, int), int(*sub_D)(int, int), int(*cmp_D)(int*, int*)) {
	add = add_D;
	sub = sub_D;
	cmp = cmp_D;
}