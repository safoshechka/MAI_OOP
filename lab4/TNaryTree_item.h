#ifndef TNARYTREE_ITEM_H
#define TNARYTREE_ITEM_H

#include <memory>
#include "pentagon.h"

template<class T>
class Item {
 public:
  Item(Point t1, Point t2, Point t3, Point t4, Point t5);
  Item(std::shared_ptr<T> a);
  Item(std::shared_ptr<Item<T>> a);
  Item();
  void Print(std::ostream &os);
  std::shared_ptr<Item<T>> Get_bro();
  std::shared_ptr<Item<T>> Get_son();
  T Get_data();
  void Set_bro(std::shared_ptr<Item> a);
  void Set_son(std::shared_ptr<Item> a);
  double Area();
  ~Item();
 private:
  std::shared_ptr<Item<T>> bro = nullptr;
  std::shared_ptr<Item<T>> son = nullptr;
  std::shared_ptr<T> data;
};

#endif