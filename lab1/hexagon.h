#ifndef HEXAGON_H
#define HEXAGON_H

#include <iostream>

#include "figure.h"

class Hexagon : public Figure {

 private:
  Point t1;
  Point t2;
  Point t3;
  Point t4;
  Point t5;
  Point t6;

 public:
  Hexagon();
  Hexagon(const Hexagon &hexagon);
  Hexagon(std::istream &is);
  size_t VertexesNumber();
  double Area();
  void Print(std::ostream &os);
  static double Heron(Point, Point, Point);
};

#endif // HEXAGON_H