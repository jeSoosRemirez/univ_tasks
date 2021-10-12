/*
    Docstrings here
    Task of Dmytro Khomych
    Variant 3
*/

#include <iostream>

using namespace std;

int main()
{
    // Variables
    double a, b, c, x, x1, x2, d, f, l, ac, bc, cc;

    // Inputs
    cout<<"Input a, b and c "<<endl;
    cin >> a >> b >> c;
    cout<<"Input the beginning of x "<< endl;
    cin >> x1;
    cout<<"Input the end of x "<< endl;
    cin >> x2;
    cout<<"Input step of d "<< endl;
    cin >> d;
    cout << endl;

    // Look of table
    cout << ("|  X |  F |") << endl;

    // Do (x += d) till (x=x1 <= x2)
    for (x = x1; x <= x2; x += d){
        if  (x<0 & b!=0)
            f=-(2*x-c)/(c*x-a);
        else if (x>0 & b==0)
            f=(x-a)/(x-c);
        else
            f=-x/c - c/(2*x);
    }

    // Converting doubles into int
    ac = int(a), bc = int(c), cc = int(c);
    l =! (a == ac | b == bc) &! (a == ac | c == cc);
    if (!l)
        f = int(f);
    cout <<"| " << x << "  |" <<"| " << f <<" |" << endl;
    cin.get();
    cin.get();

    return 0;
}