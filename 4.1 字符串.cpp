#include <iostream>
#include<string>
using namespace std;
int indexof(const char* s1, const char* s2)
{
	const char* result = strstr(s2, s1);
	return result ? (result - s2) : -1;
}
int main()
{
	char s1[100], s2[100];
	cin.getline(s1,20);
	cin.getline(s2, 20);
	cout << indexof(s1, s2);
	return 0;

}