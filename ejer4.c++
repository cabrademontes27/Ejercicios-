#include <iostream>

using namespace std;


int comprobarAnios(int anios){

    if((anios % 4 == 0 && !(anios % 100 == 0)) || (anios % 400 == 0) ){
        cout << "es anio bisiesto" << endl;
    }else {
        cout << "no es viciesto" << endl;
    }
    return 0;
}

int main(){

    cout << "ingresa el anio y te dire si es bisiesto o no" << endl;
    int anios;
    cin >> anios ;
    comprobarAnios(anios);

    return 0;
}


