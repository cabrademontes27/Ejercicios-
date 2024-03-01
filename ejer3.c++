#include <iostream>
#include <string>

using namespace std;

void operacionesFiguras(string forma){


    if (forma == "RECTANGULO") {
        int base, altura;
        cout << "Ingrese la base del rectangulo: ";
        cin >> base;
        cout << "Ingrese la altura del rectangulo: ";
        cin >> altura;
        int area = base * altura;
        int perimetro = 2 * (base + altura);
        cout << "El area del rectangulo es: " << area << endl;
        cout << "El perimetro del rectangulo es: " << perimetro << endl;
    }
    if (forma == "CUADRADO") {
        int lado;
        cout << "Ingrese el tamano de un lado del cuadrado: ";
        cin >> lado;
        int area = lado * lado;
        int perimetro = lado * 4;
        cout << "El area del cuadrado es: " << area << endl;
        cout << "El perimetro del cuadrado es: " << perimetro << endl;
    }
    if (forma == "TRIANGULO") {
        int base, altura;
        cout << "Ingrese la base del triangulo: ";
        cin >> base;
        cout << "Ingrese la altura del triangulo: ";
        cin >> altura;
        int area = (base * altura) / 2;
        // Perimeter calculation not applicable for triangle without additional information
        cout << "El area del triángulo es: " << area << endl;
    }
    if (forma == "TRAPECIO") {
        int base1, base2, altura;
        cout << "Ingrese la base mayor del trapecio: ";
        cin >> base1;
        cout << "Ingrese la base menor del trapecio: ";
        cin >> base2;
        cout << "Ingrese la altura del trapecio: ";
        cin >> altura;
        int area = ((base1 + base2) * altura) / 2;
        // Perimeter calculation not applicable for trapezoid without additional information
        cout << "El area del trapecio es: " << area << endl;
    }else

    return ;
}






int main(){
    
    cout << "Que forma geometrica deseas calcular su area y perimetro" << endl;
    string forma;
    cin >> forma;
    operacionesFiguras(forma);


    return 0;
}