//
// Created by Administrator on 2025/5/5.
//
#include <array>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace  std;


enum my_enum {
    a =0,b,c
};
template<int N>
void  print_array(array<int,N> a) {
    for (auto & u:a) {
        cout<<u<<endl;
    }
}
void print_vector(int c) {
    cout << c<< endl;
}
namespace uc{
    void printa(string c) {
        cout<< "uc print ";
        cout <<c<<endl;
    }
}
namespace uk{
    namespace td{
        void printa(const char*  c) {
        cout<< "uk print ";
        cout <<c<<endl;
    }
    }
}
/*函数指针*/

void foreach(vector<int> a,int (*b)(int )){
    for (int &a1 :a ) {
        b(a1);
    }
}
// 不是重载直接报错 gcc编译器不一样
void test_array() {
    // array<int,5> a;
    // print_array(a);
    vector<int> a_v ={1,2,3,4,5,6};
    // foreach(a_v,print_vector);
    foreach(a_v,[](int c) ->int {cout<<c<<endl; return 0;});
    auto it =  find_if(a_v.begin(),a_v.end(),[](int value) {return value>3;});
    cout << *it<<endl;
    char *c ="hello world";
    namespace a = uk::td;
    a::printa(c);

}