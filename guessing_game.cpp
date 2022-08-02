#include <iostream>

using namespace std;

void numbersGenerator();

int main(){

    cout << "Hello world lets make a guessing game!" << endl;
    return 0;

}

void numbersGenerator() {
    int i, arr_number[100];

    for(i=0; i<=100; i++) {
        arr_number[i] = i;
    }

}
