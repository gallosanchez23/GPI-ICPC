#include <iostream>
#include <vector>
#include <string>
#include <math.h>

using namespace std;

int iPos[31] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 
				32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 
				8388608, 16777216, 33554432, 67108864, 134217728, 268435456, 536870912, 
				1073741824};

int main(){
	int iN, iHouse, iMax;
	while(cin >> iN >> iHouse){
		string s = "";
		iMax = iPos[iN] -1;
		int iLinea = log2(iMax+1-iHouse);
		int iFila = iPos[iN] - iPos[iLinea] - iHouse + 1;
		while(iLinea){
			if(iFila%2){//Impar
				iFila++;
				s.insert(0, "L");
				iFila = iFila/2;
			}
			else{
				s.insert(0, "R");
				iFila = iFila/2;
			}
			iLinea--;
		}
		cout << "Instructions: " << s << endl;
	}
	return 0;
}