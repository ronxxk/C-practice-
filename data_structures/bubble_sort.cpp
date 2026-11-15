#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>& arr){
    if (arr.size() > 1)
    {
        int temp;
        for (size_t i = 0; i < arr.size() - 1; i++)
        {
            for (size_t j = 0; j < arr.size() - i - 1; j++)
            {
                if (arr[j] > arr[j+1])
                {
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j + 1] = temp;
                }
            }        
        }
    }
}

int main() {
    std::vector<int> arr = {5, 1, 9, 3};
    bubbleSort(arr);

    for (int num : arr) {
        std::cout << num << " ";
    }
    return 0;
}