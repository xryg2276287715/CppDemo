//
// Created by Administrator on 2019/7/8.
//
#include <iostream>
#include "handler.h"

using namespace std;
typedef class A *pointer;

void A::test(int ad) {
    cout << pointer(ad) << endl; //相当于快速赋值
}

void A::count() {
    static int i=0;
    i++;
    cout<<"i="<<i<<endl;
}

extern  int date;
void func_extern(){
    cout<<"date:"<<date<<endl;
}

