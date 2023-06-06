#include<iostream>
#include "Dict.h"
#include <fstream>

using namespace std;
void addDef(Dictionary& book);
void getDef(Dictionary& book);
void printMenu();
void getSavings(ifstream& infile, Dictionary& book);

int main() {
	ifstream Words;
	ofstream SavedWords;
	Dictionary book1;
	bool run = true;
	int choise;

	Words.open("Dictionary.txt");
	getSavings(Words, book1);
	Words.close();

	while(run) {
		printMenu();
		cin >> choise;
		cin.get();
		switch (choise) {
		case 1:
			addDef(book1);
			break;
		case 2:
			getDef(book1);
			break;
		case 3:
			cout << '\n';
			book1.printAll();
			break;
		case 4:
			SavedWords.open("Dictionary.txt");
			book1.saveAll(SavedWords);
			SavedWords.close();
			run = false;
		}
	}
	return 0;
}
void printMenu() {
	cout << "\nEnter a number that represents one of the following options:\n";
	cout << "1.Add definition\n";
	cout << "2.Get definition\n";
	cout << "3.Print all defnitions\n";
	cout << "4.Exit\n";
}
void addDef(Dictionary& book) {
	string word, definition;
	cout << "\nInput a word\n";
	getline(cin, word);
	cout << "Input a definition\n";
	getline(cin, definition);
	book.addDefinition(word, definition);
}
void getDef(Dictionary& book) {
	string word;
	cout << "\nInput a word\n";
	getline(cin, word);
	cout << book.getDefinition(word) << '\n';

}
void getSavings(ifstream& infile, Dictionary& book) {
	string temp1, temp2;
	int count = 1;
	while (!infile.eof()) {
		if (count% 2 == 1) {
			infile >> temp1;
		}
		else if (count % 2 == 0) {
			infile >> temp2;
			book.addDefinition(temp1, temp2);
		}
		count++;
	}
}

