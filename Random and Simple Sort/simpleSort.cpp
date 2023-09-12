/*
 *  Title:simpleSort
 *  Author: XuJiuming
 *  Date: 2022/11/30
 *  选择排序，冒泡排序，插入排序时间复杂度均为O(N2)，额外空间复杂度均为O(1)
*/

#include <iostream>
#include <algorithm>

using namespace std;

void swapArr (int *arr, int i, int j);

//选择排序，从小到大
void selectionSort (int *arr, int n){
    if (n < 2) return;
    for (int i = 0; i < n; i++){
        int minIndex = i;
        for (int j = i + 1; j < n; j++){
            minIndex = (arr[j] < arr[minIndex]) ? j : minIndex;
        }
        swapArr (arr, i, minIndex);
    }
}

//冒泡排序，从小到大
void bubbleSort (int *arr, int n){
    if (n <2) return;
    for (int i = n-1; i > 0; i--){
        for (int j = 0; j < i; j++){
            if (arr[j] > arr[j+1]){
                swapArr (arr, j, j+1);
            }
        }
    }
}

//插入排序
void insertSort (int *arr, int n){
    for (int i = 1; i < n; i++){
        for (int j = i-1; j >= 0 && arr[j] > arr[j+1]; j--){
            swapArr (arr, j, j+1);
        }
    }
}

//互换函数
void swapArr (int *arr, int i, int j){
    int tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
}

//比较器
void comparater (int *arr, int n){
    sort (arr, arr + n);
}

void copyArr (int *arr0, int *arr1, int n) {
    for (int i = 0; i < n; i++) {
        arr0[i] = arr1[i];
    }
}
