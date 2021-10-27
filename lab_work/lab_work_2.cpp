/*Lab work #3*/


#include <iostream>
// #include <algorithm>

using namespace std;

int up_lim_calc(auto derived_exp, auto up_lim, auto x){
    x = &up_lim;
    int a_exp = derived_exp;
    return a_exp;
}

int low_lim_calc(auto derived_exp, auto low_lim, auto x){
    x = &low_lim;
    int b_exp = derived_exp;
    return b_exp;
}

int integral_calc(auto exp, auto up_lim, auto low_lim, auto a, auto b, auto c, auto x){

    // Derived X*X, X, C
    int deriv_xx = x * x, deriv_x = x, deriv_c = c;
    deriv_xx = 2*(*x);
    deriv_x = 1;
    deriv_c = 0;


    int derived_exp = a*deriv_xx + b*deriv_x + deriv_c;
    int result = up_lim_calc(derived_exp, up_lim, x) - low_lim_calc(derived_exp, low_lim, x);

    cout << result;
    return result;
}

    /*int *x, a, b, c;
    int exp = a * *x * *x + b * *x + c;
    a = 2, b = 3, c = 4;
    integral_calc(exp, 5, 2, a, b, c, x);*/