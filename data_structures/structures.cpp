#include <iostream>
#include <span>

void display_arr(std::span<const int> arr){
    std::cout << "[";
    for (size_t i = 0; i < arr.size(); i++)
    {
        std::cout << arr[i] <<",";
    }
    std::cout << "]\n";

}

int find_index(std::span<const int> arr, int num){
    for (size_t i = 0; i < arr.size(); i++)
    {
        if (arr[i] == num)
        {
            return i;
        }
    }        
    return -1;
}

int main(){
    int array[] = {1,9,2,3,4,5,6,7,8,8,2,3};
    int num;

    display_arr(array);
    std::cout << "Enter an element to search\n";
    std::cin >> num;

    std::cout << "Index: " << find_index(array, num) << "\n";
    return 0;
}
