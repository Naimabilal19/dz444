#include<iostream>
using namespace std;

class Point
{
	int x;
	int y;
	int z;
public:
	Point()
	{
		x = 0;
		y = 0;
		z = 0;
	}

	void Input()
	{
		cout << "Input X = ";
		cin >> x;
		cout << "Input Y = ";
		cin >> y;
		cout << "Input Z = ";
		cin >> z;
	}

	void Print()
	{
		cout << "X = " << x;
		cout << "\nY = " << y;
		cout << "\nZ = " << z;
	}
};
int main()
{
	Point point1;
	point1.Input();

	point1.Print();
}