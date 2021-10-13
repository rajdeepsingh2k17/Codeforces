#include <bits/stdc++.h>
using namespace std;
int util(string s, char a, char b)
{
 int sol = 0, flag = 0;

 for (int i = s.length() - 1; i >= 0; i--)
 {
  if (s[i] == a)
  {
   flag++;
   if (flag == 2)
    return sol;

   a = b;
  }
  else
   sol++;
 }
 return INT_MAX;
 if (flag == -1)
 {
  return -1;
  cout << "hoga bhai";
 }
}
int main()
{
 int t;
 cin >> t;
 while (t--)
 {
  string n;
  cin >> n;
  int ans = INT_MAX;
  ans = min(ans, min(util(n, '0', '0'), min(util(n, '0', '5'), min(util(n, '5', '2'), util(n, '5', '7')))));

  cout << ans << endl;
 }
}