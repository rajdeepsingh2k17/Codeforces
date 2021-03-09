#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin >> n;
 vector<int> a(n);
 for (int i = 0; i < n; i++)
  cin >> a[i];
 int mx = *max_element(a.begin(), a.end());
 auto it = find(a.begin(), a.end(), mx);
 int posmx = it - a.begin();
 int ans = posmx;
 int mn = *min_element(a.begin(), a.end());
 int posmn;
 for (int i = 0; i < n; i++)
 {
  if (a[i] == mn)
   posmn = i;
 }
 n--;
 if (posmx > posmn)
 {
  posmn++;
  ans += (n - posmn);
  cout << ans;
 }
 else
 {
  ans += (n - posmn);
  cout << ans;
 }
 return 0;
}