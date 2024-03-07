#include <iostream>
#include <string>

using namespace std;

// Es un anagrama

bool anagrama(string things1, string things2){

    int size1 = things1.length();
    int size2 = things2.length();
    int suma1 = 0;
    int suma2 = 0;
    if(size1 == size2){
        for(int i = 0; i < size1;i++){
            suma1 = suma1 + things1[i];
            suma2 = suma2 + things2[i];

        }   
        if(suma1 == suma2){
            cout << "true" << endl;
            return true;
        }else {
            cout << "false" << endl;
            return false;
        }
    }else {
        cout << "false" << endl;
        return false;
    }
    return true;
}

int main(){

    string thing1, thing2;

    cin >> thing1 >> thing2 ;
    anagrama(thing1, thing2);


    return 0;
}