#include <iostream>
#include <cmath>
#include <tuple>

using namespace std;

double f(double x, double y) {
    return sin(x * y) + exp(x);
}

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
    cout << "?f("<<x<<","<<y<<") = ("<< dfdx<<","<<dfdy<<")" << endl;
    cout << "?f("<<x<<","<<y<<")=(""y*cos(x*y)+e^x , x*cos(x*y))" << endl;

    return 0;
}
