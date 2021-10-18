#include "hexagon.h"

#include <iostream>
#include <cmath>

Hexagon::Hexagon()
    : t1(0, 0), t2(0, 0), t3(0, 0), t4(0, 0),
      t5(0, 0), t6(0, 0) {}

Hexagon::Hexagon(const Hexagon &hexagon) {
  this->t1 = hexagon.t1;
  this->t2 = hexagon.t2;
  this->t3 = hexagon.t3;
  this->t4 = hexagon.t4;
  this->t5 = hexagon.t5;
  this->t6 = hexagon.t6;
}
Hexagon::Hexagon(std::istream &is) {
  is >> t1 >> t2 >> t3 >> t4 >> t5 >> t6;
}

size_t Hexagon::VertexesNumber() {
  return 6; // return six
}

double Hexagon::Heron(Point A, Point B, Point C) {
  double AB = A.dist(B);
  double BC = B.dist(C);
  double AC = A.dist(C);
  double p = (AB + BC + AC) / 2;
  return sqrt(p * (p - AB) * (p - BC) * (p - AC));
}

double Hexagon::Area() {
  double area1 = Heron(t1, t2, t3);
  double area2 = Heron(t1, t4, t3);
  double area3 = Heron(t1, t4, t5);
  double area4 = Heron(t1, t5, t6);
  return area1 + area2 + area3 + area4;
}

void Hexagon::Print(std::ostream &os) {
  std::cout << "Hexagon: " << t1 << " " << t2 << " " << t3 << " " << t4
            << " " << t5 << " " << t6 << "\n";
}

//Hexagon::~Hexagon() {}