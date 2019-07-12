#include <stdio.h>
#include <iostream>
#include "virtual/base.hpp"
#include "c5/handler.h"

int date;

extern void func_extern();

int main() {
    date = 10;
    person *p;
    boy b(3, "bb", "hh");
    girl g(4, "gg");
    p = &b;
    p->sayInfo();
    p = &g;
    p->sayInfo();

    A a;
    a.test(100);
    int cnt = 4;
    while (cnt > 0) {
        a.count();
        cnt--;
    }

    func_extern();

    cout << "--------point begin-------" << endl;
    a.simplePoint();
    a.pointArray();
    cout << "--------point end-------" << endl;

    string str ;
    cout<<"input str info"<<endl;
    cin>>str;
    cin.ignore();
    cout << "string=" << str << endl;
    return 0;
}