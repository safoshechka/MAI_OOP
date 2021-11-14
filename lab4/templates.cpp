#include "TNaryTree.h"
#include "TNaryTree.cpp"
#include "TNaryTree_item.cpp"

template class TNaryTree<Pentagon>;
template class Item<Pentagon>;
template std::ostream& operator<< <Pentagon>(std::ostream&, TNaryTree<Pentagon> const&);