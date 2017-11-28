#include <iostream>
#include <string>
#include <set>
using namespace std;

string pal;
char atras[1000];

int busd(char c) {
for (int i = 1; i < pal.size(); ++i) {
		if(atras[i] == c) {
			atras[i] = 'L';
			return i;
		}
	}
}

int main() {
	while(cin >> pal) {
	// cin >> pal;
	multiset<char> letras;
	multiset<char>::iterator it;
	for (int i = 0; i < pal.size(); ++i) {
		atras[i] = pal[i];
		letras.insert(pal[i]);
	}

	int busa = busd('$');
	for (int i = 1; i < pal.size(); ++i) {
		it = letras.begin();
		advance(it, busa);
		char c = *(it);
		cout << c;
		busa = busd(c);
	}
	cout << endl;
}

	return 0;
}