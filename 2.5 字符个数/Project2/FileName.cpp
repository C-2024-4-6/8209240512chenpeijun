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
	cout << "���ָ�����" << math << endl;
	cout << "��ĸ������" << alphabet << endl;
	cout << "�ո������" << space << endl;
	cout << "�����ַ�������" << others << endl;
	return 0;
}
