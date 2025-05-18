//
// Created by Administrator on 2025/5/14.
//
#include <iostream>
class cta{
public:
    static  int a;
    int b =0;
};
void test1_cp() {
    cta a;
    a.a =0;
    std::cout << a.a<<std::endl;;
}