#include <iostream>

using namespace std;

// El famoso "FIZZ BUZZ"

int main(){

  for(int i = 1; i <= 100; i++){
    if(i % 3 == 0 && i % 5 == 0){
      cout << "FIZZBUZZ" << endl;
    }else if(i % 3 == 0){
      cout << "FIZZ" << endl;
    }else if(i % 5 == 0){
      cout << "BUZZ" << endl;
    }else{
      cout << i << endl;
    } 

    

  }

  return 0;
}