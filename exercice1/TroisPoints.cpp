#include "TroisPoints.h"

 TroisPoints::TroisPoints(const Point &p1, const Point &p2, const Point &p3)
{
	this->premier = p1;
	this->deuxieme = p2;
	this->troisieme = p3;


}

Point TroisPoints::get_premier() const
{


	return  this->premier;
}

Point TroisPoints::get_deuxieme() const
{
	return this->deuxieme;
}

Point TroisPoints::get_troisieme() const
{
	return this->troisieme;
}

void TroisPoints::set_premier(const Point& p1)
{
	this->premier = p1;
}

void TroisPoints::set_deuxieme(const Point& p2)
{
	this->deuxieme = p2;

}

void TroisPoints::set_troisieme(const Point& p3)
{
	this->troisieme = p3;
}

bool TroisPoints::testerAlignement() const
{
	double AB,AC,BC;
	AB = this->premier.calculerDistance(this->deuxieme);
	AC = this->premier.calculerDistance(this->troisieme);
	BC = this->deuxieme.calculerDistance(this->troisieme);
	if (AB == AC + BC ||AC==AB+BC||BC==AC+AB) {
		return true;
		
	}
	else
	{
		return false;
	}

	
}

bool TroisPoints::estTriangleEquilateral() const
{
	double AB, AC, BC;
	AB = this->premier.calculerDistance(this->deuxieme);
	AC = this->premier.calculerDistance(this->troisieme);
	BC = this->deuxieme.calculerDistance(this->troisieme);
	if (AB == AC == BC) {
		return true;

	}
	else
	{
		return false;
	}
	
}
