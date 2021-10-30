#include "TNaryTree_item.h"

Item::Item(Point t1, Point t2, Point t3, Point t4, Point t5){
    data = Pentagon(t1,t2,t3,t4,t5);
}

Item::Item(){
    data = Pentagon();
}


Item::Item(Pentagon a){
    data = a;
}

Item::Item(Item* a){
    bro = a->bro;
    son = a->son;
    data = a->data;
}

Item* Item::Get_bro(){
    return bro;
}

Pentagon Item::Get_data(){
  return data;
}

Item* Item::Get_son(){
    return son;
}

void Item::Set_bro(Item* a){
    bro = a;
}

void Item::Set_son(Item* a){
    son = a;
}

void Item::Print(std::ostream &os){
    os << data.Area();
}

double Item::Area(){
    return data.Area();
}

Item::~Item(){};