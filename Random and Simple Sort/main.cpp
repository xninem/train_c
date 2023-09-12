/*
 *  Title:maim
 *  Author: XuJiuming
 *  Date: 2023/09/12
 *  Description: ������ɶ�����������ԱȽ��
*/

#include <iostream>
#include "CreateRandomNum.h"
#include "SimpleSort.h"
#include "CompareArr.h"

#define maxLen 10000
#define maxVal 10000

using namespace std;

int main()
{
    cout << "Program Begin!" << endl;
    cout << endl;

    system_init ();

    int len = creatRandomNum (0, maxLen);
    int *p = creatRandomArray(len, maxVal);

    cout << "����ǰ����������Ϊ: ";
    for (int i = 0; i < len; i++)
    {
        cout << *(p + i) << " ";
    }
    cout << endl;

    int arr0[len];
    int arr1[len];
    int arr2[len];
    int arr3[len];

    copyArr (arr0, p, len);
    copyArr (arr1, p, len);
    copyArr (arr2, p, len);
    copyArr (arr3, p, len);

    comparater      (arr0, len);
    selectionSort   (arr1, len);
    bubbleSort      (arr2, len);
    insertSort      (arr3, len);

    cout << "ϵͳ����������Ϊ: ";
    for (int i = 0; i < len; i++)
    {
        cout << *(arr0 + i) << " ";
    }
    cout << endl;

    cout << "ѡ������������Ϊ: ";
    for (int i = 0; i < len; i++)
    {
        cout << *(arr1 + i) << " ";
    }
    cout << endl;

    cout << "ð������������Ϊ: ";
    for (int i = 0; i < len; i++)
    {
        cout << *(arr2 + i) << " ";
    }
    cout << endl;

    cout << "��������������Ϊ: ";
    for (int i = 0; i < len; i++)
    {
        cout << *(arr2 + i) << " ";
    }
    cout << endl;

    cout << "ѡ������Ľ��Ϊ��";
    compareArr (arr0, arr1, len);

    cout << "ð������Ľ��Ϊ��";
    compareArr (arr0, arr2, len);

    cout << "��������Ľ��Ϊ��";
    compareArr (arr0, arr3, len);


    cout << endl;
    cout << "Program End!" << endl;

    return 0;
}

