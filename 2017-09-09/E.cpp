#include <iostream>
#include <set>

using namespace std;

struct lex_compare {
    bool operator() (const int& lhs, const int& rhs) const {
        return lhs > rhs;
    }
};

int main(){
	set<int, lex_compare> sSquares;
	set<int>::iterator sInicial, sNext;
	int N;
	for(int i = 1; i < 512; i++){
		sSquares.insert(i*i);
	}
	cin >> N;
	while(N){
		int iCant = 0, iSearch = N*N;
		for(sInicial = sSquares.find(iSearch); sInicial != sSquares.end(); sInicial++){
			for(sNext = sInicial; sNext != sSquares.end() && *sNext > *sInicial/2; sNext++){
				if(sSquares.find(*sInicial - *sNext) != sSquares.end()){
					iCant++;
				}
			}
		}
		cout << iCant << endl;
		cin >> N;
	}
}