#include <bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin >> t;
 while (t--)
 {
  int n;
  cin >> n;
  priority_queue<pair<int, int>> s;
  for (int i = 0; i < n; i++)
  {
   int a;
   cin >> a;
   if (a > 0)
    s.push({a, i + 1});
  }

  vector<pair<int, int>> sol;
  while (s.size() > 1)
  {
   pair<int, int> flag = s.top();
   s.pop();
   pair<int, int> flag2 = s.top();
   s.pop();
   sol.push_back({flag2.second, flag.second});
   flag.first--, flag2.first--;

   if (flag.first)
    s.push(flag);
   if (flag2.first)
    s.push(flag2);
  }

  cout << sol.size() << endl;
  for (pair<int, int> x : sol)
  {
   cout << x.first << " " << x.second << endl;
  }
 }
 return 0;
}