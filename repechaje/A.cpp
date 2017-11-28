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

long long fin(long long lUp, long long lDown){
	while(lUp != lDown){
		if(lUp > lDown)
			lUp -= lDown;
		else
			lDown -= lUp;
	}
	return lDown;
}

int main() {
	long long ent, lUp, lDown, gcd;
	while(cin >> ent){
		lUp = 3*ent;
		lDown = (2*ent) + 1;
		if(lUp%lDown){
			gcd = fin(lUp, lDown);
			lUp /= gcd, lDown /= gcd;
			cout << lUp << "/" << lDown << endl;
		}
		else
			cout << lUp/lDown << endl;
	}
	return 0;
}