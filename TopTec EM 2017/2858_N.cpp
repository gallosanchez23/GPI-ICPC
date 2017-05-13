#include <stdio.h>
#include <sstream>
#include <string>

using namespace std;

int main() {
  char m[10000];
  stringstream ss;
  scanf("%s", m);
  string s;
  ss << m;
  ss >> s;
  int l = s.length();
  for (int i = 0; i < l; i++) {
    unsigned long num = 0;
    bool imp = false, x;
    while(s[i] == '0' || (x = (s[i] == '1'))) {
      imp = true;
      if(x) {
        num *= 2;
        num++;
      } else
        num *= 2;
      num %= 1000000007;
      i++;
      x = false;
    }
    if(imp)
      printf("%lu", num);
    if(i != l)
      printf("%c", s[i]);
  }
  printf("\n");
  return 0;
}
