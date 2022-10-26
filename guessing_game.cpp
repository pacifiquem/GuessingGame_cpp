#include <bits/stdc++.h>
using namespace std;


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


//namespace for all guessing functions;
namespace GuessingCategories {
	
	int randomNumber =  1 + (rand() % 8);
	vector<string> animalNames = { "hen", "goat", "cow", "cat", "dog", "pigeon", "duck", "sheep" };
	vector<string> teamsNames = { "barcelona", "chelsea", "liverpool", "mukura", "apr", "marine", "simba", "alahir" };	
	vector<string> booksNames = { "theveda", "bakameedition", "harrypotter", "palicanon", "quran", "iread", "ichoose", "bible" };
	vector<string> districtsNames = { "nyabihu", "nyamagabe", "gisagara", "huye", "gasabo", "gakenke", "nyaruguru", "rutsiro" };
	vector<string> filmsNames = { "blackadam", "jumong", "monster", "brightside", "oneinacity", "jamesbond", "skyscrapper", "memoriesinuniverse" };
	
	void animal() {
		vector<char> wordToBeGuessed(animalNames[randomNumber].begin(), animalNames[randomNumber].end());
		vector<char> usersGuesses = usersGuessInitializer(wordToBeGuessed.size());
		wordPrinter(usersGuesses);
		char usersChar;
		
		int j=0;
		while(j < wordToBeGuessed.size()*2) {
			
			cout << endl <<"Enter character : ";
			cin >> usersChar;
		
			for(int i=0; i<wordToBeGuessed.size(); i++) {
				if(wordToBeGuessed.at(i) == usersChar) {
					usersGuesses.at(i) = usersChar;
				}else {
					continue;
				}
			}
			
			wordPrinter(usersGuesses);
			
			if(j==randomNumber || j>randomNumber) {
				bool passed = checkWin( usersGuesses , wordToBeGuessed );
				if(passed) {
					cout <<endl << " You've won " <<endl;
					return;
				}
			}
			
			if(j+1 == wordToBeGuessed.size()*2) {
				cout <<endl << " You've failed " <<endl;
			}
			
			j++;
		}	
	}
	
	void teams() {
		vector<char> wordToBeGuessed(teamsNames[randomNumber].begin(), teamsNames[randomNumber].end());
		vector<char> usersGuesses = usersGuessInitializer(wordToBeGuessed.size());
		wordPrinter(usersGuesses);
		char usersChar;
		
		int j=0;
		while(j < wordToBeGuessed.size()*2) {
			
			cout << endl <<"Enter character : ";
			cin >> usersChar;
		
			for(int i=0; i<wordToBeGuessed.size(); i++) {
				if(wordToBeGuessed.at(i) == usersChar) {
					usersGuesses.at(i) = usersChar;
				}else {
					continue;
				}
			}
			
			wordPrinter(usersGuesses);
			
			if(j==randomNumber || j>randomNumber) {
				bool passed = checkWin( usersGuesses , wordToBeGuessed );
				if(passed) {
					cout <<endl << " You've won " <<endl;
					return;
				}
			}
			
			if(j+1 == wordToBeGuessed.size()*2) {
				cout <<endl << " You've failed " <<endl;
			}
			
			j++;
		}
	}
	
	void districts() {	
		vector<char> wordToBeGuessed(districtsNames[randomNumber].begin(), districtsNames[randomNumber].end());
		vector<char> usersGuesses = usersGuessInitializer(wordToBeGuessed.size());
		wordPrinter(usersGuesses);
		char usersChar;
		
		int j=0;
		while(j < wordToBeGuessed.size()*2) {
			
			cout << endl <<"Enter character : ";
			cin >> usersChar;
		
			for(int i=0; i<wordToBeGuessed.size(); i++) {
				if(wordToBeGuessed.at(i) == usersChar) {
					usersGuesses.at(i) = usersChar;
				}else {
					continue;
				}
			}
			
			wordPrinter(usersGuesses);
			
			if(j==randomNumber || j>randomNumber) {
				bool passed = checkWin( usersGuesses , wordToBeGuessed );
				if(passed) {
					cout <<endl << " You've won " <<endl;
					return;
				}
			}
			
			if(j+1 == wordToBeGuessed.size()*2) {
				cout <<endl << " You've failed " <<endl;
			}
			
			j++;
		}
	}
	
	void films() {
		vector<char> wordToBeGuessed(filmsNames[randomNumber].begin(), filmsNames[randomNumber].end());
		vector<char> usersGuesses = usersGuessInitializer(wordToBeGuessed.size());
		wordPrinter(usersGuesses);
		char usersChar;
		
		int j=0;
		while(j < wordToBeGuessed.size()*2) {
			
			cout << endl <<"Enter character : ";
			cin >> usersChar;
		
			for(int i=0; i<wordToBeGuessed.size(); i++) {
				if(wordToBeGuessed.at(i) == usersChar) {
					usersGuesses.at(i) = usersChar;
				}else {
					continue;
				}
			}
			
			wordPrinter(usersGuesses);
			
			if(j==randomNumber || j>randomNumber) {
				bool passed = checkWin( usersGuesses , wordToBeGuessed );
				if(passed) {
					cout <<endl << " You've won " <<endl;
					return;
				}
			}
			
			if(j+1 == wordToBeGuessed.size()*2) {
				cout <<endl << " You've failed " <<endl;
			}
			
			j++;
		}
	}
	
	void books() {
		vector<char> wordToBeGuessed(booksNames[randomNumber].begin(), booksNames[randomNumber].end());
		vector<char> usersGuesses = usersGuessInitializer(wordToBeGuessed.size());
		wordPrinter(usersGuesses);
		char usersChar;
		
		int j=0;
		while(j < wordToBeGuessed.size()*2) {
			
			cout << endl <<"Enter character : ";
			cin >> usersChar;
		
			for(int i=0; i<wordToBeGuessed.size(); i++) {
				if(wordToBeGuessed.at(i) == usersChar) {
					usersGuesses.at(i) = usersChar;
				}else {
					continue;
				}
			}
			
			wordPrinter(usersGuesses);
			
			if(j==randomNumber || j>randomNumber) {
				bool passed = checkWin( usersGuesses , wordToBeGuessed );
				if(passed) {
					cout <<endl << " You've won " <<endl;
					return;
				}
			}
			
			if(j+1 == wordToBeGuessed.size()*2) {
				cout <<endl << " You've failed " <<endl;
			}
			
			j++;
		}
	}
}




//main function;
int main(){
	
	StartGuessing: 
	
	int category;
	bool wantToContinue;
	categoryLogger();
	cout << endl <<"Enter category number : ";
	cin >> category;
	
	switch(category) {
		case 1:
			GuessingCategories::animal();
				cout << endl <<"Do you want to continue (1/0) : ";
				cin >> wantToContinue;
				if(wantToContinue == true) {
					goto StartGuessing;
				}else {
					cout << endl <<"bye"<<endl;
					exit(1);
				}
			break;
		case 3:
			GuessingCategories::districts();
				cout << endl <<"Do you want to continue (1/0) : ";
				cin >> wantToContinue;
				if(wantToContinue == true) {
					goto StartGuessing;
				}else {
					cout << endl <<"bye"<<endl;
					exit(1);
				}
			break;
		case 4:
			GuessingCategories::films();
				cout << endl <<"Do you want to continue (1/0) : ";
				cin >> wantToContinue;
				if(wantToContinue == true) {
					goto StartGuessing;
				}else {
					cout << endl <<"bye"<<endl;
					exit(1);
				}
			break;
		case 5:
			GuessingCategories::books();
				cout << endl <<"Do you want to continue (1/0) : ";
				cin >> wantToContinue;
				if(wantToContinue == true) {
					goto StartGuessing;
				}else {
					cout << endl <<"bye"<<endl;
					exit(1);
				}
			break;
		default:
			cout << " Invalid guessing category " <<endl;
	}
	
    return 0;

}