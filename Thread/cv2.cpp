#include <iostream>       // std::cout
#include <thread>         // std::thread
#include <mutex>          // std::mutex
using namespace std;

class FizzBuzz {
private:
    int n;
    int num;
    condition_variable cv;
    mutex m;
public:
    FizzBuzz(int n) {
        this->n = n;
        num = 1;
    }
    void print_block(int n, char c) {
        for (int i=0; i<n; ++i) cout << c;
        cout << endl;
    }
    // printFizz() outputs "fizz".
    void fizz(function<void()> printFizz) {
        unique_lock<mutex> lk(m);
        //print_block(10000, '^');
        cout << "***No1" << endl;
        while (  num <= n )
        {
            //unique_lock<mutex> lk(m);
            if (num % 3 == 0 && num % 5 != 0)
            {
                printFizz();
                ++num;
                cv.notify_all();
            }
            cout << "end1\n";
            cv.wait(lk, [this] {return (num > n) || (num % 3 == 0 && num % 5 != 0); });
        }
    }

    // printBuzz() outputs "buzz".
    void buzz(function<void()> printBuzz) {
        unique_lock<mutex> lk(m);
        //print_block(10000, '#');
        cout << "***No2" << endl;
        while (  num <= n )
        {
            //unique_lock<mutex> lk(m);
            if (num % 5 == 0 && num % 3 != 0)
            {
                printBuzz();
                ++num;
                cv.notify_all();
            }
            cout << "end2\n";
            cv.wait(lk, [this] {return (num > n) || (num % 5 == 0 && num % 3 != 0); });
        }
    }

    // printFizzBuzz() outputs "fizzbuzz".
    void fizzbuzz(function<void()> printFizzBuzz) {
        unique_lock<mutex> lk(m);
        //print_block(10000, '%');
        cout << "***No3" << endl;
        while (  num <= n )
        {
            //unique_lock<mutex> lk(m);
            if (num % 3 == 0 && num % 5 == 0)
            {
                printFizzBuzz();
                ++num;
                cv.notify_all();
            }
            cout << "end3\n";
            cv.wait(lk, [this] {return (num > n) || (num % 3 == 0 && num % 5 == 0); });
        }
    }

    // printNumber(x) outputs "x", where x is an integer.
    void number(function<void(int)> printNumber) {
        unique_lock<mutex> lk(m);
        //print_block(10000, '&');
        cout << "***No4" << endl;
        while (  num <= n )
        {
            //unique_lock<mutex> lk(m);
            if (num % 3 != 0 && num % 5 != 0)
            {
                printNumber(num);
                ++num;
                if (num > n)
                {
                    cv.notify_all();
                    break;
                }
                if (num % 3 != 0 && num % 5 != 0)
                {
                    continue;
                }
                else
                {
                    cv.notify_all();
                }
            }
            cout << "end4\n";
            cv.wait(lk, [this] {return (num > n) || (num % 3 != 0 && num % 5 != 0); });
        }
    }
};


int main(int argc, char const *argv[])
{
    FizzBuzz fz(15);

    function<void()> fizz = []() {
        cout << "fizz" << endl;
    };

    function<void()> buzz = []() {
        cout << "buzz" << endl;
    };

    function<void()> fizzbuzz = []() {
        cout << "fizzbuzz" << endl;
    };

    function<void(int)> num = [](int n) {
        cout << n << endl;
    };

    thread th1([&]() {
        fz.fizz(fizz);
    });
    thread th2([&]() {
        fz.buzz(buzz);
    });
    thread th3([&]() {
        fz.fizzbuzz(fizzbuzz);
    });
    thread th4([&]() {
        fz.number(num);
    });
    th1.join();
    th2.join();
    th3.join();
    th4.join();

    return 0;
}
