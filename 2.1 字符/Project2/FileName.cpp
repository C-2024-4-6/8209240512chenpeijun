#include <iostream>
using namespace std;
int main() {
   char c;
   cout << "请输入一个字符: ";
   cin >> c;
    if (c >= 'a' && c <= 'z') {
        char C = c - 32;
        cout << "转换为大写: " << C << endl;
    }
    else {
        int ascii = static_cast<int>(c) + 1;
        cout << "后继字符的 ASCII 码值: " << ascii << endl;
    }

    return 0;
}