#include <iostream>
#include <cstring>
using namespace std;
class Cuboid             
{private:
	double length;
	double wideh;
	double height;
public:
	void InCuboid()
	{
		cout << "输入长宽高：";
		cin >> length >> wideh >> height;
	}
	double Volume()
	{
		return length * wideh * height;
	}
	void OutVolume()
	{
		cout << Volume()<<endl;
	}
};

int main()
{
	Cuboid cub[3];
	for (int i = 0; i < 3; i++)
		cub[i].InCuboid();
	for (int i = 0; i < 3; i++)
	{
		cout << "第" << i+1<<"个长方体的体积是：";
		cub[i].OutVolume();
	}
;



}
