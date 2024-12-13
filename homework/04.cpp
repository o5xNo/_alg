#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

double f(double x,double y,double z) {
    return (3*x*x)+(y*y)+(2*z*z);
}

double riemann(int n) {
    double sum=0.0;
    double dx=1.0/n;
    for (int i=0;i<n;i++) {
        double x=i*dx+dx/2.0;
        for (int j=0;j<n;j++) {
            double y=j*dx+dx/2.0;
            for (int k=0;k<n;k++) {
                double z=k*dx+dx/2.0;
                sum += f(x,y,z)*dx*dx*dx;
            }
        }
    }

    return sum;
}

double monte(int m) {
    double sum = 0.0;
    for (int i = 0; i < m;i++) {
        double x=static_cast<double>(rand())/RAND_MAX;
        double y=static_cast<double>(rand())/RAND_MAX;
        double z=static_cast<double>(rand())/RAND_MAX;
        sum +=f(x,y,z);
    }
    return sum/m;
}

int main() {
    int n=100;
    int m=10000;
    
    srand(static_cast<unsigned>(time(0)));

    cout << "¾¤°Ò¿n¤À: "<<riemann(n)<<endl;
    cout << "»X¦a¥dÃ¹: "<<monte(m);
}
