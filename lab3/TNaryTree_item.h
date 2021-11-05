#ifndef TNARYTREE_ITEM_H
#define TNARYTREE_ITEM_H

#include <memory>
#include "pentagon.h"

class Item {
 public:
  Item(Point t1, Point t2, Point t3, Point t4, Point t5);
  Item(std::shared_ptr<Pentagon> a);
  Item(std::shared_ptr<Item> a);
  Item();
  void Print(std::ostream &os);
  std::shared_ptr<Item> Get_bro();
  std::shared_ptr<Item> Get_son();
  Pentagon Get_data();
  void Set_bro(std::shared_ptr<Item> a);
  void Set_son(std::shared_ptr<Item> a);
  double Area();
  ~Item();
 private:
  std::shared_ptr<Item> bro = nullptr;
  std::shared_ptr<Item> son = nullptr;
  std::shared_ptr<Pentagon> data;
};

#endif