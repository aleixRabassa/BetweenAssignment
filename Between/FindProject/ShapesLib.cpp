#include <cmath>

/** Shape class */
class Shape
{
public:
	Shape();
	virtual double GetArea();
	virtual double GetPerimeter();
};

/** Triangle class */
class Triangle : private Shape
{
public:
	Triangle(double pSide1, double pSide2, double pSide3);
	double GetArea();
	double GetPerimeter();

private:
	double side1;
	double side2;
	double side3;
};

/** Rectangle class */
class Rectangle : private Shape
{
public:
	Rectangle(double pSide1, double pSide2);
	double GetArea();
	double GetPerimeter();

private:
	double side1;
	double side2;
};

/** Circle class */
class Circle : private Shape
{
public:
	Circle(double pRadio);
	double GetArea();
	double GetPerimeter();

private:
	double radio;
};

/** Shape constructor. */
Shape::Shape() {}

/** Virtual method to be implemented in the son class. Returns the area of the shape. */
double Shape::GetArea()
{
	return 0;
}

/** Virtual method to be implemented in the son class.. Returns the perimeter of the shape. */
double Shape::GetPerimeter()
{
	return 0;
}

/** Triangle constructor. */
Triangle::Triangle(double pSide1, double pSide2, double pSide3)
{
	side1 = pSide1;
	side2 = pSide2;
	side3 = pSide3;
}

/** Returns the area of the triangle. */
double Triangle::GetArea()
{
	double s = (side1 + side2 + side3) / 2;
	double area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
	return area;
}

/** Returns the perimeter of the triangle. */
double Triangle::GetPerimeter()
{
	return side1 + side2 + side3;
}

/** Rectangle constructor. */
Rectangle::Rectangle(double pSide1, double pSide2)
{
	side1 = pSide1;
	side2 = pSide2;
}

/** Returns the area of the rectangle. */
double Rectangle::GetArea()
{
	return side1 * side2;
}

/** Returns the perimeter of the rectangle. */
double Rectangle::GetPerimeter()
{
	return side1 * 2 + side2 * 2;
}

/** Circle constructor. */
Circle::Circle(double pRadio)
{
	radio = pRadio;
}

/** Returns the area of the circle. */
double Circle::GetArea()
{
	return 3, 14 * radio * radio;
}

/** Returns the perimeter of the circle. */
double Circle::GetPerimeter()
{
	return 2 * 3, 14 * radio;
}