
#include <iostream>
#include <cmath>
// Programando fórmulas raras
using namespace std;

int main(){

    double pi = M_PI;
    float x,y,z;
    cin >> x >> y >> z;
    float formula = ((x + x * (y + pow(z,2))) / ((x + pi)*(y + pi)));

    cout << formula << endl;



    return 0;
}