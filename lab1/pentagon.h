#ifndef PENTAGON_H
#define PENTAGON_H

#include <iostream>

#include "figure.h"

class Pentagon : public Figure {

 private:
  Point t1;
  Point t2;
  Point t3;
  Point t4;
  Point t5;

 public:
  Pentagon();
  Pentagon(const Pentagon &pentagon);
  Pentagon(std::istream &is);
  size_t VertexesNumber();
  double Area();
  void Print(std::ostream &os);
  static double Heron(Point, Point, Point);
};

#endif // PENTAGON_H