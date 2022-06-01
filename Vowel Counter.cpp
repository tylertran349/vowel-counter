#include <iostream>
using namespace std;

int main() {
	string text;
	int numVowels, numA, numE, numI, numO, numU;
	for(int i = 1; i > 0; i++) {
		numVowels = numA = numE = numI = numO = numU = 0;
		cout << "Enter text: ";
		getline(cin, text);
		for(int i = 0; i < text.length(); i++) {
			switch(text[i]) {
				case 'A':
					numVowels++;
					numA++;
					break;
				case 'a':
					numVowels++;
					numA++;
					break;
				case 'E':
					numVowels++;
					numE++;
					break;
				case 'e':
					numVowels++;
					numE++;
					break;
				case 'I':
					numVowels++;
					numI++;
					break;
				case 'i':
					numVowels++;
					numI++;
					break;
				case 'O':
					numVowels++;
					numO++;
					break;
				case 'o':
					numVowels++;
					numO++;
					break;
				case 'U':
					numVowels++;
					numU++;
					break;
				case 'u':
					numVowels++;
					numU++;
					break;
				default:
					break;
			}
		}
		cout << "Number of vowels: " << numVowels << endl;
		cout << "Number of A\'s: " << numA << endl;
		cout << "Number of E\'s: " << numE << endl;
		cout << "Number of I\'s: " << numI << endl;
		cout << "Number of O\'s: " << numO << endl;
		cout << "Number of U\'s: " << numU << endl;
	}
}
