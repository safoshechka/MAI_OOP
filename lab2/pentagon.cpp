#include "pentagon.h"

#include <iostream>
#include <cmath>

Pentagon::Pentagon()
    : t1(0, 0), t2(0, 0), t3(0, 0), t4(0, 0),
      t5(0, 0) {}

Pentagon::Pentagon(const Pentagon &pentagon) {
  this->t1 = pentagon.t1;
  this->t2 = pentagon.t2;
  this->t3 = pentagon.t3;
  this->t4 = pentagon.t4;
  this->t5 = pentagon.t5;
}

Pentagon::Pentagon(Point t1_,Point t2_,Point t3_,Point t4_,Point t5_): t1(t1_), t2(t3_), t3(t3_), t4(t4_), t5(t5_){}

Pentagon::Pentagon(std::istream &is) {
  is >> t1 >> t2 >> t3 >> t4 >> t5;
}

size_t Pentagon::VertexesNumber() {
  return 5;
}

double Pentagon::Heron(Point A, Point B, Point C) {
  double AB = A.dist(B);
  double BC = B.dist(C);
  double AC = A.dist(C);
  double p = (AB + BC + AC) / 2;
  return sqrt(p * (p - AB) * (p - BC) * (p - AC));
}

double Pentagon::Area() {
  double area1 = Heron(t1, t2, t3);
  double area2 = Heron(t1, t4, t3);
  double area3 = Heron(t1, t4, t5);
  return area1 + area2 + area3;
}

void Pentagon::Print(std::ostream &os) {
  std::cout << "Pentagon: " << t1 << " " << t2 << " " << t3 << " " << t4
            << " " << t5 << " " << "\n";
}