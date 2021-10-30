#include <iostream>
#include "pentagon.h"
#include "TNaryTree.h"

int main() {
  TNaryTree t(5);
  t.Update(Pentagon(Point(0, 0), Point(0, 1), Point(1, 2), Point(2, 1), Point(2, 0)), "");
  t.Update(Pentagon(Point(0, 0), Point(0, 4), Point(4, 5), Point(5, 4), Point(5, 0)), "b");
  t.Update(Pentagon(Point(0, 0), Point(0, 4), Point(4, 5), Point(5, 4), Point(5, 0)), "bb");
  t.Update(Pentagon(Point(0, 0), Point(0, 4), Point(4, 5), Point(5, 4), Point(5, 0)), "bbc");
  t.Update(Pentagon(Point(0, 0), Point(0, 4), Point(4, 5), Point(5, 4), Point(5, 0)), "c");
  std::cout << t.size() << "\n";
  std::cout << t.Area("") << "\n";
  std::cout << t.size() << "\n";
  t.GetItem("").Print(std::cout);
  TNaryTree q(t);
  std::cout << q.size() << " " << q.Area("") << "\n";
  std::cout << t << '\n' << q;
  t.RemoveSubTree("");
  std::cout << t.Area("") << "\n";
}