#include <iostream>

using namespace std;

void compareArr (int *arr0, int *arr1, int len) {
    for (int i = 0; i < len; i++) {
        if (arr0[i] != arr1[i]) {
            cout << "数据比对失败，失败的数据为：" << arr0[i] << " " << arr1[i] << endl;
            break;
        }
    }
    cout << "数据比对成功！" << endl;
}
