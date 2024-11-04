#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	double a[3], c;
	cout << "请输入三边边长：";
	cin >> a[0] >> a[1] >> a[2];
	sort(a, a + 3);
	if (a[0] + a[1] <= a[2])
	{
		cout << "不构成三角形";
		return 0;
	}
	c = a[0] + a[1] + a[2];
	cout << "周长为" << c << endl;
	if (a[0] == a[1] || a[1] == a[2])
		cout << "该三角形是等腰三角形";
	else cout << "该三角形不是等腰三角形";
	return 0;
}