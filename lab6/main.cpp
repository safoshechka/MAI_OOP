#include <cstdlib>
#include <iostream>
#include <memory>
#include <cstdint>

#include "Pentagon.h"
#include "Hexagon.h"
#include "Octagon.h"
#include "Item.h"
#include "TNaryTree.h"
#include "Figure.h"

void TestTree() {
    TNaryTree<Figure> tree;

    tree.Insert(std::make_shared<Pentagon>(5),1,1);
    tree.Insert(std::make_shared<Pentagon>(4),1,2);
    tree.Insert(std::make_shared<Hexagon>(3),1,3);
    tree.Insert(std::make_shared<Octagon>(2),2,4);

    for (auto i : tree) {
        i->Print();
        std::cout << std::endl;
    }

    tree.remove(1);
}

void TestAllocationBlock()
{
    TAllocationBlock allocator(sizeof(int),10);

    int *a1=nullptr;
    int *a2=nullptr;
    int *a3=nullptr;
    int *a4=nullptr;
    int *a5=nullptr;

    a1 = (int*)allocator.Allocate();
    *a1 =1;
    std::cout << "a1 pointer value:" << *a1 << std::endl;
    a2 = (int*)allocator.Allocate();
    *a2 =2;
    std::cout << "a2 pointer value:" << *a2 << std::endl;
    a3 = (int*)allocator.Allocate();
    *a3 =3;
    std::cout << "a3 pointer value:" << *a3 << std::endl;

    allocator.Deallocate(a1);
    allocator.Deallocate(a3);

    a4 = (int*)allocator.Allocate();
    *a4 =4;
    std::cout << "a4 pointer value:" << *a4 << std::endl;
    a5 = (int*)allocator.Allocate();
    *a5 =5;
    std::cout << "a5 pointer value:" << *a5 << std::endl;
    std::cout << "a1 pointer value:" << *a1 << std::endl;
    std::cout << "a2 pointer value:" << *a2 << std::endl;
    std::cout << "a3 pointer value:" << *a3 << std::endl;

    allocator.Deallocate(a2);
    allocator.Deallocate(a4);
    allocator.Deallocate(a5);
}

void help(){
    std::cout << "Press 1 to get help" << std::endl;
    std::cout << "Press 2 to add figure in tree" << std::endl;
    std::cout << "Press 3 to get a number of nodes on level" << std::endl;
    std::cout << "Press 4 to print tree" << std::endl;
    std::cout << "Press 5 to delete figure from tree" << std::endl;
    std::cout << "Press 6 to get demo iterator" << std::endl;
    std::cout << "Press 0 to exit" << std::endl;
}

int main(int argc, char** argv) {

    TestAllocationBlock();
    TestTree();
    system("pause");
    return 0;
}
