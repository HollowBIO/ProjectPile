#ifndef DICTIONARY_H
#define DICTIONARY_H
#include<map>
#include <string>
#include<fstream>

using namespace std;

class Dictionary
{
public:
	void addDefinition(string word, string definition);
	string getDefinition(string word)const;
	void printAll()const;
	void saveAll(ofstream& outfile);
private:
	map<string, string> Dictionary;
};
#endif
