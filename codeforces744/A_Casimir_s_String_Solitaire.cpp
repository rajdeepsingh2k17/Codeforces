#include <bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin >> t;
 while (t--)
 {
  string s;
  cin >> s;
  int a[3];
  for (int i = 0; i < 3; i++)
  {
   a[i] = 0;
  }
  int n = s.length();
  for (int i = 0; i < n; i++)
  {
   a[s[i] - 'A']++;
  }
  int sum = 0;
  if (a[1] == (a[0] + a[2]))
   cout << "Yes" << endl;
  else
   cout << "No" << endl;
 }
}