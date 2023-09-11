#include <iostream>
#include <random>
#include <time.h>
#include <iterator>

using namespace std;

//����������ӣ���Ҫ�ں����⣬�����ҽ�����һ��
default_random_engine e(time(0));

int creatRandomNum (int minVal, int maxVal);
int *creatRandomArray (int len, int maxVal);
void system_init ();

//����������һ��[minVal, maxVal]֮��������
int creatRandomNum (int minVal, int maxVal)
{
    uniform_int_distribution<unsigned> u(minVal, maxVal);
    return u(e);
}

//����������һ��������[0, maxLen]��ÿ��Ԫ����[0, maxVal]֮����������
int *creatRandomArray (int len, int maxVal)
{
    //ʹ�ö�̬����ķ�ʽ�����������飬��̬������ͷţ�����֮��������ȻΪ��
    int *arr = new int[len];
    cout << "����������Ϊ:" << " ";
    for (int i = 0; i < len; i++) {
        arr[i] = creatRandomNum (0, maxVal);
        cout << arr[i] << " ";
    }
    cout << endl;
    return arr;
}

//����ִ��ϵͳ��ʼ������֤����������������
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

    cout << "�Աȵ�����Ϊ:" << " ";
    for (int i = 0; i < len; i++) {
        cout << *(p + i) << " ";
    }
    cout << endl;

    cout << "Program End!" << endl;

    return 0;
}


