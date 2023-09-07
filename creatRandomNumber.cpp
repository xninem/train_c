#include <iostream>
#include <random>
#include <time.h>

using namespace std;

//设置随机种子，需要在函数外，设置且仅设置一次
default_random_engine e(time(0));

int lenRandomvalRandom (int maxLen, int maxVal)
{
    ;

}

int creatRandomNum (int minVal, int maxVal)
{
    uniform_int_distribution<unsigned> u(minVal, maxVal);
    return u(e);
}

int main()
{
    cout << "Hello world!" << endl;

    int cnt = 0;
    int totaltimes = 1000000;
    for (int i = 0; i < totaltimes; i++)
    {
        if(creatRandomNum(-2, 9) == -1)
        {
            cnt++;
        }

    }
    cout << "产生0的概率为：" << (double)cnt / (double)totaltimes <<endl;

    return 0;
}


