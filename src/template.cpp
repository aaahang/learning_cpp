//
// Created by Administrator on 2025/5/5.
//
#include <iostream>
using namespace std;
template <int N>
class ucc {
public:
    int a,b;
    int u[N];
    ucc(int ax,int bx):a(ax),b(bx) {
        cout <<  "this is created" << endl;
    }
    ucc(const ucc &a): a(a.a),b(a.b) {
        int  i = N;
        for (auto &t : a.u) {
            u[i] = t;
            i--;
        }
        cout<< "this is copyed" <<endl;
    }
    int get(){return  N;}
};
class ucc1 {
public:
    int a,b;

    ucc1(int ax,int bx):a(ax),b(bx) {
        cout <<  "this is created" << endl;
    }
    ucc1(const ucc1 & a):a(a.a),b(a.b) {
        cout << "this is  copy" <<endl;
    }
};

ostream & operator<<(ostream & steam ,const ucc<5> &a) {
    steam << a.a<< "," << a.b<< endl;
    steam <<"{"<< a.u<<"}"<<endl;
    return steam;
}

ostream & operator<<(ostream & steam ,const ucc1 &a) {
    steam << a.a<< "," << a.b<< endl;
    return steam;
}
template<typename T>
void print(T a) {
    std::cout << a<<endl;
}

auto fun(int a)->int  {
    return a;
}

void test_template()
{


}