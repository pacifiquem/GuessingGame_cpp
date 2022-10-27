#include <bits/stdc++.h>
using namespace std;

//category logger function
void categoryLogger() {
	string categories[5] = {"nameOfAnimals", "teams", "districts", "films", "books"}; 
	cout << " =================== Choose Category =================== " <<endl<<endl;
	for(int i=0; i<5; i++) {
		cout << i+1 <<".  " << categories[i] <<endl;
	}
}

//function for printing output;
void wordPrinter(vector <char> arr) {
	for(int i=0; i<arr.size(); i++) {
		cout << arr.at(i);
	}
}

//function for initializing usersGuess vector
vector <char> usersGuessInitializer(int usersGuessSize) {
	vector <char> initialArray;
	for(int i=0; i<usersGuessSize; i++) {
		initialArray.push_back('-');
	}
	return initialArray;
}

//function for checking winner
bool checkWin(vector<char> usersGuess, vector<char> computerGuess) {
	vector<bool> passedContainer;
	for(int i=0; i<usersGuess.size(); i++) {
		if(usersGuess.at(i) == computerGuess.at(i)) {
			passedContainer.push_back(true);
		}else {
			continue;
		}
	}
	
	if(passedContainer.size() == computerGuess.size()) {
		return true;
	}else {
		return false;
	}
}

//guessing handler
void guessFunction(string stringToGuess, int randomNumber) {
		vector<char> wordToBeGuessed(stringToGuess.begin(), stringToGuess.end());
		vector<char> usersGuesses = usersGuessInitializer(wordToBeGuessed.size());
		cout <<endl<<"Word Placeholder : ";
		wordPrinter(usersGuesses);
		int chance = wordToBeGuessed.size()*2;
		cout << endl <<"Chances : " << chance <<endl;
		char usersChar;
		
		int j=0;
		while(j < wordToBeGuessed.size()*2) {
			cout << endl <<endl <<"Enter character : ";
			cin >> usersChar;
		
			for(int i=0; i<wordToBeGuessed.size(); i++) {
				if(wordToBeGuessed.at(i) == usersChar) {
					usersGuesses.at(i) = usersChar;
				}else {
					continue;
				}
			}
			
			cout << "Placeholder : ";
			wordPrinter(usersGuesses);
			cout <<endl << "Chance Left : " << chance-1 <<endl;
			
			if(j+1 >=wordToBeGuessed.size()) {
				bool passed = checkWin( usersGuesses , wordToBeGuessed );
				if(passed) {
					cout <<endl <<endl << " =========== You've won ======== " <<endl <<endl;
					return;
				}
			}
			
			if(j+1 == wordToBeGuessed.size()*2) {
				cout <<endl << " You've failed " <<endl;
			} 
			
			chance--;
			j++;
		}	
}

//main function;
int main(){
	
	string wantToContinue;
	srand(time(NULL));
	int randomNumber = rand() % (9 - 0) + 0;
	vector<string> animalNames = { "hen", "goat", "cow", "cat", "dog", "pigeon", "duck", "sheep", "elephant", "lion" };
	vector<string> teamsNames = { "barcelona", "chelsea", "liverpool", "mukura", "apr", "marine", "simba", "alahir", "everton", "arsenal"};	
	vector<string> booksNames = { "theveda", "bakameedition", "harrypotter", "palicanon", "quran", "iread", "ichoose", "bible", "LordoftheRings", "Alchemist" };
	vector<string> districtsNames = { "nyabihu", "nyamagabe", "gisagara", "huye", "gasabo", "gakenke", "nyaruguru", "rutsiro", "nyamasheke", "nyagatare" };
	vector<string> filmsNames = { "blackadam", "jumong", "monster", "brightside", "oneinacity", "jamesbond", "skyscrapper", "memoriesinuniverse", "inmystyle", "idontholdback" };
	
	do {
		int category;
		categoryLogger();
		cout << endl <<"Enter category number : ";
		cin >> category;
	
		switch(category) {
			case 1:
				guessFunction(animalNames[randomNumber], randomNumber);
				break;
			case 2:
				guessFunction(teamsNames[randomNumber], randomNumber);
				break;
			case 3:
				guessFunction(districtsNames[randomNumber], randomNumber);
				break;
			case 4:
				guessFunction(filmsNames[randomNumber], randomNumber);
				break;
			case 5:
				guessFunction(booksNames[randomNumber], randomNumber);
				break;
			default:
			cout << " Invalid guessing category " <<endl;
			exit(0);
		}
		
		cout << "Do You wan't to continue (y/n) : ";
		cin >> wantToContinue;		
	
	}while(wantToContinue == "y");
	
    return 0;
}