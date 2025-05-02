//
// Created by Administrator on 2025/5/3.

#include <algorithm>
#include <iostream>
#include <memory>
using namespace  std;
class oct1 {
public:
    int a ;
     explicit oct1(int ax):a(ax){} // explicit 拒绝构造函数的隐式调用
    int print() {
        cout << "this  is "<<a<<endl;
         return 0;
    }
};

// void print_oct(oct1 a) {
//     a.print();
// }

class oct2 {
public:
    int x;
    oct2() {
        cout << "we have create a oct2" << endl;
    }
    void print() {
        cout<< "this is oct2"<<endl;
    }
    ~oct2() {
        cout << "we have destory a oct2" << endl;
    }
};

int  test_memery_class()
{
    {
        weak_ptr<oct2> oct2_ptr_shared1;
        {
            // unique_ptr<oct2> oct2_ptr(new oct2); // 智能指针的构造函数使用了explicit
            shared_ptr<oct2> oct2_ptr_shared(new  oct2);
            oct2_ptr_shared1  = oct2_ptr_shared ;

            // oct2 * oct2_ptr =  new oct2;
            // oct2_ptr->print();
            // delete oct2_ptr;
        }
    }
    return 0;
}