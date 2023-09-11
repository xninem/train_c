#include <iostream>
#include <random>
#include <time.h>
#include <iterator>

using namespace std;

//设置随机种子，需要在函数外，设置且仅设置一次
default_random_engine e(time(0));

int creatRandomNum (int minVal, int maxVal);
int *creatRandomArray (int len, int maxVal);
void system_init ();

//函数，返回一个[minVal, maxVal]之间的随机数
int creatRandomNum (int minVal, int maxVal)
{
    uniform_int_distribution<unsigned> u(minVal, maxVal);
    return u(e);
}

//函数，返回一个长度在[0, maxLen]，每个元素在[0, maxVal]之间的随机数组
int *creatRandomArray (int len, int maxVal)
{
    //使用动态数组的方式生成所需数组，静态数组会释放，返回之后数组仍然为空
    int *arr = new int[len];
    cout << "产生的数组为:" << " ";
    for (int i = 0; i < len; i++) {
        arr[i] = creatRandomNum (0, maxVal);
        cout << arr[i] << " ";
    }
    cout << endl;
    return arr;
}

//任务，执行系统初始化，保证后续程序正常运行
void system_init () {
    //int tmp = creatRandomNum (0, 0);
    creatRandomNum (0, 0);
}

int main()
{
    system_init ();

    cout << "Hello world!" << endl;

    int len = creatRandomNum (0, 10);
    int *p = creatRandomArray(len, 100);

    cout << "对比的数组为:" << " ";
    for (int i = 0; i < len; i++) {
        cout << *(p + i) << " ";
    }
    cout << endl;

    cout << "Program End!" << endl;

    return 0;
}


