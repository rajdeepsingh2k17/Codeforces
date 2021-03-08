#include <bits/stdc++.h>
using namespace std;
int main()
{
 string s, ans = "";
 cin >> s;
 for (int i = 0; i < s.length(); i++)
 {
  if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y' || s[i] == 'y' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
   continue;
  else
  {
   ans.push_back('.');
   if (isupper(s[i]))
    ans.push_back(tolower(s[i]));
   else
    ans.push_back(s[i]);
  }
 }
 cout << ans;
 return 0;
}