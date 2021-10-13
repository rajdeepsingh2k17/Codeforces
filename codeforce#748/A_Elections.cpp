#include <bits/stdc++.h>
using namespace std;
#define int long long int
signed main()
{
 int t;
 cin >> t;
 while (t--)
 {
  int a, b, c;
  cin >> a >> b >> c;
  int mx = max(a, max(b, c));
  if (a == b and b == c)
   cout << 1 << " " << 1 << " " << 1 << "\n";
  else if (a == b and a == mx)
  {
   cout << 1 << " " << 1 << " " << mx - c + 1 << "\n";
  }
  else if (b == c and b == mx)
  {
   cout << mx - a + 1 << " " << 1 << " " << 1 << "\n";
  }
  else if (a == c and a == mx)
  {
   cout << 1 << " " << mx - b + 1 << " " << 1 << "\n";
  }
  else
  {
   a = a == mx ? 0 : mx - a + 1;
   b = b == mx ? 0 : mx - b + 1;
   c = c == mx ? 0 : mx - c + 1;
   cout << a << " " << b << " " << c;
   cout << "\n";
  }
 }
 return 0;
}