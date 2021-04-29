#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int n;
    cin >> n;
    int p;
    cin >> p;
    vector<int> v(p);
    for(int i = 0; i < p; i++)
    {
      cin >> v[i];
    }
      int cnt = 0;
      for(int i = 0; i <= n; i++)
      {
        if(i%7 == 6 || i%7 == 0)
        continue;
        bool found = false;
        for(int j = 0; j < p; j++)
        {
          if(i % v[j] == 0)
          found = true;
        }
        if(found) ++cnt;
      }
      cout << cnt << '\n';
  }
  return 0;
}
