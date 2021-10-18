#include "pentagon.h"
#include "hexagon.h"
#include "octagon.h"

void print_menu() {
  std::cout << "Choose a geometric shape:" << std::endl;
  std::cout << "1 - pentagon" << std::endl;
  std::cout << "2 - hexagon" << std::endl;
  std::cout << "3 - octagon" << std::endl;
}

int main() {
  int c;
  print_menu();
  while (std::cin >> c) {
    switch (c) {
      case 1: {
        std::cout << "Enter pentagon points:";
        Pentagon pen(std::cin);
        pen.Print(std::cout);
        std::cout << "The number of vertexes: " << pen.VertexesNumber() << "\n";
        std::cout << "Area:" << pen.Area() << "\n";
        break;
      }
      case 2: {
        std::cout << "Enter hexagon points:";
        Hexagon hex(std::cin);
        hex.Print(std::cout);
        std::cout << "The number of vertexes: " << hex.VertexesNumber() << "\n";
        std::cout << "Area:" << hex.Area() << "\n";
        break;
      }
      case 3: {
        std::cout << "Enter octagon points:";
        Octagon oct(std::cin);
        oct.Print(std::cout);
        std::cout << "The number of vertexes: " << oct.VertexesNumber() << "\n";
        std::cout << "Area:" << oct.Area() << "\n";
        break;

      }

    }
  }

}
