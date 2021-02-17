#include <bits/stdc++.h>
using namespace std;
vector<int> b, a;
void solve(int l, int r, int d)
{
 if (l > r)
  return;
 int m = l;
 for (int i = l; i <= r; i++)
 {
  if (a[i] > a[m])
   m = i;
 }
 b[m] = d;
 solve(l, m - 1, d + 1);
 solve(m + 1, r, d + 1);
}
int main()
{
 int t;
 cin >> t;
 while (t--)
 {
  int n;
  cin >> n;
  a.resize(n), b.resize(n);
  for (int i = 0; i < n; i++)
   cin >> a[i];
  solve(0, n - 1, 0);
  for (int i = 0; i < n; i++)
   cout << b[i] << " ";
  cout << "\n";
 }
 return 0;
}