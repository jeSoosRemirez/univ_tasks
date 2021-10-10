#include <iostream>
using namespace std;

/* 3d chapter of Abramian book */

// Begin1
void perimeter_calc(){
    int side;
    cout << "Input side: ";
    cin >> side;
    int perimeter = side * 4;
    cout << "Perimeter of square is: " << perimeter << std::endl;
}
// Begin2
void area_calc(){
    int side;
    cout << "Input side: ";
    cin >> side;
    int area = side * side;
    cout << "Area of square is: " << area << std::endl;
}

// Begin3
void square_calc(){
    int side_a, side_b;
    cout << "Input side A: ";
    cin >> side_a;
    cout << "Input side B: ";
    cin >> side_b;
    int perimeter = 2 * (side_a + side_b);
    int area = side_b * side_b;
    cout << "Are of square is: " << area << "; and perimeter is: " << perimeter << std::endl;
}

// Begin4
void circle_calc(){
    int diameter;
    float pi = 3.14;
    cout << "Input diameter: ";
    cin >> diameter;
    float length = pi * float(diameter);
    cout << "Length of circle is: " << length << std::endl;
}

// Begin5
void volume_calc(){
    int side;
    cout << "Input side: ";
    cin >> side;
    int volume = side^3;
    cout << "Volume of cube is: " << volume << std::endl;
}
