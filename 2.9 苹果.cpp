#include <iostream>
using namespace std;

int main()
{
	int i=1,a=0;
	double v;
	for(i=1;;i++)
	{
		a += pow(2, i);
		if (a > 100) {
			a -= pow(2, i); break;
		}
	}
	v = 0.8 * a / i;
	cout << v<<endl<<a;
}
