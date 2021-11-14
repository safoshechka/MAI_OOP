#ifndef TNARYTREE_H
#define TNARYTREE_H

#include <memory>
#include "TNaryTree_item.h"
#include "pentagon.h"


// std::shared_ptr<>
template<class T>
class TNaryTree {
    public:
        TNaryTree(int n);
        TNaryTree(const TNaryTree& other);
        void Update(std::shared_ptr<T> polygon, std::string &&tree_path = "");
        void RemoveSubTree(std::string &&tree_path = "");
        bool Empty();
        double Area(std::string &&tree_path);
        int size();
        T GetItem(const std::string&& tree_path="");
        template<typename Y>
        friend std::ostream& operator<<(std::ostream& os, const TNaryTree<Y>& tree);
        virtual ~TNaryTree();
    private:
        int curr_number;
        int max_number;
        std::shared_ptr<Item<T>> root;
};

#endif
