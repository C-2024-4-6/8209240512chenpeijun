#include <iostream>
using namespace std;
int main()
{
	char c = 0;
	int math = 0, alphabet = 0, space = 0, others = 0;
	for (;;)

	{
		c = getchar();
		if (c == '\n')
			break;
		else if (c >= '0' && c <= '9')
			math++;
		else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			alphabet++;
		else if (c == ' ')
			space++;
		else others++;
	}
	cout << "数字个数：" << math << endl;
	cout << "字母个数：" << alphabet << endl;
	cout << "空格个数：" << space << endl;
	cout << "其它字符个数：" << others << endl;
	return 0;
}
