#pragma once

#include "Base.h"
#include <string>
using namespace std;

class Factory {
public:
	static Base* Createprocess(string,
							   int (*)(int, int), int (*)(int, int), int(*)(int*, int*));
};