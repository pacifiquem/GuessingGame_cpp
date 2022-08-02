#include <iostream>
#include <cmath>

using namespace std;

int SecretnumberGenerator(int num);
bool gameProcessor();    //function that control game process and determine if the user won.

int main(){

    cout << "=== Welcome to the game ===" << endl;
    cout << endl;

    gameProcessor();

    return 0;

}

int SecretnumberGenerator(int num) {

    int i, secretNumber[100];

    for (i = 200; i > 100; i--) {
        secretNumber[i] = i; 
    }

    switch(num) {
        case 1: 
            return secretNumber[72];
            break;
        case 2:
            return secretNumber[10];
            break;
        case 3:
            return secretNumber[89];
            break;
        case 4: 
            return secretNumber[31];
            break;
        case 5:
            return secretNumber[56];
            break;
        default:
            break;
    }

    return secretNumber[32];

}

bool gameProcessor(){

    int userGuess, count;
    int secretNumber;

    do{

        secretNumber = SecretnumberGenerator(count);

        cout << "Enter your guess : ";
        cin >> userGuess;

        if(userGuess == secretNumber) {
            cout << "***************" << "You win !!!" << "***************" << endl;
        }

        count++;

        if(count > 5) {
            cout << "You are out of guess times";
        }

    } while (userGuess != secretNumber);
    
}
