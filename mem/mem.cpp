//
// Created by Administrator on 2019/7/12.
//
#include <iostream>
#include "mem.hpp"

using namespace std;

void testNew() {
    cout << "---------内存分配&销毁---" << endl;
    int *int_ptr = NULL;
    int_ptr = new int;
    cout << "int_ptr=" << int_ptr << ";*int_ptr=" << *int_ptr << endl;
    *int_ptr = 345;
    cout << "(赋值后)int_ptr=" << int_ptr << ";*int_ptr=" << *int_ptr << endl;
    delete int_ptr;
    cout << "(销毁后)int_ptr=" << int_ptr << ";*int_ptr=" << *int_ptr << endl;

}