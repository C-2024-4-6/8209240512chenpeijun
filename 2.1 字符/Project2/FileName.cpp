#include <iostream>
using namespace std;
int main() {
   char c;
   cout << "������һ���ַ�: ";
   cin >> c;
    if (c >= 'a' && c <= 'z') {
        char C = c - 32;
        cout << "ת��Ϊ��д: " << C << endl;
    }
    else {
        int ascii = static_cast<int>(c) + 1;
        cout << "����ַ��� ASCII ��ֵ: " << ascii << endl;
    }

    return 0;
}