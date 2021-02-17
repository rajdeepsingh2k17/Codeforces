#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f first
#define s second
pair<ll, ll> p[200005];
int main()
{
 int t;
 cin >> t;
 while (t--)
 {
  int n;
  cin >> n;
  for (ll i = 0; i < n; i++)
  {
   int x;
   cin >> x;
   p[i] = make_pair(x, i);
  }
  sort(p, p + n);

  ll l = 0, r = n;
  while (l < r)
  {
   ll m = (l + r) / 2;

   ll tot = 0, pos = 1;
   for (ll i = 0; i < n; i++)
   {
    if (i <= m)
     tot += p[i].f;
    else if (i > m)
    {
     if (tot < p[i].f)
      pos = 0;
     tot += p[i].f;
    }
   }

   if (pos)
    r = m;
   else
    l = m + 1;
  }

  cout << n - l << '\n';
  vector<ll> v;
  for (ll i = 0; i < n - l; i++)
   v.push_back(p[l + i].s + 1);
  sort(v.begin(), v.end());
  for (ll x : v)
   cout << x << " ";
  cout << '\n';
 }
 return 0;
}