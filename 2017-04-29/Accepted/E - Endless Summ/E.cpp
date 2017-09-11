#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;

	for(int i = 0; i < t; i++) {
		int n, k, x;
		cin >> n >> k;
		for(int j = 0; j < n; j++) {
			cin >> x;
		}
		cout << "Yes." << endl;
		/*while(!enc && suma <= k) {
			for(int j = 0; j < n; j++) {
				suma += x[j];
				if(k % suma == 0) {
					cout << "Yes." << endl;
					j = n;
					enc = true;
				}
			}
		}*/
	}
	return 0;
}