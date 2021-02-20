#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
signed main()
{
 int t;
 cin >> t;
 while (t--)
 {
  int n;
  cin >> n;
  vi a(n), b(n);
  for (int i = 0; i < n; i++)
   cin >> a[i];
  for (int i = 0; i < n; i++)
   cin >> b[i];
  int x = *min_element(a.begin(), a.end());
  int y = *min_element(b.begin(), b.end());
  int moves = 0;
  for (int i = 0; i < n; i++)
  {
   moves += max(a[i] - x, b[i] - y);
  }
  cout << moves << "\n";
 }
}