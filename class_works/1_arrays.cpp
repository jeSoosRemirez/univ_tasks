/*
    Docstrings here
    Task of Dmytro Khomych
    Variant 3
*/

#include <iostream>
// #include <algorithm>

using namespace std;

// Swap func
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main() {
    int const n = 5;
    int arr_nums[n] = {1, 2, -3, 4, 5}, l_arr = sizeof(arr_nums) / sizeof(arr_nums[0]), sum_nums = 0, prod_nums = 0;

    // Multiplication of even nums
    for (int i = 0; i < l_arr; i++) {
        if (i % 2 == 0)
            prod_nums *= arr_nums[i];
        else
            continue;
    }

    // Sum of nums between 0 and -1 indexes of array
    for (int i = 1; i < l_arr-1; i++)
        sum_nums += arr_nums[i];

    // Sorting part

    // Easy way
    // sort(arr_nums, arr_nums+l_arr);

    // Complicated way
    int i, j;

    for (i = 0; i < n-1; i++)
        for (j = 0; j < n-i-1; j++)
            if (arr_nums[j] > arr_nums[j+1])
                swap(&arr_nums[j], &arr_nums[j+1]);
}