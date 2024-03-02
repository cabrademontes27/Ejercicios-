#include <iostream>
#include <cmath>
#include <iomanip>

// calculos mentales competitivos
using namespace std;

int main(){

    double R,J;
    cin >> R;
    J = R;
    J = R / 3;

    cout << R << " ";
    R = R + 5;
    cout << R << " ";
    R = pow(R,2);
    cout << R << " ";
    R = R / J;
    cout << R << " ";
    R = pow(R,3);
    cout << fixed << setprecision(6) << R << endl;


    


    return 0;
}