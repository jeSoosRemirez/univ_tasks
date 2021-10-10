#include <iostream>

using namespace std;

// Length of array function
int len_arr(int array[]){
    int l_arr = sizeof(array) / sizeof(array[0]);
    return l_arr;
}

// Series1
void summary(){
    int nums[] = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2}, result = 0;
    for (int i = 0; i < len_arr(nums); i++)
        result += nums[i];
    cout << "Summary is " << result;
}

int main() {
    return 0;
}
