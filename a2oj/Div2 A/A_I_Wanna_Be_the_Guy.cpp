#include <bits/stdc++.h>
using namespace std;
signed main()
{
 int n;
 cin >> n;
 int p, q;
 cin >> p;
 set<int> s;
 for (int i = 0; i < p; i++)
 {
  int t;
  cin >> t;
  s.insert(t);
 }
 cin >> q;
 for (int i = 0; i < q; i++)
 {
  int t;
  cin >> t;
  s.insert(t);
 }
 if (s.size() == n)
  cout << "I become the guy.";
 else
  cout << "Oh, my keyboard!";
 return 0;
}