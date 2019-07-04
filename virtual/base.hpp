//
// Created by Administrator on 2019/7/4.
//
#include <string>

using namespace std;

class person {
public:
    virtual void sayInfo();

    string getName();

    int getAge();

    person(int a, string n);

    ~person();

private :
    int age;
    string name;
};


class boy : public person {
public:
    void sayInfo();

    boy(int ba, string bn, string h) : person(ba, bn) {
        printf("call boy(g,n) \n");
        hobby = h;
    }

    string getHobby();
private :
    string hobby;
};

class girl : public person {
public:
    void sayInfo();

    girl(int ga, string gn) : person(ga, gn) {
        printf("call girl(g,n) \n");
    }
};

