#include <iostream>
#include <cmath>
#include <tuple>

using namespace std;

// ­pºâ
double f(double x, double y) {
    return sin(x * y) + exp(x);
}

// ­pºâ±è«×
tuple<double, double> gradient(double x, double y) {
    double dfdx = y * cos(x * y) + exp(x); 
    double dfdy = x * cos(x * y);           
    return make_tuple(dfdx, dfdy);
}

int main() {
    double x, y;
    cout << "Enter x¡By";
    cin >> x >> y;
    
    double fx = f(x, y);
    auto [dfdx, dfdy] = gradient(x, y);
    
    cout << "f(" <<x<< "," <<y<< ") = " <<fx<< endl;
    cout << "df/dx = " << dfdx << endl;
    cout << "df/dy = " << dfdy << endl;

    return 0;
}
