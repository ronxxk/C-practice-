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


int search(std::vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        while (l <= r){
            int mid = (r + l)/2;
            if (target > nums[mid]){
                l = mid + 1;
            }
            else if (target < nums[mid]){
                r = mid - 1;
            }
            else{
                return mid;
            }
        }
        return -1;
}


int main() {
    std::vector<int> arr = {5, 1, 9, 3};
    bubbleSort(arr);
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << "\n" << search(arr, 3);
    
    return 0;
}

