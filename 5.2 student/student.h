#pragma once
class Student              //������
{
public:                   //���ó�Ա����ԭ������
	void display();
	void set_value(int no,char nam [20],char se)
	{
		num = no;
		for(int i=0;i<20;i++)
		name[i] = nam[i];
		sex = se;
	}
	Student() {};
	Student(int no, char nam[20], char se)
	{
		num = no;
		for (int i = 0; i < 20; i++)
			name[i] = nam[i];
		sex = se;
	}
private:
	int num;
	char name[20];
	char sex;
};
