#include <bits/stdc++.h>
using namespace std;
#define int long long int
signed main()
{
 int n, k;
 cin >> n >> k;
 int mid = 0, ans = 0;
 if (n & 1)
 {
  mid = n / 2 + 1;
  if (k > mid)
  {
   k = k - mid;
   ans = 2 + (k - 1) * 2;
  }
  else
  {
   ans = 1 + (k - 1) * 2;
  }
 }
 else
 {
  mid = n / 2;
  if (k > mid)
  {
   k = k - mid;
   ans = 2 + (k - 1) * 2;
  }
  else
  {
   ans = 1 + (k - 1) * 2;
  }
 }
 cout << ans;
 return 0;
}