#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	vector<int> pirates;
	vector<int> cofres;
	int n;
	int aux;
	long long int answer;
	cin >> n;
	int numbers[n + 1];
	answer = 0;
	for(int i = 0; i < n; i++){
		cin >> aux;
		pirates.push_back(aux);
	}
	for(int i = 0; i < n; i++){
		cin >> aux;
		cofres.push_back(aux);
	}
	sort(pirates.begin(), pirates.end());
	sort(cofres.begin(), cofres.end());
	int j = n - 1;
	int x = 1;
	numbers[0] = 0;
	for(int i = n - 1; i > -1; i--, x++){
		numbers[x] = numbers[x - 1];
		while(j > -1 && cofres[j] >= pirates[i]){
			numbers[x]++;
			j--;
		}
	}
	answer += numbers[1];
	for(int i = 2; i < n + 1; i++){
		answer = (answer * (numbers[i] - (i - 1))) % 1000000007;
	}
	cout << answer << endl;
}