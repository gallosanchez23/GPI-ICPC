#include <iostream>
using namespace std;
/*
int main() {
  int l, o, s, t, m, suma = 0;
  cin >> l >> o >> s >> t;

  m = l < s ? l : s;
  m = m < t / 2 ? m : t / 2;
  l -= m;
  s -= m;
  t -= (t / 2) * 2;
  suma = m;

  suma += l / 4;
  l = l - (l / 4) * 4;
  cout << l << endl;
  suma += o / 4;
  o = o - (o / 4) * 4;
cout << o << endl;
  m = s < t ? s / 2 : t / 2;
  suma += m;
  s = s - m * 2;
    cout << s << endl;
  t = t - m * 2;
    cout << t << endl;
    suma += m;
    m = s < t ? s / 2 : t / 2;
    suma += m;
    m = l < s ? l / 2 : s / 2;
  cout << suma + m;
}*/

int main() {
  int l, o, s, t, m, suma = 0;
  cin >> l >> o >> s >> t;

  suma += l / 4;
  l -= (l / 4) * 4;

  suma += o / 4;
  o -= (o / 4) * 4;

  m = s < t ? s / 2 : t / 2;
  suma += m;
  s -= m * 2;
  t -= m * 2;

  m = l < s ? l / 2 : s / 2;
  suma += m;
  l -= m*2;
  s -= m*2;

  m = l < s ? l : s;
  m = m < t / 2 ? m : t / 2;
  suma += m;

  cout << suma;
}
