#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>

using namespace std;

struct nodo
{
	double dSuma;
	bool bPrime;
	bool pow;
	int ipow;
};

void calcula(vector<nodo> &vNumeros, int iNum, vector<int> &vPrime){
	int iP = 0;
	nodo nT;
	while(iP < vPrime.size() && iNum%vPrime[iP] != 0 && vPrime[iP]*vPrime[iP] < iNum){
		iP++;
	}
	if(iNum%vPrime[iP] != 0){
		nT.dSuma = (iNum-1)/2, nT.bPrime = true, nT.pow = true, nT.ipow = 0;
		vPrime.push_back(iNum);
	}
	else{
		int iI = iNum/vPrime[iP];
		if(vNumeros[iI].pow && vNumeros[iI].ipow == vPrime[iP] || iI == vPrime[iP]){
			nT.dSuma = vNumeros[iI].ipow * vNumeros[iI].dSuma, nT.bPrime = false, nT.pow = true, nT.ipow = vPrime[iP];
		}
		else if(vNumeros[iI].bPrime){
			nT.dSuma = vNumeros[iI].dSuma, nT.bPrime = false, nT.pow = false;
		}
		else{
			int imul;
			if(vPrime[iP]%2 == 0){
				imul = 2;
			}
			else
				imul = vPrime[iP]-1;
			nT.dSuma = vNumeros[iI].dSuma * imul, nT.bPrime = false, nT.pow = false;
		}
	}
	vNumeros.push_back(nT);
}

int main(){
	int iCases, iNum;
	nodo nT;
	nT.dSuma = 0.5, nT.bPrime = true, nT.pow = true, nT.ipow = 0;
	vector<nodo> vNumeros(5, nT);
	vector<int> vPrime;
	vPrime.push_back(2);
	vPrime.push_back(3);
	vNumeros[3].dSuma = 1;
	vNumeros[4].bPrime = false;
	cin >> iCases;
	for(int iZ = 0; iZ < iCases; iZ++){
		cin >> iNum;
		if(iNum >= vNumeros.size()){
			for(int i = vNumeros.size(); i <= iNum; i++){
				calcula(vNumeros, i, vPrime);
			}

		}
		cout << fixed << setprecision(0) << vNumeros[iNum].dSuma * 2 << " " << fixed << setprecision(4) << vNumeros[iNum].dSuma << endl;
	}
	return 0;
}