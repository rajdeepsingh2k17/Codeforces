#include <bits/stdc++.h>
using namespace std;
int main()
{
 string s;
 cin >> s;
 string h = "hello";
 int i = 0, j = 0, n = s.length(), m = h.length();
 while (i < n && j < m)
 {
  if (s[i] == h[j])
  {
   i++, j++;
  }
  else
   i++;
 }
 if (j != m)
  cout << "NO";
 else
  cout << "YES";
 return 0;
}