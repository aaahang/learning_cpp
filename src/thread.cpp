//
// Created by Administrator on 2025/5/8.
//
#include <thread>
#include <iostream>
#include <functional>
#include <chrono>
bool push_enter = false;
namespace stoicus_time {

    class timer {
    public:
        std::chrono::time_point<std::chrono::system_clock> start ,end;
        timer () {
            start = std::chrono::high_resolution_clock::now();
        }
        ~timer () {
            using  namespace std;
            end = std::chrono::high_resolution_clock::now();
            chrono::duration<float> t= end - start;
            cout << "we test times by using class that time is "<<t.count()<<endl;
        }
    };
    void work() {
       timer  a;
        for (int i =0; i<100; i++)
            std::cout << "test  time test"<<std::endl;

    }

}

void do_worker() {
    static int c=0;
    while (!push_enter) {
        auto start  =  std::chrono::high_resolution_clock::now();
        std::cout<< "this is  do_work" << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        auto end  =  std::chrono::high_resolution_clock::now();
        std::chrono::duration<float> t = end - start;
        std::cout << "time is "<< t.count() << std::endl;
    }
    }
int uc_2D_array_set_stoicus()
{
    int ** ptr = new int * [10];
    for (int i = 0; i<10 ;i++)
        ptr[i] =new int [10];
    for (int  i= 0 ; i<10 ;i ++) {
        for (int j=0;j<10;j++) {
            ptr[i][j] = i+j;
        }
    }
    for (int  i= 0 ; i<10 ;i ++) {
        for (int j=0;j<10;j++) {
            std::cout << ptr[i][j]<<std::endl;
        }
    }
    return 0;
}
int test_thread() {
    // int c=0;
    // std::thread  worker(do_worker);
    // std::cin.get();
    // push_enter = true;
    // stoicus_time::work();
    // worker.join();

    return 0;
}