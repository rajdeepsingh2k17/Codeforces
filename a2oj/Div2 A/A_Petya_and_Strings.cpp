#include <bits/stdc++.h>
using namespace std;
int main()
{
 string a, b;
 cin >> a >> b;
 int n = a.length();
 bool ok = true;
 for (int i = 0; i < n; i++)
 {
  if (tolower(a[i]) == tolower(b[i]))
   continue;
  else if (tolower(a[i]) < tolower(b[i]))
  {
   cout << -1;
   ok = false;
   break;
  }
  else if (tolower(a[i]) > tolower(b[i]))
  {
   cout << 1;
   ok = false;
   break;
  }
 }
 if (ok)
  cout << 0;
 return 0;
}