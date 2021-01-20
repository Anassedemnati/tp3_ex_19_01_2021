#pragma once
#include<iostream>
#include<math.h>
using namespace std;
class Point
{
public:
	 Point();
	 Point(double,double);
	inline double get_abs()const;
	inline void set_abs(double);
	inline double get_ord()const;
	inline void set_ord(double);
	void print() const;
	double calculerDistance(const Point & )const;
	Point& alculerMilieu(const Point&)const;
	Point& operator+(const Point&)const;
	Point& operator/(double)const;




private:
	double abs;
	double ord;




};

