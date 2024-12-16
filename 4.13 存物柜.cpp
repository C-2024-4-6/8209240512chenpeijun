#include <iostream>
using namespace std;

int main() {
    const int size = 100;
    bool lockers[size] = { false };
    for (int student = 1; student <= size; student++) {
        for (int locker = student - 1; locker < size; locker += student) {
            lockers[locker] = !lockers[locker];
        }
    }
    cout << "开着的存物柜有：";
    for (int i = 0; i < size; i++) {
        if (lockers[i]) {
            cout << (i + 1) << " "; 
        }
    }
    cout << endl;

    return 0;
}
