#include <bits/stdc++.h>
using namespace std;
#define ll int
int main()
{
 int t;
 cin >> t;
 while (t--)
 {
  int n;
  cin >> n;
  vector<int> v(n);
  bool ok = true;
  for (int i = 0; i < n; i++)
  {
   cin >> v[i];
  }
  sort(v.begin(), v.end());
  for (int i = 1; i < n; i++)
  {

   if (abs(v[i] - v[i - 1]) > 1)
    ok = false;
  }
  if (ok)
   cout << "YES"
        << "\n";
  else
   cout << "NO"
        << "\n";
 }
 return 0;
}