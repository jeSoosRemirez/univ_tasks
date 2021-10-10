#include <iostream>
#include <cmath>

using namespace std;

/* 8th and 9th chapters of Abramian book */

void len_arr(array){
    l_arr = sizeof(array) / sizeof(array[0]);
    return l_arr;
}

// Series1
void summary(){
    int nums[] = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2}, result = 0, l_arr;
    l_arr = sizeof(nums) / sizeof(nums[0]);
    for (int i = 0; i < l_arr; i++)
        result += nums[i];
    cout << "Summary is " << result;
}

// Series2
void multiplication(){
    int nums[] = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2}, result = 0, l_arr;
    l_arr = sizeof(nums) / sizeof(nums[0]);
    for (int i = 0; i < l_arr; i++)
        result *= nums[i];
    cout << "Multiplication is " << result;
}

// Series3
void avarage(){
    float nums[] = {2, 2, 2, 2, 2, 2, 2, 2, 7, 2}, result = 0, l_arr;
    l_arr = sizeof(nums) / sizeof(nums[0]);
    for (int i = 0; i < l_arr; i++)
        result += nums[i];
    float avarage = result / l_arr;
    cout << "Avarage is " << avarage;
}

// Series4
void calc_nums(){
    int sum_num = 0, mult_num = 1, count, input_num;
    cout << "Count: ";
    cin >> count;
    for (int i = 1; i <= count; i++){
        cout << "Number " << i << ": ";
        cin >> input_num;
        sum_num += input_num;
        mult_num *= input_num;
    }
    cout << "Sum is: " << sum_num << " | Mult is: " << mult_num;
}

// Series10
void is_all_positive(){
    int nums[] = {2, 2, -2}, l_arr;
    string result = "True";
    l_arr = sizeof(nums) / sizeof(nums[0]);
    for (int i = 0; i < l_arr; i++) {
        if (nums[i] < 0) {
            result = "False";
            break;
        }
    }
    cout << result;
}

// Proc1
void nums_power(){
    int nums[] = {2, 3, 4, 5};
    for (int i = 0; i < 4; i++){
        int num_powered = nums[i]*nums[i]*nums[i];
        cout << nums[i] << "|" << num_powered << endl;
    }
}

// Proc2
void nums_power(){
    int nums[] = {2, 3, 4, 5};
    for (int i = 0; i < 4; i++){
        int num_pow2 = nums[i]*nums[i];
        int num_pow3 = nums[i]*nums[i]*nums[i];
        int num_pow4 = nums[i]*nums[i]*nums[i]*nums[i];
        cout << nums[i] << "|" << num_pow2 << "|" << num_pow3 << "|" << num_pow4 << endl;
    }
}

// Proc3
void mean(){
    float nums[] = {2, 3, 4, 5};
    string letters[] = {"A", "B", "C", "D"};
    for (int i = 0; i < 4; i++){
        float avarage = (nums[0] + nums[i]) / 2;
        float geom = sqrt(nums[0] * nums[i]);
        cout << "(" << letters[0] << ", " << letters[i] << ") = " << avarage << " | " << geom << endl;
    }
}

// Proc4
void mean(){
    float nums[] = {2, 3, 4};
    for (int i = 0; i < 3; i++){
        float perim =  nums[i]*3;
        float area = pow(nums[i], 2)*(sqrt(3)/2);
        cout << i << " - perimeter = " << perim << " | area = " << area << endl;
    }
}

// Proc5
void square_calc() {
    float nums[] = {2, 3, 4};
    for (int i = 0; i < 3; i++) {
        float perim = nums[i] * 4;
        float area = pow(nums[i], 2);
        cout << i << " - perimeter = " << perim << " | area = " << area << endl;
    }
}

// MinMax1
void min_max_list(){
    int nums[] = {2, 1, 5, 0}, l_arr = sizeof(nums) / sizeof(nums[0]);
    sort(nums, nums + l_arr);
    int min = nums[0], max = nums[l_arr-1];
    cout << "Max: " << max << " | Min: " << min;
}

// MinMax2
void min_square_area(){
    int sides[][2] = {{4, 5}, {2, 2}, {5, 5}};
    int l_sides = sizeof(sides) / sizeof(sides[0]);
    int squares[l_sides];
    for (int i = 0; i < l_sides; i++)
        squares[i] = sides[i][0] * sides[i][1];
    int l_squares = sizeof(squares) / sizeof(squares[0]);
    sort(squares, squares + l_squares);
    int min = squares[0];
    cout << "Min: " << min;
}

// MinMax3
void min_square_perim(){
    int sides[][2] = {{4, 5}, {2, 2}, {5, 5}};
    int l_sides = sizeof(sides) / sizeof(sides[0]);
    int squares[l_sides];
    for (int i = 0; i < l_sides; i++)
        squares[i] = (sides[i][0] + sides[i][1]) * 2;
    int l_squares = sizeof(squares) / sizeof(squares[0]);
    sort(squares, squares + l_squares);
    int min = squares[0];
    cout << "Min: " << min;
}

// MinMax4
void min_max_list(){
    int nums[] = {2, 1, 5, 0}, l_arr = sizeof(nums) / sizeof(nums[0]);
    sort(nums, nums + l_arr);
    int min = nums[0], max = nums[l_arr-1];
    cout << "Min: " << min;
}

// MinMax5
void max_obj(){
    int mas_vol[][2] = {{4, 5}, {2, 2}, {5, 5}}, min_val, min_id, densities[] = {};
    int l_arr = sizeof(mas_vol) / sizeof(mas_vol[0]);
    int squares[l_arr];
    for (int i = 0; i < l_arr; i++){
        int density = mas_vol[i][0] * mas_vol[i][1];
        densities[i] = density;
        if ((sizeof(densities) / sizeof(densities[0]) >= 2){
            if (densities[i] > densities[i-1]) {
                min_val = densities[i-1];
                min_id = i-1
            }
            else {
                min_val = densities[i];
                min_id = i;
            }
        }
    cout << "Min obj: " << min_val << " | Id: " << min_id;
}