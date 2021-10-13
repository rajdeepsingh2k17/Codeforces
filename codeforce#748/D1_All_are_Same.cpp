#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
 if (a == 0)
  return b;
 return gcd(b % a, a);
}
int main()
{
 int t;
 cin >> t;
 while (t--)
 {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
   cin >> a[i];
  }

  int mn = *min_element(a.begin(), a.end());
  for (int i = 0; i < n; i++)
  {
   a[i] -= mn;
  }
  int g = a[0], ans = a[0];

  for (int i = 1; i < n; i++)
  {
   ans = gcd(ans, a[i]);
  }

  if (ans == 0)
  {
   cout << -1 << "\n";
  }
  else
  {
   cout << ans << "\n";
  }
 }
}