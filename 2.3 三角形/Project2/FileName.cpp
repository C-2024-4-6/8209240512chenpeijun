#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	double a[3], c;
	cout << "���������߱߳���";
	cin >> a[0] >> a[1] >> a[2];
	sort(a, a + 3);
	if (a[0] + a[1] <= a[2])
	{
		cout << "������������";
		return 0;
	}
	c = a[0] + a[1] + a[2];
	cout << "�ܳ�Ϊ" << c << endl;
	if (a[0] == a[1] || a[1] == a[2])
		cout << "���������ǵ���������";
	else cout << "�������β��ǵ���������";
	return 0;
}