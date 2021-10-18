#include "octagon.h"

#include <iostream>
#include <cmath>

Octagon::Octagon()
    : t1(0, 0), t2(0, 0), t3(0, 0), t4(0, 0),
      t5(0, 0), t6(0, 0), t7(0, 0), t8(0, 0) {}

Octagon::Octagon(const Octagon &octagon) {
  this->t1 = octagon.t1;
  this->t2 = octagon.t2;
  this->t3 = octagon.t3;
  this->t4 = octagon.t4;
  this->t5 = octagon.t5;
  this->t6 = octagon.t6;
  this->t7 = octagon.t7;
  this->t8 = octagon.t8;
}

Octagon::Octagon(std::istream &is) {
  is >> t1 >> t2 >> t3 >> t4 >> t5 >> t6 >> t7 >> t8;
}

size_t Octagon::VertexesNumber() {
  return 8;
}

double Heron(Point A, Point B, Point C) {
  double AB = A.dist(B);
  double BC = B.dist(C);
  double AC = A.dist(C);
  double p = (AB + BC + AC) / 2;
  return sqrt(p * (p - AB) * (p - BC) * (p - AC));
}

double Octagon::Area() {
  double area1 = Heron(t1, t2, t3);
  double area2 = Heron(t1, t4, t3);
  double area3 = Heron(t1, t4, t5);
  double area4 = Heron(t1, t5, t6);
  double area5 = Heron(t1, t6, t7);
  double area6 = Heron(t1, t7, t8);
  return area1 + area2 + area3 + area4 + area5 + area6;
}

void Octagon::Print(std::ostream &os) {
  std::cout << "Octagon: " << t1 << " " << t2 << " " << t3 << " " << t4
            << " " << t5 << " " << t6 << " " << t7 << " " << t8 << "\n";
}

//Octagon::~Octagon() {}