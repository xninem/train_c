#include <iostream>
#include <random>
#include <time.h>

using namespace std;

//����������ӣ���Ҫ�ں����⣬�����ҽ�����һ��
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
    cout << "����0�ĸ���Ϊ��" << (double)cnt / (double)totaltimes <<endl;

    return 0;
}


