#include<iostream>
using namespace std;
#define PI  3.14
int main()
{
	double r, h;
	cout << "���������뾶��";
	cin >> r;
	cout << '\n' << "������ߣ�";
	cin >> h;
	double v = PI * r * r * h / 3;
	cout << '\n' << "Բ׶�����Ϊ:" << v;
	return 0;
}

