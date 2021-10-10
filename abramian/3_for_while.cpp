#include <iostream>
#include <cmath>

using namespace std;

/* 8th and 9th chapters of Abramian book */

// For1
void counter(){
    int n = 1, k = 10, count = 0;
    for (; count <= k; count++)
        cout << n << endl;
}

// For2
void counter_a_to_b(){
    int a = 1, b = 10;
    for (; a <= b; a++)
        cout << a << endl;
}

// For3
void counter_b_to_a(){
    int a = 1, b = 10;
    for (; b >= a; b--)
        cout << b << endl;
}

// For4
void candy_price_int(){
    int candy = 1, count = 10, price = 5;
    for (; candy <= 10; candy++)
        cout << price*candy << endl;
}

// For5
void candy_price_float(){
    int count = 10, price = 5;
    float candy = 0.1;
    for (; candy <= 1.0; candy+0.1)
        cout << price*candy << endl;
}

// While1
void free_space() {
    int a = 10, b = 3;
    while (a >= b) {
        a -= b;
    }
    cout << a << endl;
}

// While2
void section_b_in_a(){
    int a = 10, b = 3, sections = 0;
    while (a <= b){
        b -= a;
        sections++;

    }
    cout << sections << endl;
}

// While3
void rest_n_k(){
    int n = 10, k = 3, rest;
    while (k < n){
        rest = n - k;
        n -= k;
    }
    cout << rest << endl;
}

// While4
void power_checker(){
    int n = 81, power = 1;
    while (n <= pow(3, power)){
        power += 1;
        if (n == pow(3, power))
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
}
// While5
void power_definer(){
    int n = 32, power = 1;
    while (n <= pow(2, power)){
        power += 1;
        if (n == pow(2, power))
            cout << power << endl;
        else
            cout << "False" << endl;
    }
}