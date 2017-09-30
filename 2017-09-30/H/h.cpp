#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	int board[n];
	int last;
	int next;
	int answer;
	bool master;
	answer = 0;
	master = true;
	scanf("%d", &last);
	for(int i = 1; i < n; i++){
		scanf("%d", &next);
		if(master && last > next){
			master = false;
			answer++;
		}
		else if(!master && last < next){
			master = true;
		}
		last = next;
	}
	if(master && next != 0){
		answer++;
	}
	printf("%d\n", answer);
}