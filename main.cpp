#include <iostream>
#include <random>
#include <time.h>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    //生成0-9的均匀分布的随机数
    uniform_int_distribution<unsigned> u(0,9);
    default_random_engine e(time(0));
    int ans = u(e);
    int cnt = 0;
    int times = 1000000;
    for (int i = 0; i < times; i++) {
        if (u(e) == 9) cnt++;
    }
    cout << (double)cnt / (double)times;

    return 0;
}
