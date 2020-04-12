#include <iostream>
#include <thread>
#include <cstdlib> //sleep
#include <unistd.h>
#include <mutex>
 
using namespace std;
std::mutex m1, m2;

void t1()  //普通的函数，用来执行线程
{
    for (int i = 0; i < 10; ++i)
    {
        m1.lock();
        cout << "t1111\n";
        sleep(1);
        m2.unlock();
    }
}
void t2()
{
    for (int i = 0; i < 10; ++i)
    {   
        m2.lock();
        cout << "t22222\n";
        sleep(1);
        m1.unlock();
    }
}
int main()
{
    //m2.lock();
    //m1.unlock();

    thread th1(t1);  //实例化一个线程对象th1，使用函数t1构造，然后该线程就开始执行了（t1()）
    thread th2(t2);
 
    th1.join(); // 必须将线程join或者detach 等待子线程结束主进程才可以退出
    th2.join(); 
 
    //or use detach
    //th1.detach();
    //th2.detach();
 
    cout << "here is main\n\n";
 
    return 0;
}