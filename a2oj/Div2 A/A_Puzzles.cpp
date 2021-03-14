#include <bits/stdc++.h>
using namespace std;
signed main()
{
 int n, m;
 cin >> n >> m;
 vector<int> a(m);
 for (int i = 0; i < m; i++)
 {
  cin >> a[i];
 }
 sort(a.begin(), a.end());
 int i = 0, j = 0;
 int mn = INT_MAX, mx = INT_MIN;
 for (i; i < n; i++)
 {
  mn = min(mn, a[i]);
  mx = max(mx, a[i]);
 }
 int ans = mx - mn;
 i = 1, j = n;
 while (j < m)
 {
  if (a[j] - a[i] < ans)
  {
   ans = a[j] - a[i];
  }
  i++, j++;
 }
 cout << ans;
 return 0;
}