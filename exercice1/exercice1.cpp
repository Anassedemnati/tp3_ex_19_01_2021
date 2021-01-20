

#include <iostream>
#include"Point.h"
#include"TroisPoints.h"

int main()
{
    double p1x, p1y, p2x, p2y, p3x, p3y;
    cout << "saisir les coordonnees du 1er point :x y" << endl;
    cin >> p1x>> p1y;
    cout << "saisir les coordonnees du 2eme point :x y" << endl;
    cin >> p2x >> p2y;
    cout << "saisir les coordonnees du 3eme point :x y" << endl;
    cin >> p3x >> p3y;
    Point p1(p1x, p1y);
    Point p2(p2x, p2y);
    Point p3(p3x, p3y);
    p1.print();
    p2.print();
    p3.print();
    Point pm;
    cout << "point milieu entre p1 et p2"<<endl;
    pm = p1.alculerMilieu(p2);
    pm.print();
    cout << "la distance entre p1 et p2" << endl;
    cout << p1.calculerDistance(p2);
    TroisPoints T(p1, p2, p3);
    if (T.testerAlignement()) {
        cout << "alignes";
    }
    else
    {
        cout << "non alignes";
    }
}

