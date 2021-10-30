#ifndef TNARYTREE_ITEM_H
#define TNARYTREE_ITEM_H

#include "pentagon.h"

class Item {
 public:
  Item(Point t1, Point t2, Point t3, Point t4, Point t5);
  Item(Pentagon a);
  Item(Item *a);
  Item();
  void Print(std::ostream &os);
  Item *Get_bro();
  Item *Get_son();
  Pentagon Get_data();
  void Set_bro(Item *a);
  void Set_son(Item *a);
  double Area();
  ~Item();
 private:
  Item *bro = nullptr;
  Item *son = nullptr;
  Pentagon data;
};

#endif