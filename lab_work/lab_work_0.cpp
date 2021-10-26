/*Lab work #1*/

#include <iostream>

using namespace std;

int len_counter(int digit, int to_trans){
    int count_num = to_trans, len_arr = 0;
    for (; to_trans > digit; len_arr++){
        count_num /= digit;
        if (count_num <= 0)
            return len_arr;
        else
            continue;
    }
    return len_arr;
}


void into_digit(int num_ten, int digit){
    int rest, i = 0;
    int len = len_counter(digit, num_ten);
    int *res_arr = new int[len];

    for (; num_ten > digit; i++){
        rest = num_ten % digit;
        num_ten /= digit;
        res_arr[i] = rest;
        if (num_ten >= 0)
            continue;
        else if (num_ten < 0)
            break;
    }

    res_arr[len] = 1;

    for (; len != -1; len--)
        cout << res_arr[len];
    cout << endl;
}


auto power_func(auto number, auto power){
    int i = 1, some_num = number;

    if (power == 0){
        number = 1;
        return number;
    }

    else if (power >= 1){
        while (i != power){
            number *= some_num;
            i++;
        }
    }

        // Problems here
    else if (power < 0){
        while (i != power){
            number *= some_num;
            i--;
        }
        number = 1 / number;
        return number;
    }

    else if (power > 0 && power < 1){
        cout << "Dunno how to find the root, to be honest." << endl;
    }

    cout << number << endl;
    return number;
}