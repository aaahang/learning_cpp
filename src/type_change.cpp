//
// Created by Administrator on 2025/5/8.
//
#include <iostream>
#include <algorithm>
using namespace  std;
class base {
public:
    int *ptr;
    base(int x) {
        cout<<"this is base x "<<x<<endl;
        ptr = new int;
        *ptr =x;
    }
    virtual ~base() { //确保父类的析构函数是虚函数
        cout << "this destoryed base x" <<endl;
        delete[] ptr;
    }

};
class intherit :public base {
public:
    intherit(int x):base(x) {
        cout<< "this is inherit" <<endl;
    }
    ~intherit() {
        cout << "this destoryed inherit  x" <<endl;
    }
};
int test_type() {
    // int  a = 50;
    // double c  = *(double*)& a;
    // std::cout << c<<std::endl;
    int c=0;
    for (int i=0; i<100000;i++) {
        c= i+5;
    }
    // base d(10);
    //
    // base *t=  new intherit(10);
    // delete t;
    return 0;
}