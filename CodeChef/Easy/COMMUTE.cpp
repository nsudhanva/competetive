#include <bits/stdc++.h>

typedef long long LL;
typedef unsigned long long ULL;
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k = 0;
    cin >> n;
    while (n--) {
      int s, l, f;
      cin >> s >> l >> f;
      k = max(k, s);
      k += (s - (k % f) + f) % f;
      k += l;
    }
    cout << k << endl;
  }
}