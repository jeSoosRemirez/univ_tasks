/*Lab work #2*/

#include <iostream>

using namespace std;

// int array_num[3][2] = {{2, 4}, {3, 4}, {4, 5}};
// int l_arr = 3;
void figure_opucleus(int arr_coord[10][2], int l_arr){
    int i = 0;
    int *array_to_work = new int[l_arr];
    int plus = 0, minus = 0;

    for (; i <= l_arr; i++){
        if (i == l_arr-1){
            int x = arr_coord[i][0], y = arr_coord[i][1];
            int a = arr_coord[0][0], b = arr_coord[0][1];
            int sides_mult = (a-x)*(b-y);
            array_to_work[i] = sides_mult;
            break;
        }

        int x = arr_coord[i][0], y = arr_coord[i][1];
        int a = arr_coord[i+1][0], b = arr_coord[i+1][1];

        int sides_mult = (a-x)*(b-y);
        array_to_work[i] = sides_mult;
    }

    for (i = 0; i < l_arr; i++){
        if (array_to_work[i] > 0)
            plus += array_to_work[i];
        else if (array_to_work[i] < 0)
            minus += array_to_work[i];
    }

    if (plus != l_arr && minus != l_arr)
        cout << "False" << endl;
    else
        cout << "True" << endl;
}