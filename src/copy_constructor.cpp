//
// Created by Administrator on 2025/5/3.
//
#include <iostream>
#include <string.h>
#include <vector>
#include "string"
using namespace std;

class  string1 {
private:
    int size;
    char * buffer ;
public:
    string1(const char * input) {
        size = strlen(input);
        buffer  = new char[size+1];
        memcpy(buffer,input,size+1);

    }
    string1(const string1 & a):size(a.size){ //&为了防止再复制{
        buffer = new char[size+1];
        memcpy(buffer,a.buffer,size+1);
    }
    ~string1() {
        delete[] buffer;
        cout << "string  is destoryde" <<endl;
    }
     friend ostream & operator <<(ostream & stream ,const string1 & uc) {
        stream << uc.buffer;
        return  stream;
    }
    char  &operator[](const int num) {
        return this->buffer[num];
    }
};
class vectorx{
public:
    float x,y,z;
    string name;
    vectorx (int x1,int y1,int z1,const string & a_name ):x(x1),y(y1),z(z1),name(a_name){
    cout << "vectorx "<<" "<<name<<" "<<"is copyed" <<endl;
    }
    ~vectorx(){
    cout << "vectorx" <<" "<<name<<" "<<"is destoryed" <<endl;
    }

};
// 一般使用const 加 &组合 防止形参 产生复制 调用构造函数 浪费系统性能
void string_transfer()
{
    string1 aa = "aaaahang"; //隐式转换
    string1 bb =aa; //隐式转换
    bb[3] = 'b';
    cout<< bb<<endl;
    cout << aa<< endl;
}
ostream & operator<<(ostream &steam,const vector<vectorx> &a) {
    for (const auto &k:a) {
        steam <<"{"<<k.x<<","<<k.y<<","<<k.z<<"}"<<endl;
    }
    return steam;
}
void test_copy_constructor() {
    // vectorx a1 = {1,2,3,"a1"};
    // vectorx a2 = {2,3,4,"a2"};
    // vector<vectorx> a ; //隐式转换
    // a.push_back(a1);
    // a.push_back(a2);
    // cout << a;
    cout<< "sadasd" << endl;
    while (1);
}