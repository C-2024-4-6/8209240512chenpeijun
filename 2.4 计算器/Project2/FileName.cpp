#include <iostream>
using namespace std;

int main()
{
	int a, b, d;
	double e;
	cout << "�����������֣�";
	cin >> a >> b;
	char c;
	cout << endl<< "�������������";
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
			cout << "��������Ϊ0��";
				break;
		}
		e = 1.0*a / b;
		cout << e;
		break;
	case '%':
		if (b == 0)
		{
			cout << "��������Ϊ0��";
				break;
		}
		d = a % b;
		cout << d;
		break;
	default:
		cout << "������Ƿ�";
	}
}
