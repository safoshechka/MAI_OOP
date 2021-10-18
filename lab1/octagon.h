#ifndef OCTAGON_H
#define OCTAGON_H

#include <iostream>

#include "figure.h"

class Octagon : public Figure {

private:
    Point t1;
    Point t2;
    Point t3;
    Point t4;
    Point t5;
    Point t6;
    Point t7;
    Point t8;

public:
    Octagon();
    Octagon(const Octagon& octagon);
    Octagon(std::istream &is);
    size_t VertexesNumber();
    double Area();
    void Print(std::ostream& os);

};

#endif // OCTAGON_H