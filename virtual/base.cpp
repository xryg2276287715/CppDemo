//
// Created by Administrator on 2019/7/4.
//
#include <iostream>
#include "base.hpp"

using namespace std;

string person::getName() {
    return name;
}

int person::getAge() {
    return age;
}

person::person(int a, string n) {
    printf("call parent(a,n)\n");
    age = a;
    name = n;
}

person::~person() {
    printf("call ~parent()\n");
    age = 0;
    name = "";
}

void person::sayInfo() {
    cout << "persona - name:" + getName() << endl;
    cout << "persona - age:"  << getAge() << endl;
}


void boy::sayInfo() {
    cout << "boy - name:" + getName() << endl;
    cout << "boy - age:" << getAge() << endl;
    cout << "boy - hobby:" + getHobby() << endl;
}

string boy::getHobby() {
    return hobby;
}

void girl::sayInfo() {
    cout << "girl - name:" + getName() << endl;
    cout << "girl - age:"<< getAge() << endl;
}