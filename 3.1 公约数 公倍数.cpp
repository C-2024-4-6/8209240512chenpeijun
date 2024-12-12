#include <iostream>
using namespace std;
void gcdlcm(int m, int n, int& gcd, int& lcm)
{
    int a = m, b = n;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;
    lcm = (m * n) / gcd;
}
int main() {
    int m, n;
    cin >> m >> n;
    int gcd, lcm;
    gcdlcm(m, n, gcd, lcm);
    cout << "最大公约数: " << gcd << endl;
    cout << "最小公倍数: " << lcm << endl;
    return 0;
}
