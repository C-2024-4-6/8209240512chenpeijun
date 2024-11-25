#include <iostream>
using namespace std;
int gcd(int a, int b)
{
	while (b != 0) {
		int tmp = a;
		a = b;
		b = tmp % b;
	}
	return a;
}
int main()

{
	int a, b, min, max;
	cin >> a >> b;
	max = gcd(a, b);
	min = a / max * b;
	cout << "���Լ��Ϊ" << max << "����С������Ϊ" << min;
	return 0;
}
