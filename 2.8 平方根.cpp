#include <iostream>
using namespace std;
double squareroot(double a)
{
	if (a < 0)
		a = -a;
	double x = a, xl = x - 1;
	for (; abs(x - xl) > 0.00001;)
	{
		xl = x;
		x = (x + a / x) / 2.0;
	}
	return x;

}
int main()
{
	double a, b;
	cin >> a;
	b = squareroot(a);
	if (a < 0)cout << b << "i";
	else cout << b;
}
