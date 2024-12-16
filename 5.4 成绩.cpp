#include <iostream>
#include <cstring>
using namespace std;
class Student
{
public:
	int num;
	int mark;


	void set()
	{
		cin >> num >> mark;
	}
};
	int maxIndex = 0;
	void max(Student* students, int size)
	{

		for (int i = 1; i < size; i++)
		{
			if (students[i].mark > students[maxIndex].mark) {
				maxIndex = i;
			};
		}
	}
	int main()
	{
		Student stu[5];
		for (int i = 0; i < 5; i++)
			stu[i].set();
		max(stu, 5);
		cout << stu[maxIndex].num;

	}