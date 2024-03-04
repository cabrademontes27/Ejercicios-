#include <iostream>

using namespace std;
// La hora en un planeta lejano  
int main(){

    int S,M,H,D;
    M = D = H = 0;

    cin >> S;

    while(S >= 50){
        S = S - 50;
        M++;
    }
    
    while(M >= 70){
        M = M - 70;
        H++;
    }

    while(H >= 12){
        H = H - 12;
        D++;
    }

    cout << D << " " << H << " " << M << " " << S << " " << endl; 



/*
    if(S % 50 == 0){
        while(S){
            S = S - 50;
            M++;
        }

    }
    cout << S << " " << M;
*/
    return 0;
}