#include "calculate_2.h"
int cal_2::process(int a, int b) {
	int nAdd_ans = Base::add(a, b);
	int nAns_add_pow = pow(nAdd_ans);
	int nSub_ans = Base::sub(a, b);
	int nAns_sub_pow = pow(nSub_ans);
	int nAns = Base::sub(nAns_add_pow, nAns_sub_pow);
	return nAns;
}


int cal_2::pow(int nNum){
	return nNum * nNum;
}