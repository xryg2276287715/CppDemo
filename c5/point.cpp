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

/**
 * 指针和数组相关
 * 数组指针、指针数组
 */
void A::pointArray() {
    cout << "---分隔 （数组指针）-1维数组-----" << endl;
    int arr[5] = {10, 11, 12, 13, 14};
    int *pp0, *pp1;
    int (*pp2)[5];
    pp0 = &arr[0]; //数组首元素地址，步长为1个int
    pp1 = arr;//数组首元素地址，步长为1个int
    pp2 = &arr;//数组首地址，步长为5个int
    cout << "pp0=" << pp0 << ";pp1" << pp1 << ";pp2=" << pp2 << endl;
    cout << "pp0+1=" << pp0 + 1 << ";pp1+1" << pp1 + 1 << ";pp2+1=" << pp2 + 1 << endl;
    cout << "*pp0=" << *pp0 << ";*pp1=" << *pp1 << ";*pp2=" << *pp2 << endl;
    cout << "**pp2=" << **pp2 << endl;
    cout << "*(pp0+1)=" << *(pp0 + 1) << ";*(pp1+1)" << *(pp1 + 1) << ";*(pp2+1)=" << *(pp2 + 1) << endl;
    cout << "**(pp2+1)=" << **(pp2 + 1) << endl;
    cout << "---分隔 （数组指针）-多维数组----" << endl;
    int arr2[3][4] = {{11, 12, 13, 14},
                      {21, 22, 23, 24},
                      {31}};
    int (*p20)[3][4];
    int (*p21)[4];
    int *p22;
    p20 = &arr2;//3*4列数组首地址，步长3*4个int
    p21 = &arr2[0];//第0行，数组首地址,步长4个int
    p22 = &arr2[0][0];//第0行，第0列 元素地址，步长1个int
    cout << "p20=" << p20 << ";p21=" << p21 << ";p22=" << p22 << endl;
    cout << "p20+1=" << p20 + 1 << ";p21+1=" << p21 + 1 << ";p22+1=" << p22 + 1 << endl;
    cout << "*p20=" << *p20 << ";*p21=" << *p21 << ";*p22=" << *p22 << endl;
    cout << "**p20=" << **p20 << ";**p21=" << **p21 << endl;
    cout << "***p20=" << ***p20 << endl;

    cout << "---分隔 （指针数组）p1-----" << endl;
    int *a0[3]; //存储3个指向char类型的数组
    int da[3] = {11, 22, 33};
    for (int i = 0; i < 3; i++) {
        a0[i] = &da[i];
    }
    int *(*p30)[3];
    p30 = &a0;

    //前两个数组首元素地址，最后一个为数组首地址
    cout << "a0=" << a0 << ";&a0[0]=" << &a0[0] << ";&a0=" << &a0 << endl;
    //a[i]为对应的指针存放地址
    cout << "a0[0]=" << a0[0] << ";a0[1]=" << a0[1] << endl;
    //a0数组元素地址
    cout << "&a0[0]=" << &a0[0] << ";&a0[1]=" << &a0[1] << endl;
    //*a0:数组首元素的地址，**a0:数组首元素地址上内容
    cout << "*a0=" << *a0 << "；**a0=" << **a0 << endl;
    //各指针地址上存放的具体值
    cout << "*a0[0]=" << *a0[0] << ";*a0[1]=" << *a0[1] << endl;
}