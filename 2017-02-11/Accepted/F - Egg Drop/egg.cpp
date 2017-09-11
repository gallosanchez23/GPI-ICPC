#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(){
	double d3 = 3, d4 = 4, d5 = 5;
	d3 /= 9; d4 /= 9; d5 /= 9;
	double dR;
	dR = d3 + d5;
	cout << dR << endl;
	dR = d4 + d4;
	cout << dR << endl;
	/*string s1;
	int iH, iP, iT;
	set<int> salvo;
	set<int> no;
	cin >> iH >> iP;
	for (int i = 0; i < iH; ++i)
	{
		cin >> iT >> s1;
		if(s1 == "SAFE"){
			salvo.insert(iT);
		}
		else
			no.insert(iT);
	}
	set<int>::reverse_iterator rit = salvo.rbegin();
	set<int>::iterator it = no.begin();
	if(salvo.size() > 0){
		if(no.size() > 0){
			if(*rit == (*it -1) ){
				cout << *it << " " << *rit << endl;
			}
			else{
				cout << *rit+1 << " " << *it-1 << endl;
			}
		}
		else{
			if(*rit+1 == iP){
				cout << iP << " " << *rit << endl;
			}
			else{
				cout << *rit+1 << " " << iP-1 << endl;
			}
		}
	}
	else{
		if(*it-1 == 1){
			cout << 2 << " " << 1 << endl;
		}
		else{
			cout << 2 << " " << *it-1 << endl; 
		}
	}*/
	return 0;
}