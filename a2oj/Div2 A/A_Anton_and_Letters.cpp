#include <bits/stdc++.h>
using namespace std;
int main()
{
 string s;
 getline(cin, s);
 int count = 0;
 for (char i = 'a'; i <= 'z'; i++)
 {
  if (s.find(i) != string::npos)
   count++;
 }
 cout << count;
 return 0;
}