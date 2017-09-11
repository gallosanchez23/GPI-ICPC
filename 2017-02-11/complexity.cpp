#include <iostream>
#include <map>
#include <set>
#include <string>

using namespace std;

int main(){
	string s1;
	map<char, int> mapa;
	multiset<int> seter;
	int iSum = 0;
	cin >> s1;
	for (int i = 0; i < s1.length(); ++i){
		if(mapa.find(s1[i]) != mapa.end()){
			mapa[s1[i]]++;
		}
		else
			mapa[s1[i]] = 1;
	}
	if(mapa.size() <= 2){
		cout << 0 << endl;
	}
	else{
		for(map<char, int>::iterator it = mapa.begin(); it != mapa.end(); it++){
			seter.insert(it->second);
		}
		multiset<int>::iterator itt = seter.begin();
		for (int i = 0; i < seter.size()-2; ++i)
		{
			iSum += *itt;
			itt++;
		}
		cout << iSum << endl;
	}

	return 0;
}