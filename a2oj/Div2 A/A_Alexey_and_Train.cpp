#include <bits/stdc++.h>
using namespace std;
void solve()
{
 int n;
 cin >> n;
 vector<int> a(2), b(2), t(n);
 for (int i = 0; i < n; i++)
  cin >> a[i] >> b[i];
 for (int i = 0; i < n; i++)
  cin >> t[i];
 int sum = a[0] + t[0];
 for (int i = 1; i < n; i++)
 {
  sum += a[i] - b[i - 1] + t[i];
 }
 cout << sum << " ";
}
int main()
{
 int t;
 cin >> t;
 while (t--)
 {
  solve();
 }
 return 0;
}