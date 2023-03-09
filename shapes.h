#ifndef _SHAPES_H_
#define _SHAPES_H_

#define PI 3.1415926

// Base class
class Shape { //建立一個叫Shape的物件 
public:
	Shape(double a = 0, double b = 0,double d =0) {
		width = a; height = b;radius =d;
	}
	~Shape() {}

	void setWidth(double w) {
		width = w;
	}
	void setHeight(double h) {
		height = h;
	}
	void setradius(double R){
		radius =R;
	}
	virtual double area() = 0;

protected:
	double width;
	double height;
	double radius;
};

class Rectangle : public Shape {
public:
	Rectangle(double a = 0, double b = 0) :Shape(a, b) { }

	double area() {
		return (width * height);
	}
};

class Triangle : public Shape {
	public:
		Triangle(double a =0, double b =0) :Shape(a, b){
		}
		double area(){
			return(width*height/2);
		}
};
class circle : public Shape{
	public:
		circle(double d=0) :Shape(d){
		}
		double area(){
			return(radius*radius*PI);
		}
};

#endif
