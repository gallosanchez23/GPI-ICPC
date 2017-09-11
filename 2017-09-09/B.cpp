#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
		int n, in = 1, sal = 0, antes, num, puede = 0;
		cin >> n >> antes;
		for(int g = 1; g < n; g++){
			cin >> num;
			if(num > antes) {
				if(sal == 0) {
					in++;
				} else {
					puede++;
					if(puede > sal) {
						sal = 0;
						in += puede;
						puede = 0;
					}
				}
			} else {
					sal++;
			}
		}
		int x;
		if(puede > sal)
			x = in + puede;
		else
			x = in + sal;
		cout << x << endl;
	}
}