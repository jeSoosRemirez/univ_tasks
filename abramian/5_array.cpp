#include <iostream>
#include <algorithm>

using namespace std;

/* 8th and 9th chapters of Abramian book */

// Array1
void generator(){
    int count = 15, arr_size = 0, arr_id = 0, arr_s;

    // Loop to check array size
    for (int i = 1; i <= count; i++){
        if (i % 3 == 0){
            arr_size++;
        }
        else if (i % 3 >= 1)
            continue;
        else
            break;
    }

    int array[arr_size];
    for (int i = 1; i <= count; i++){
        if (i % 3 == 0){
            array[arr_id] = i;
            arr_id++;
        }
        else if (i % 3 >= 1)
            continue;
        else
            break;
    }
    for (int i:array)
        cout << i << " ";
}

// Array2
void pow_generator(){
    int const n = 10;
    int pows_array[n], num;

    for (int i = 0; i < n; i++){
        pows_array[i] = num;
        num = 2*num;
    }
    for (auto x : pows_array)
        cout << x << " ";
}

// Array3
void prog_generator(){
    int const n = 10;
    int prog_array[n], start_num = 3, d = 3; // d is difference in progression

    for (int i = 1; i <= n; i++)
        prog_array[i-1] = start_num + d*i;

    for (auto x : prog_array)
        cout << x << " ";
}

// Array18
void arr_checker(){
    int array[10] = {4, 5, 6, 1, 7, 8, 9, 10, 11, 2};
    int l_arr = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < l_arr; i++){
        if (array[i] < array[9]){
            cout << array[i];
            break;
        }
        else
            continue;
    }
}

// Array19
void arr_both_checker(){
    int array[] = {2, 30, 40, 50, 17, 30, 20};
    int l_arr = sizeof(array) / sizeof(array[0]);
    for (int i = 1; i < l_arr; i++){
        if (array[i] > array[0] && array[i] < array[l_arr-1]){
            cout << array[i];
            break;
        }
        else
            continue;
    }
}

// Array20
void summary_range(){
    int start_n = 3, end_n = 6, array[7] = {1,2,3,4,5,6,7}, sum_arr = 0;
    for (; start_n < end_n; start_n++)
        sum_arr += array[start_n];
}

// Array51
void inverse_arr(){
    int arr_a[] = {1,2,3,4};
    int l_arr_a = sizeof(arr_a) / sizeof(arr_a[0]);
    int arr_b[l_arr_a];

    for (auto x : arr_a){
        arr_b[l_arr_a-1] = x;
        l_arr_a--;
    }

    cout << "arr_a = { ";
    for (auto x : arr_a)
        cout << x << ", ";
    cout << "}" << endl;
    cout << "arr_b = { ";
    for (auto x : arr_b)
        cout << x << ", ";
    cout << "}" << endl;
}

// Array52
void arr_system(){
    int arr_a[] = {2,3,4,10};
    int l_arr_a = sizeof(arr_a) / sizeof(arr_a[0]);
    int arr_b[l_arr_a];

    for (int i = 0; i < l_arr_a; i++){
        if (arr_a[i] < 5)
            arr_b[i] = arr_a[i]*2;
        else
            arr_b[i] = arr_a[i]/2;
    }
    for (auto x : arr_b)
        cout << x << " ";
}

// Array53
void arr_generator(){
    int arr_a[] = {3, 2, 3, 5, 5}, arr_b[] = {5, 4, 2, 2, 1, 7}, max_a, max_b, l_arr_c;
    int const l_arr_a = sizeof(arr_a) / sizeof(arr_a[0]), l_arr_b = sizeof(arr_b) / sizeof(arr_b[0]);
    int sort_arr_a[l_arr_a], sort_arr_b[l_arr_b];

    // Copying arrays A and B
    copy(begin(arr_a), end(arr_a), begin(sort_arr_a));
    copy(begin(arr_b), end(arr_b), begin(sort_arr_b));

    // Creates array C with most length
    if (l_arr_a > l_arr_b)
        l_arr_c = l_arr_a;
    else
        l_arr_c = l_arr_b;
    int arr_c[l_arr_c];
    for (int i = 0; i < l_arr_c; i++)
        arr_c[i] = 0;

    // Max array A
    sort(sort_arr_a, sort_arr_a+l_arr_a);
    max_a = sort_arr_a[l_arr_a-1];
    for (int i = 0; i < l_arr_a; i++){
        if (arr_a[i] == max_a){
            arr_c[i] = max_a;
            break;
        }
        else
            continue;
    }

    // Max array B
    sort(sort_arr_b, sort_arr_b+l_arr_b);
    max_b = sort_arr_b[l_arr_b-1];
    for (int i = 0; i < l_arr_b; i++){
        if (arr_b[i] == max_b){
            arr_c[i] = max_b;
            break;
        }
        else
            continue;
    }

    for (auto lol : arr_c)
        cout << lol;
}

// Array65
void arr_increase(){
    int array[] = {1,2,3,4,5}, add_to = 1;
    for (int i = 0; i < 5; i++)
        array[i] = array[i] + add_to;
}

// Array66
void arr_odd(){
    int array[] = {1,2,3,4,5}, add_to;

    for (int i = 0; i < 5; i++) {
        if (array[i] % 2 == 0){
            add_to = array[i];
            break;
        }
    }
    for (int i = 0; i < 5; i++){
        if (array[i] % 2 == 0)
            array[i] += add_to;
    }
}

// Array67
void arr_even(){
    int array[] = {1,2,3,4,5}, add_to;

    for (int i = 4; i >= 0; i--) {
        if (array[i] % 2 != 0){
            add_to = array[i];
            break;
        }
    }
    for (int i = 0; i < 5; i++){
        if (array[i] % 2 == 0)
            array[i] += add_to;
    }
}