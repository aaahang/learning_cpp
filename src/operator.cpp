#include <iostream>
#include <vector>
//
// Created by Administrator on 2025/5/3.
//
using namespace std;
class Vetor2 {
public:
    int x,y;
    Vetor2(int ax, int ay):x(ax),y(ay){}
    Vetor2  add(Vetor2 a) {
        return Vetor2(a.x+x,a.y+y);
    }
    Vetor2 operator +(Vetor2 a) {
         return  add(a);
    }
    Vetor2 multipe(Vetor2 a) {
        return Vetor2(a.x*x,a.y*y);
    }
    Vetor2 operator *(Vetor2 & a) {
        a.x = 3;
        a.y = 3;
        return  multipe(a);
    }
};
ostream & operator<< (ostream &steam,const Vetor2 &a) {
    steam << a.x <<"," << a.y<<endl;
    return  steam;
}
int operator + (int a ,Vetor2 b) {
    return  a -b.x;
}
int operator + (Vetor2 b,int a) {
    return  a+b;
}

 void  test_operator() {
     Vetor2 t(1,1),t1(2,3) ,t3(2,2);
     Vetor2 t2  = t+ t1 *t3;
    // cout<<t2<<t1;
    cout << t2 + 33<<endl;

 }