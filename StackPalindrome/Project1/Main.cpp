#include <iostream>
#include <stack>
#include <string>
using namespace std;

void clearString(string& checkword);
void pushString(stack<string>& stack, string checkword);
bool isPalimdrome(string checkword);

int main() {
	bool result;
	int i = 0;
	string array[5] = { "madam i`m adam", "boboB", "haYaka", "civic", "koKOs"};
	for (string pali : array) {
		clearString(pali);
		result = isPalimdrome(pali);
		cout << "Is " << array[i] << " a palindrome? " << boolalpha << result<<'\n';
		i++;
	}
	return 0;
}
void clearString(string& checkword) {
	string temp;
	char letter;
	for (char c : checkword) {
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
			letter = tolower(c);
			temp += letter;
		}
	}
	checkword = temp;
}
void pushString(stack<char>& stack, string checkword) {
	for (char c : checkword) {
		stack.push(c);
	}
}
bool isPalimdrome(string checkword) {
	stack<char> Reverse;
	char temp;
	bool result = true;
	pushString(Reverse, checkword);
	for (char c :checkword){
		temp = Reverse.top();
		if (temp != c) {
			result = false;
		}
		Reverse.pop();
	}
	return result;
}