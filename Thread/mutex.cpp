// mutex example
#include <iostream>       // std::cout
#include <thread>         // std::thread
#include <mutex>          // std::mutex

std::mutex mtx;           // mutex for critical section
std::condition_variable cv;

void print_block (int n, char c) {
  // critical section (exclusive access to std::cout signaled by locking mtx):
  //mtx.lock();
  //std::lock_guard<std::mutex> lock(mtx); //std::lock_guard 在构造函数中进行加锁，析构函数中进行解锁。
  std::unique_lock<std::mutex> lock(mtx);
  std::cout << "...fun1..." << c <<"\n";
  for (int i=0; i<n; ++i) { std::cout << c; }
  std::cout << '\n';
  cv.wait(lock, [](){return 1;});
  //mtx.unlock();
}

void print_num(int n, int num) {
  std::unique_lock<std::mutex> lock(mtx);
  std::cout << "...fun2..." << num <<"\n";
  for (int i=0; i<n; ++i) std::cout << num;
  std::cout << std::endl;
  cv.wait(lock, [](){return 1;});
}

int main ()
{
  std::thread th1 (print_block,500,'*');
  std::thread th2 (print_block,500,'$');
  std::thread th3 (print_num,500,0);
  th1.join();
  th2.join();
  th3.join();

  return 0;
}