#include <iostream>
#include <stack>

using namespace std;

unsigned long long int  pas[102][102];

void fac() {
	pas[0][0] = 1;
	for (int i = 1; i <=  101; ++i)
	{
		pas[i][0] = 1;
		int j;
		int max = (i % 2 == 0) ? ((i+1)/2) + 1 : ((i+1)/2);
		for (j = 1; j < max; ++j)
		{
			pas[i][j] = pas[i][j-1] * (i-j+1) / (j);
		}
		int k = j-1;
		if(i % 2 == 0){
			k--;
		}
		for (k; k>=0; ++j,  k--)
		{
			pas[i][j] = pas[i][k];
		}
	}
	
}

int main() {
	fac();
	int T, n;
	stack<unsigned long long int> s;
	cin >> T;
	for (int i = 0; i < T; ++i)
	{
		cin >> n;
		int j, k = n;
		int z = -1;
		for (j = 0; j <= n; ++j, k--)
		{
			if(n == 0)
				cout << 1;
				if(j)
					cout << "+";
				unsigned long long int x = pas[n][j];
				if(x != 1)
					cout << x;
				if(k)
					if(k > 1)
						cout << "x^" << k;
					else
						cout << "x";
				if(j)
					if(j > 1)
						cout << "y^" << j;
					else
						cout << "y"; 
				
		}
		cout << endl;
	}

	return 0;
}