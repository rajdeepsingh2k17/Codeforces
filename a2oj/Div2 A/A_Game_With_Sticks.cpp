#include <bits/stdc++.h>
using namespace std;
int main()
{
 int r, c;
 cin >> r >> c;
 int t = min(r, c);
 if (t % 2 == 0)
  cout << "Malvika";
 else
  cout << "Akshat";
 return 0;
}