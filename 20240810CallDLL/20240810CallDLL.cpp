// 20240810CallDLL.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//
#include <stdio.h>
#include <Windows.h>
#include "Base.h"
#include "Factory.h"
#include <iostream>
using namespace std;
typedef int (*cal_number)(int, int);
typedef int (*cmp_number)(int*, int*);
int main()
{
    HINSTANCE hinstLib = LoadLibrary(TEXT("20200810DLL.dll"));
    if (hinstLib == NULL) {
        cout << "Error unable load DLL" << endl;
        system("pause");
        return 0;
    }
    else {
        cout << "successfully Load DLL" << endl;
    }
    cal_number nadd = (cal_number)GetProcAddress(hinstLib, "nAdd_Num");
    cal_number nsub = (cal_number)GetProcAddress(hinstLib, "nSub_Num");
    cmp_number bcmp = (cmp_number)GetProcAddress(hinstLib, "nCmp_Num");
    Base* pc = NULL;
    int na = 10;
    int nb = 12;
    int nans;
    pc = Factory::Createprocess("Addpow", nadd, nsub, bcmp);
    nans = pc->process(na, nb);
    cout << "Addpow ans = " << nans << endl;
    pc = Factory::Createprocess("Subpow", nadd, nsub, bcmp);
    nans = pc->process(na, nb);
    cout << "Subpow ans = " << nans << endl;
    pc = Factory::Createprocess("CmpNum", nadd, nsub, bcmp);
    int* nptr_a = &na;
    int* nptr_b = &nb;
    bool bans = pc->bprocess(nptr_a, nptr_b);
    cout << "CmpNum ans = "<< bans << endl;
    free(pc);
    FreeLibrary(hinstLib);
}


