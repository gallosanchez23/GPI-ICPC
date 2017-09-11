#include <iostream>
#include <cmath>

using namespace std;

bool esPrimo(int x) {
	int m = sqrt(x);
	if(x % 2 == 0)
		return false;
	for (int i = 1; i < m; i+=2)
		if(x % i == 0)
			return false;
	return true;
}

int cantDig(int x) {
	for (int i = 8; i >= 0; --i)
		if(x / pow(10,i) > 0)
			return i;
}

int main(){
	int t;
	cin >> t;

	for(int i = 0; i < t; i++) {
		int a, b, cant, dig, cont = 0;
		cin >> a >> b;
		for(int j = a; j <= b; j++) {
			cant = cantDig(j);
			dig = j / pow(10,cant - 1);
			switch(dig) {
				case 0:
				case 2:
				case 4:
				case 6:
				case 8:
					j 

			}

			if(esPrimo(j)) {
				for (int m = 0; m < j/10; ++m) {
					
				}
			}
		}
	}
	return 0;
}