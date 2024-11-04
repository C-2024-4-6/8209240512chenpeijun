#include <iostream>
#include<iomanip>
using namespace std;
int main()

{
	double TH, TS;
	cout << "请输入华氏温度：";
	cin >> TH;
	TS = 5.0 / 9 * (TH - 32);
	cout << "对应摄氏温度为" << setiosflags(ios::fixed)<<setprecision(2)<< TS;
	return 0;
}
