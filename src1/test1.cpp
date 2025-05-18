//
// Created by Administrator on 2025/5/14.
//
#include <iostream>
class cta{
public:
    static  int a;
    int b =0;
    void static_change() {
        a  =10;
    }
};
using   std::cout;//只打开一个
using std::endl;
int cta::a = 0;
void test1_cp() {
    cta a;
    cta b;
    a.static_change();
    std::cout << b.a<<std::endl;;
    cout<< "hello world"<<endl;
}