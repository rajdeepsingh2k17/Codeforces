#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--) {
    int64_t x;
    cin >> x;
    bool ok = false;
    for (int64_t a = 1; a * a * a < x && !ok; ++a) {
      int64_t b = cbrt(x - a * a * a);
      for (int64_t c = b - 1; c <= b + 1 && !ok; ++c) {
        if (c >= 1 && c * c * c + a * a * a == x) {
          cout << "YES\n";
          ok = true;
        }
      }
    }
    if (!ok) {
      cout << "NO\n";
    }
  }
  return 0;
}
