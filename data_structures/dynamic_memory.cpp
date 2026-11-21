#include <iostream>




int main(){
    char *grades = NULL;
    std:: cout << "Enter The Number Of Students\n";
    int *size = new int;


    std:: cin >> *size;

    grades = new char[*size];

    for (int i = 0; i < *size; i++)
    {
        char temp;
        std:: cout << "Enter The Grades:\n" << i + 1 << ":";
        std:: cin >> grades[i];
    }
    for (int i = 0; i < *size; i++) 
    {
        std::cout << grades[i] << " ";
    }

    delete[] grades;
    delete size;
    return 0;
};