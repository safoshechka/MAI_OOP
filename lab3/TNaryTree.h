#ifndef TNARYTREE_H
#define TNARYTREE_H

#include <memory>
#include "TNaryTree_item.h"
#include "pentagon.h"


// std::shared_ptr<>
class TNaryTree {
    public:
        // Инициализация дерева с указанием размера
        TNaryTree(int n);
        // Полное копирование дерева 
        TNaryTree(const TNaryTree& other);
        void Update(std::shared_ptr<Pentagon> polygon, std::string &&tree_path = "");
        // Удаление поддерева
        void RemoveSubTree(std::string &&tree_path = "");
        // Проверка наличия в дереве вершин
        bool Empty();
        // Подсчет суммарной площади поддерева
        double Area(std::string &&tree_path);
        int size();
        Pentagon  GetItem(const std::string&& tree_path="");
        // Вывод дерева в формате вложенных списков, где каждый вложенный список является:
        // "S0: [S1: [S3, S4: [S5, S6]], S2]", где Si - площадь фигуры
        friend std::ostream& operator<<(std::ostream& os, const TNaryTree& tree);
        virtual ~TNaryTree();
    private:
        int curr_number;
        int max_number;
        std::shared_ptr<Item> root;
};

#endif
