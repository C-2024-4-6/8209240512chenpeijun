#include<iostream>
using namespace std;
#define PI  3.14
int main()
{
	double r, h;
	cout << "请输入底面半径：";
	cin >> r;
	cout << '\n' << "请输入高：";
	cin >> h;
	double v = PI * r * r * h / 3;
	cout << '\n' << "圆锥的体积为:" << v;
	return 0;
}

