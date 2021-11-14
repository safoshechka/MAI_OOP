#include "TNaryTree_item.h"

template<class T>
Item<T>::Item(Point t1, Point t2, Point t3, Point t4, Point t5){
    *data = Pentagon(t1,t2,t3,t4,t5);
}

template<class T>
Item<T>::Item(){
    *data = T();
}

template<class T>
Item<T>::Item(std::shared_ptr<T> a){
    data = a;
}

template<class T>
Item<T>::Item(std::shared_ptr<Item<T>> a){
    bro = a->bro;
    son = a->son;
    data = a->data;
}

template<class T>
std::shared_ptr<Item<T>> Item<T>::Get_bro(){
    return bro;
}

template<class T>
T Item<T>::Get_data(){
  return *data;
}

template<class T>
std::shared_ptr<Item<T>> Item<T>::Get_son(){
    return son;
}

template<class T>
void Item<T>::Set_bro(std::shared_ptr<Item<T>> a){
    bro = a;
}

template<class T>
void Item<T>::Set_son(std::shared_ptr<Item<T>> a){
    son = a;
}

template<class T>
void Item<T>::Print(std::ostream &os){
    os << data->Area();
}

template<class T>
double Item<T>::Area(){
    return data->Area();
}

template<class T>
Item<T>::~Item(){};