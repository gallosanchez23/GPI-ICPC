#include <iostream>

using namespace std;

int main(){
	int cases = 0, factor = 0, counter = 0, result = 0, max = 0, length;
	string word = "";
	bool sum_one;
	cin >> cases;
	for(int x = 0; x < cases; x++){
		cin >> word >> factor;
		result = 0;
		max = 0;
		length = word.length();
		for(int i = 0; i < length; i++){
			counter = word[i] % 97;
			max = result > max ? result : max;
			result = 0;
			sum_one = true;
			for(int j = i + 1; j < length; j++){
				if(word[j] % 97 == (counter + factor) % 26){
					if(sum_one){
						result++;
						sum_one = false;
					}
					result++;
					counter += factor;
					counter %= 26;
				}
				else if(word[j] % 97 - counter > factor){
					j = length;
				}
			}
		}
		cout << max << endl;
	}
}