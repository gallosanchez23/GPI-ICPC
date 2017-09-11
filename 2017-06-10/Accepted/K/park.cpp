#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

struct casa
{
	char c;
	double d;
};

int main(){
	int iCases, iHouses, i;
	char cTipo;
	double dLength, dWidth, dArea, kDiv = 0.433012701892219;;
	casa ca;
	vector<casa> vS(3500, ca);
	cin >> iCases;
	while(iCases--){
		cin >> iHouses;
		for(i = 0; i < iHouses; i++){
			cin >> ca.c;
			cin >> ca.d;
			vS[i] = ca;
		}
		dLength = vS[0].d;
		for(i = 1; i < iHouses && vS[i].c != 'C'; i++){
			dLength += vS[i].d;
		}
		dWidth = vS[i++].d;
		dLength += dWidth;
		for(i; i < iHouses && vS[i].c != 'C'; i++){
			dWidth += vS[i].d;
		}
		dWidth += vS[i].d;
		dArea = dWidth * dLength;
		for(i = 0; i < iHouses; i++){
			dArea -= vS[i].c == 'T' ? ((vS[i].d * vS[i].d) * kDiv) : (vS[i].d * vS[i].d) ;
		}
		cout << fixed << setprecision(4) << dArea << endl;
	}
	return 0;
}