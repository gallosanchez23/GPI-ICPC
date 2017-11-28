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

int main() {
	string s1 = "1";
	cin >> s1;
	while(s1 != "0"){
		int iS=0, iT;
		for(int i = 0; i < s1.length(); i++){
			iS += s1[i]-'0';
			while(iS > 9){
				iT = iS%10;
				iS = (iS/10) + iT;
			}
		}
		printf("%d\n", iS);
		cin >> s1;
	}
	return 0;
}