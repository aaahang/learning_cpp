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
    void origan_a_output() {
        cout << "origan_a_output" <<endl;
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
};
void output(origan * x) {
    x->output_x();
}
void  print_yourname(print_yourname * object) {
    object->print_name();
}
void  test_inherit() {
    inherit object1;
    object1.origan_add(5,6);
    print_yourname(&object1);
    string a = "1233";
    string b = "1233";
    string c = a+b;
    cout<< c<<endl;
}
