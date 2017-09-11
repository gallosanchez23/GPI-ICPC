#include <iostream>
#include <set>
#include <map>
#include <stack>

using namespace std;

int main(){
  map< int, int > points, time;
  stack<int> road;
  set<int> acum, options;
  int n, fun, time;
  for(int x = 0; x < n; x++){
    cin >> m >> f >> w;
    points[m] = f;
    time[m] = m + w;
    options.insert(m);
  }
  for(set<string>::iterator it = options.begin();  it!= options.end(); ++it){
    time = 0;
    road.push(*(it));
    time
  }
}