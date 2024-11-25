#include <iostream>
using namespace std;
int pear(int a)
{
	for (int i = 1; i <= 9; i++)
	{
		a = (a + 1) * 2;
	}
	return a;

}
int main()

{
	cout << pear(1);
}