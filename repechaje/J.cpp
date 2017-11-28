#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <queue>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <stack>
#include <utility>
#include <vector>

using namespace std;

vector<char> dummy;
int imax;
vector<bool> b(27, false);
vector<vector<char> > v(27, dummy);

void fill(){
	vector<char> dummy;
	for(int i = 0; i <= 26; i++){
		v[i] = dummy;
		b[i] = true;
	}
}

void solve(){
	int iC = 0;
	for(int i = 0; i < imax; i++){
		if(b[i])
			iC++, b[i] = false;
		for(int j = 0; j < v[i].size(); j++)
			b[i] = false;
	}
	cout << iC << endl;
}

int main() {
	string s;
	int c = 0;
	while(cin >> s){
		if(s.length() == 1){
			if(c++)
				solve();
			fill();
			imax = s[0] - 'A';
		}
		else{
			v[s[0]-'A'].push_back(s[1]-'A');
			v[s[1]-'A'].push_back(s[0]-'A');
		}

	}
	return 0;
}