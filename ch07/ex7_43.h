#ifndef EX7_43_H_
#define EX7_43_H_

class NoDefault {
public:
    NoDefault(int n) : number(n) { }
private:
    int number;
};

class C {
public:
    C(int num = 0) : member(num) { }
private:
    NoDefault member;
};

#endif