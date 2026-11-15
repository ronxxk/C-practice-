#include <iostream>



int factorial(int num){
    if (num <= 1){
        return 1;
    }
    else{
        return num * factorial(num - 1);
    }   
}

int fibonacci(int num){
    if (num <= 1)
    {
        return num;
    }
    else{
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}

int main(){
    int x = 5;
    std::cout << factorial(x) << "\n" << fibonacci(x);
}
