#ifndef TNARYTREE_H
#define TNARYTREE_H

#include "TNaryTree_item.h"
#include "pentagon.h"

class TNaryTree {
    public:
        // Инициализация дерева с указанием размера
        TNaryTree(int n);
        // Полное копирование дерева 
        TNaryTree(const TNaryTree& other);
        // Добавление или обновление вершины в дереве согласно заданному пути.
        // Путь задается строкой вида: "cbccbccc", 
        // где 'c' - старший ребенок, 'b' - младший брат
        // последний символ строки - вершина, которую нужно добавить или обновить.
        // Пустой путь "" означает добавление/обновление корня дерева.
        // Если какой-то вершины в tree_path не существует, 
        //  то функция должна бросить исключение std::invalid_argument
        // Если вершину нельзя добавить из за переполнения,
        //  то функция должна бросить исключение std::out_of_range
        void Update(Pentagon &&polygon, std::string &&tree_path = "");
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
        Item* root;
};

#endif
