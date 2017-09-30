#include <queue>
#include <iostream>
#include <algorithm>
using namespace std;

struct recital{
		int inicio, fin, valor;
};

vector<recital> agenda;
vector<recital>::iterator it;

bool compararMenor(recital rec1, recital rec2){
	return rec1.inicio < rec2.inicio;
}

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int j;
    cin >> j;
    switch (j) {
      case 1:
        recital nvo;
        cin >> nvo.inicio >> nvo.fin >> nvo.valor;
        agenda.push_back(nvo);
        sort(agenda.begin(), agenda.end(), compararMenor);
        break;
      case 2:
        int p;
        cin >> p;
        agenda.erase(agenda.begin() + --p);
        break;
      case 3:
        int a, b, suma = 0;
        unsigned int k = 0;
        cin >> a >> b;
        for(; k < agenda.size(); k++)
          if(agenda[k].inicio <= a && a < agenda[k].fin) {
            suma += agenda[k].valor;
            break;
          }
        for(k++; k < agenda.size(); k++) {
          if(agenda[k].inicio < b)
            suma += agenda[k].valor;
          if(b >= agenda[k].fin)
            break;
        }
        cout << suma << endl;
    }
  }
  return 0;
}
