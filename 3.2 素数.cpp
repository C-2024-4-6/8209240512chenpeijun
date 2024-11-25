#include <iostream>
using namespace std;
bool is_prime(int num)
{
	for (int i = 2; i < num; i++)
		if (num % i == 0)
			return false;
	return true;

}
int main()

{
	int word = 0,a=0;
	for (int i = 1;; i++)
	{
		bool b = is_prime(i);
		if (b == true)
		{
			cout <<i<<' ';
			word++;
		}
		if (word == 10)
		{
			cout << endl;
			word = 0;
			a++;
		}
		if (a == 20)
			break;
	}
}