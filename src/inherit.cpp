//
// Created by Administrator on 2025/5/2.
//
#include <iostream>
#include <vector>
#include <sstream>
#include <ctime>
#include <unordered_map>
#include <algorithm>
#include <string.h>
#include <vector>
using namespace std;

class origan_a {
public:
    origan_a():kk(10){}
    int kk;
     mutable  int origan_a_count ;
    int  origan_a_output() const{ // 使用const 标记为只读函数 即不改变类中成员
        origan_a_count++;
        cout << "origan_a_output" <<endl;
        return  kk;
    }
};
class print_yourname {
protected:
    int value1, value2;
public:
    virtual  void  print_name() = 0;
};
class origan:public  print_yourname{
public:
    int x,y;
    origan():x(0),y(0) {
        cout << "origan is initialization"<< endl;;
    }
    origan(int ax):x(ax){}
    int origan_out() {
        cout<< "x is "<<x<<" y is " <<y <<" this is origan output"<<endl;
        return 0;
    }
    virtual  void  output_x() {
        cout << "origan x  is " << x << endl;
    }
};
class inherit : public origan,public origan_a
{
public:
    int a,b,c;
    inherit():a(0),b(0),c(0){}
    inherit(int ax) {
        x = ax+1;
    }
    int origan_add(int xa,int ya) {
        x += xa;
        y += ya;
        return 0;
    }
    int inherit_output() {
        cout<< "x is "<<x<<" y is " <<y <<" this is inherit output"<<endl;
        cout<< "a is "<<a<<" b is " <<b <<" this is inherit output"<<endl;
        return 0;
    }
    void output_x() override { //override 是一个错误判断
        cout << "inherit x is " << x<< endl;
    }
    void print_name() override {
        cout << "inherit" <<endl;
    }
    void protected_change(int a) {
        value1 = a;
    }
    void get() const {

    }
};
void  print_yourname(print_yourname * object) {
    object->print_name();
}
void origan_a_output(const inherit & e) { // 只能调用类中const 标识函数
    cout << e.origan_a_output()<<endl;
}
void ternary_operator() {
    int uk = 5;
    int ud = 1;
    cin>> ud;
    uk = ud>0 ? (ud<10 ? 10 :11): -5;
    cout<<uk <<endl;
}
void  test_inherit() {

    // inherit *object1_= new inherit; // 堆上分配
    // inherit object1; // 栈上分配
    // object1.origan_add(5,6);
    // print_yourname(&object1);
    // origan_a_output(object1);
    // cout << object1.origan_a_count;
    inherit object2 = 10;
}
