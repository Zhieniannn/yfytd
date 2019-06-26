#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

char* registr(string str) {
	char mas[100];
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'A' || str[i] == 'O' || str[i] == 'Y' || str[i] == 'E' || str[i] == 'U' || str[i] == 'I') {
			str[i] = tolower(str[i]);
		}
	}
	for (int i = 0; i < str.length(); i++) {
		mas[i] = str[i];
	}
	return mas;
}

int main() {
	if (strcmp(registr("AoTRJY"), "aoTRJy") || strcmp(registr("ETU"), "eTu") || strcmp(registr(""), "") || strcmp(registr("YEF UIV NAR"), "yeF uiV NaR")) {
		cout << "ne rabotaet" << endl;
		return 1;
	}
	else {
		cout << "rabotaet" << endl;
	}
	return 0;
}
