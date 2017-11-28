#include <stdio.h>
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int m, n, index = 0;
vector< vector<int> > matriz;
vector< vector<int> > copia;

void cantidad(int i, int j, stack<pair<int, int> > &sP) {
    if(i == m-1 && j == m-1) retu   rn;
    int num = matriz[i][j];
    int actual = copia[i][j];
    if (num) {
        if(i + num < m && (copia[i + num][j] == -1 || copia[i + num][j] > actual+1)){
            copia[i + num][j] = actual +1;
            sP.push(pair<int,int> (i+num,j));
        }
        if(j + num < m && (copia[i][j + num] == -1 || copia[i][j + num] > actual+1)) {
            copia[i][j + num] = actual +1;
            sP.push(pair<int,int> (i,j+num));
        }
        if(i - num >= 0  && (copia[i - num][j] == -1 || copia[i - num][j] > actual+1)){
            copia[i - num][j] = actual +1;
            sP.push(pair<int,int> (i-num,j));
        }
        if(j - num >= 0 && (copia[i][j - num] == -1 || copia[i][j - num] > actual+1)){
            copia[i][j - num] = actual +1;
            sP.push(pair<int,int> (i,j-num));
        }
    }
}

int main() {
    int a;
    string lin = "";
    vector<int> linea;
    scanf("%d %d", &m, &n);
    cin.ignore();
    for (size_t i = 0; i < m; i++) {
        getline(cin, lin);
        for (size_t j = 0; j < n; j++) {
            linea.push_back((int) lin[j] - 48);
        }
        matriz.push_back(linea);
        linea.clear();
    }
    for (size_t j = 0; j < n; j++) {
        linea.push_back(-1);
    }
    for (size_t j = 0; j < m; j++) {
        copia.push_back(linea);
    }
    copia[0][0] = 0;
    /*for (size_t i = 0; i < m; i++) {
        for (size_t j = 0; j < n; j++)
            printf("%d", matriz[i][j]);
        printf("\n");
    }*/
    stack<pair<int, int> > sP;
    sP.push(pair<int,int> (0,0));
    while(!sP.empty()){
        int i = sP.top().first, j = sP.top().second;
        sP.pop();
        cantidad(i, j, sP);
    }
    /*for (size_t i = 0; i < m; i++) {
        for (size_t j = 0; j < n; j++)
            printf("%d", copia[i][j]);
        printf("\n");
    }*/

    if (copia[m-1][n-1] == -1)
        cout << "IMPOSSIBLE" << endl;
    else
        cout << copia[m-1][n-1] << endl;
	return 0;
}