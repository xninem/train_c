#include <iostream>

using namespace std;

void compareArr (int *arr0, int *arr1, int len) {
    for (int i = 0; i < len; i++) {
        if (arr0[i] != arr1[i]) {
            cout << "���ݱȶ�ʧ�ܣ�ʧ�ܵ�����Ϊ��" << arr0[i] << " " << arr1[i] << endl;
            break;
        }
    }
    cout << "���ݱȶԳɹ���" << endl;
}
