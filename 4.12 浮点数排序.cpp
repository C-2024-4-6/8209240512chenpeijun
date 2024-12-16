#include <iostream>
using namespace std;

void bubbleSort(double arr[], int size) {
    bool changed;
    do {
        changed = false;
        for (int j = 0; j < size - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                changed = true;
            }
        }
    } while (changed);
}

int main() {
    double numbers[10];

    cout << "请输入10个双精度数字：" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }

    bubbleSort(numbers, 10);

    cout << "排序后的数字为：" << endl;
    for (int i = 0; i < 10; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
