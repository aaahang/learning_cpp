//
// Created by Administrator on 2025/5/8.
//
#include <iostream>
#include <vector>
#include <algorithm>

std::ostream operator <<(std::ostream & steam ,const std::vector<std::vector<int>> &a) {
    for (auto&i :a) {
        for (auto&j :i)
            steam << j<<" ";
        steam<<std::endl;
    }
 }
int test_sort() {
    std::vector<std::vector<int>> a= {{1,2,3},{2,3},{1,3,4,6}};
    sort(a.begin(),a.end(),
        [](std::vector<int>a,std::vector<int>b) {
            if (a.size()<b.size())
                return true;
            else return  false;
        });
    std::cout<< a<<std::endl;
    return 0;

}