#include<iostream>
#include<string>
using namespace std;

string encrypt_caesar(string in, int code) {


	for (int i = 0; i < in.length(); i++) {
		if (in[i] >= 'a' && in[i] <= 'z') {
			for (int j = 0; j < code; j++) {
				in[i] += 1;
				if (in[i] > 'z') {
					in[i] = 'a';
				}
			}
		}
		else if (in[i] >= 'A' && in[i] <= 'Z'){
			for (int j = 0; j < code; j++) {
				in[i] += 1;
				if (in[i] > 'Z') {
					in[i] = 'A';
				}
			}
		}
		
	}

	return in;
	
}


void main() {
	setlocale(LC_ALL, "rus");

	cout << "" << endl;
	cout << "------------------------------------------" << endl << endl;

	string input;
	string output;
	int code;

	cout << "Input: ";
	getline(cin, input);

	cout << "Code:";
	cin >> code;

	output = encrypt_caesar(input, code);

	cout << "Output:" << endl;
	cout << encrypt_caesar(input, code);

	
	
}