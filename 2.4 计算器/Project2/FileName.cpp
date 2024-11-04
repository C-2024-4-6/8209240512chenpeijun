#include <iostream>
using namespace std;

int main()
{
	int a, b, d;
	double e;
	cout << "输入两个数字：";
	cin >> a >> b;
	char c;
	cout << endl<< "请输入运算符：";
	cin >> c;
	switch (c) {
	case '+':
		d = a + b;
		cout << d;
		break;
	case '-':
		d = a - b;
		cout << d;
		break;
	case '*':
		d = a * b;
		cout << d;
		break;
	case '/':
		if (b == 0)
		{
			cout << "除数不能为0！";
				break;
		}
		e = 1.0*a / b;
		cout << e;
		break;
	case '%':
		if (b == 0)
		{
			cout << "除数不能为0！";
				break;
		}
		d = a % b;
		cout << d;
		break;
	default:
		cout << "运算符非法";
	}
}
