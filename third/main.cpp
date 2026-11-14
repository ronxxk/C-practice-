#include <iostream>

int main(int argc, char const *argv[])
{
    float x;
    float y;
    std::string operation;
    std::string name;

    std::cout << "Enter your name\n";
    std::getline(std::cin >> std::ws, name);
    std::cout << "Enter the number\n";
    std::cin >> x;
    std::cout << "choose an operation\n1: +\n2: -\n3: /\n4: *\n";
    std::cin >> operation;
    std::cout << "Enter the second number\n";
    std::cin >> y; 


    if (operation == "1"){
        std::cout << x + y << "\n";
    }
    else if (operation == "2")
    {
        std::cout << x - y << "\n";
    }
    else if (operation == "3")
    {
        std::cout << x / y << "\n";
    }
    else if (operation == "4")
    {
        std::cout << x * y << "\n";
    }
    
    return 0;
}
