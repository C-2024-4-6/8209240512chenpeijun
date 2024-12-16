#include <iostream>
using namespace std;
void f(char* st, int i) {
    st[i] = '\0';
    cout << st << endl; // 输出当前字符串
    if (i > 1) f(st, i - 1);
}
int main() {
    char st[] = "abcd";
    f(st, 4);
    return 0;
}
