#include <iostream>

using namespace std;

int main(){
	int n, b, x, suma = 0;
	cin >> n >> b;
	while(n != 0 && b != 0 ) {
		suma = 0;
		for(int i = 0; i < n; i++) {
			cin >> x;
			suma += x;
		}
		cout << b / suma << endl;
		cin >> n >> b;
	}
	return 0;
}