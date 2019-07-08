#include <stdio.h>
#include <iostream>
#include "virtual/base.hpp"
#include "c5/handler.h"

int main() {
    person *p;
    boy b(3, "bb","hh");
    girl g(4, "gg");
    p = &b;
    p->sayInfo();
    p = &g;
    p->sayInfo();

    A a;
    a.test(100);
    return 0;
}