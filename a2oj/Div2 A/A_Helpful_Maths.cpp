#include <bits/stdc++.h>
using namespace std;
int main()
{
 string s, ans;
 cin >> s;
 int n = s.length();
 vector<int> m;
 for (int i = 0; i < n; i++)
 {
  if (isdigit(s[i]))
   m.push_back((s[i]));
 }
 sort(m.begin(), m.end());
 n = m.size();
 int i;
 for (i = 0; i < n - 1; i++)
 {
  ans.push_back(m[i]);
  ans.push_back('+');
 }
 ans.push_back(m[i]);
 cout << ans;
 return 0;
}