#include <iostream>
using namespace std;

/* 3d chapter of Abramian book */

// Boolean1
void compare_num(){
    int num = 3;
    if (num > 0)
        cout << "True";
    else
        cout << "False";
}

// Boolean2 + Boolean3
void ever_or_odd(){
    int num = 3;
    if (num % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";
}

// Boolean4
void compare_two_nums(){
    int num_a = 4, num_b = 3;
    if (num_a > 2 && num_b >= 3)
        cout << "True";
    else
        cout << "False";
}

// Boolean5
void compare_a_b(){
    int num_a = 4, num_b = -3;
    if (num_a >= 0 || num_b < -2)
        cout << "True";
    else
        cout << "False";
}