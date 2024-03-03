#include <iostream>
#include <cmath>
// Evaluando fórmulas en sucesión

using namespace std;

int main(){

    double y,x,z;

    cin >> x ;
    y = (x + 5) / (2 * (x + 1));
    z = (pow(y,2) + x * (x - (2*y))) / (x * y); 

    cout << z << endl;



    return 0;
}