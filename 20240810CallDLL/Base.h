#pragma once

class Base {
public:
	Base(int (*)(int, int), int(*)(int, int), int(*)(int*, int*));
	virtual int process(int, int) { return 0; };
	virtual bool bprocess(int*, int*) { return false; };
	
	int (*add)(int, int);
	int (*sub)(int, int);
	int (*cmp)(int*, int*);
};