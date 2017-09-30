#include <iostream>
#include <queue>
using namespace std;

int main() {
  int n;
  priority_queue<int, vector<int>, greater<int>> x;
  while(x.size() <= 2) {
    cin >> n;
    x.push(n);
  }
  int a = x.top();
  x.pop();
  cout << ((a == 1 && x.top() == 2) || (a == 1 && x.top() == 3) || (a == 2 && x.top() == 3) ? 'S' : 'N') << endl;
  return 0;
}
