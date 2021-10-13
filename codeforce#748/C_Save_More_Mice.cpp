#include <bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin >> t;
 while (t--)
 {
  int n, k;
  cin >> n >> k;
  vector<int> a(k);
  for (int i = 0; i < k; i++)
   cin >> a[i];
  int ans = 0, sum = 0;
  sort(a.begin(), a.end());
  for (int i = k - 1; i >= 0; i--)
  {
   if (sum + (n - a[i]) < n)
   {
    ans++;
    sum += (n - a[i]);
   }
  }
  cout << ans << "\n";
 }
}