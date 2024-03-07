#include "Vector.h"
#include <iostream>

int main()
{
    Vector vectorZero;
    std::cout << "Zero:" << std::endl;
    vectorZero.Print();

    Vector vectorOne(1, 1, 1);
    std::cout << std::endl << "One:" << std::endl;
    vectorOne.Print();

    Vector copyOfVectorOne(vectorOne);
    std::cout << std::endl << "Copy of one:" << std::endl;
    copyOfVectorOne.Print();

    copyOfVectorOne.Set(1, 2, 3);
    std::cout << std::endl << "Copy of one after editing:" << std::endl;
    copyOfVectorOne.Print();

    std::cout << std::endl << "Module of one after editing:" << std::endl;
    std::cout << copyOfVectorOne.GetModule() << std::endl;

    vectorZero.Set(vectorOne);
    std::cout << std::endl << "Zero after editing:" << std::endl;
    vectorZero.Print();
}
