#include <iostream>
#include<iomanip>
using namespace std;
int main()

{
	double TH, TS;
	cout << "�����뻪���¶ȣ�";
	cin >> TH;
	TS = 5.0 / 9 * (TH - 32);
	cout << "��Ӧ�����¶�Ϊ" << setiosflags(ios::fixed)<<setprecision(2)<< TS;
	return 0;
}
