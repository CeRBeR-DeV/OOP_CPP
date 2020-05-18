#include<iostream>

class Point
{
	double x;
	double y;
};

void main()
{
	int a;
	Point A; //создание экземпляра "А", структуры "Point"
	A.x = 2;
	A.y = 3;
	std::cout << A.x << "\t" << A.y << std::endl;

	Point* pA = &A;
	std::cout << pA->x << "\t" << pA->y << std::endl;
}