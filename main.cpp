#include <stdio.h>
#include <iostream>
#include "virtual/base.hpp"


int main() {
    person *p;
    boy b(3, "bb","hh");
    girl g(4, "gg");
    p = &b;
    p->sayInfo();
    p = &g;
    p->sayInfo();
    return 0;
}