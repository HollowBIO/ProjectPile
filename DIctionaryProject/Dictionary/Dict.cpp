#include "Dict.h"
#include <iostream>


using namespace std;

void Dictionary::addDefinition(string word, string definition) {
	auto found = Dictionary.find(word);

	if (found != Dictionary.end()) {
		found->second = definition;
	}
	else {
		Dictionary[word] = definition;
	}
}
string Dictionary::getDefinition(string word)const {
	auto found =  Dictionary.find(word);

	string result;

	if (found != Dictionary.end()) {
		result = found->second;
	}
	else {
		result = "NOT FOUND";
	}

	return result;

}
void Dictionary::printAll()const {
	for (auto elements : Dictionary) {
		cout << elements.first << "   " << elements.second << '\n';
	}
}
void Dictionary::saveAll(ofstream& outfile) {
	for (pair<string, string> word : Dictionary) {
		outfile << word.first<<'\n';
		outfile << word.second<<'\n';
	}
}
