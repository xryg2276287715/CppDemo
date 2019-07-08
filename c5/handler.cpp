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


