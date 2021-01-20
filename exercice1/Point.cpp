#include "Point.h"

 Point::Point():abs(0),ord(0)
{

}

 Point::Point(double ab, double orr ):abs(ab),ord(orr)
{
}

inline double Point::get_abs() const
{
	return this->abs;
}

inline void Point::set_abs(double ab)
{
	this->abs = ab;
}

inline double Point::get_ord() const
{
	return this->ord;
}

inline void Point::set_ord(double o)
{
	this->ord = o;
}

void Point::print() const
{
	cout << "(" << this->abs << "," << this->ord << ")" << endl;

}

double Point::calculerDistance(const Point& p) const
{


	return sqrt(pow((this->abs-this->ord),2)+pow((p.abs-p.ord),2));
}

Point& Point::alculerMilieu(const Point& p) const
{
	Point *mp =new Point;
	mp->abs = (this->abs + p.abs) / 2;
	mp->ord = (this->ord + p.ord) / 2;
	return *mp;
}

Point& Point::operator+(const Point& p) const
{
	Point* sp = new Point;
	sp->abs = this->abs + p.abs;
	sp->ord = this->ord + p.ord;
	return *sp;
}

Point& Point::operator/(double di) const
{
	Point* mp = new Point;
	mp->abs = this->abs / di;
	mp->ord = this->ord / di;
	return *mp;
}
