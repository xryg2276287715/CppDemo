//
// Created by Administrator on 2019/7/11.
//
#include <iostream>
#include "handler.h"

using namespace std;

void A::simplePoint() {
    int p = 3;
    int *p1;
    int **p2;
    int ***p3;

    cout << "p val=" << p << ";p addr=" << &p << endl;
    p1 = &p;
    cout << "p1 val=" << p1 << ";p1 addr =" << &p1 << "; p1 ->" << *p1 << endl;

    p2 = &p1;
    cout << "p2 val=" << p2 << ";p2 addr=" << &p2 << ";p2 ->" << *p2 << ";p2 -> ->" << **p2 << endl;

    p3 = &p2;
    cout << "p3 val=" << p3 << ";p3 addr=" << &p3 << ";p3 ->" << *p3 << ";p3 ->->" << **p3 << ";p3 ->->->" << ***p3
         << endl;
}

void A::pointArray() {

    //TODO
}