#include <iostream>
#include<string>
#include<cmath>
using namespace std;
int parseHex(const char* const hexString)
{

	int num = 0, length = strlen(hexString);
	for (int i = 0; i<=length;i++)
	{
		if (hexString[i] >= '0' && hexString[i] <= '9')
			num += (hexString[i]-'0') * pow(16, length - 1 - i);
		else if (hexString[i] >= 'A' && hexString[i] <= 'F')
			num +=( hexString[i]-'A') * pow(16, length - 1 - i);
		else if (hexString[i] >= 'a' && hexString[i] <= 'f')
			num += (hexString[i] - 'a'+10) * pow(16, length - 1 - i);
		
	}
	return num;
}
int main()
{
	char a[100];
	cin.getline(a,20);
	int oct = parseHex(a);
	cout << oct;
}