#pragma once
#include"Point.h"
class TroisPoints
{
public:
	 TroisPoints(const Point&, const Point&, const Point&);
	inline Point get_premier()const;
	inline Point get_deuxieme()const;
	inline Point get_troisieme()const;
	inline void set_premier(const Point&);
	inline void set_deuxieme(const Point&);
	inline void set_troisieme(const Point&);
	bool testerAlignement()const;
	bool estTriangleEquilateral()const;
private:
	Point premier;
	Point deuxieme;
	Point troisieme;


};

