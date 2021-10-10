#include <iostream>
using namespace std;

/* 4th chapter of Abramian book */

// Integer1
void full_metres(){
    int length_cm;
    cout << "Input length: ";
    cin >> length_cm;
    int length_m = length_cm/100;
    cout << "Length in meters is: " << length_m << endl;
}

// Integer2
void full_tonnes(){
    int mass_kg;
    cout << "Input mass: ";
    cin >> mass_kg;
    int mass_tn = mass_kg/1000;
    cout << "Mass in tonnes is: " << mass_tn << endl;
}

// Integer3
void b_in_kb(){
    int size_b;
    cout << "Input file size: ";
    cin >> size_b;
    int size_kb = size_b/1024;
    cout << "Kb in ur file is: " << size_kb << endl;
}

// Integer4
void a_in_b(){
    int a, b;
    cout << "Input A: ";
    cin >> a;
    cout << "Input B: ";
    cin >> b;
    int res = a/b;
    cout << "A in B: " << res << endl;
}

// Integer5
void rest_of_a_in_b(){
    int a, b;
    cout << "Input A: ";
    cin >> a;
    cout << "Input B: ";
    cin >> b;
    int rest = (a%b) - (a/b);
    cout << "Free space left: " << rest << endl;
}