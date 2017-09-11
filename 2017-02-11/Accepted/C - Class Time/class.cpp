#include <iostream>
#include <set>
#include <map>

using namespace std;

int main(){
  set<string> lastnames;
  multiset<string> aux;
  map< string, multiset<string> > fullnames;
  string name, lastname;
  int n;
  cin >> n;
  for(int x = 0; x < n; x++){
    cin >> name >> lastname;
    lastnames.insert(lastname);
    fullnames[lastname].insert(name);
  }
  for(set<string>::iterator it = lastnames.begin();  it!= lastnames.end(); ++it){
    aux = fullnames[*(it)];
    for(multiset<string>::iterator xit = aux.begin();  xit!= aux.end(); ++xit){
      cout << *(xit) << ' ' << *(it) << endl;
    }
  }
}