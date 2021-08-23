#include <iostream>
#include <string>
using namespace std;

int main()
{
      int T;
      cin >> T;

      while (T--)
      {

            int x(0), y(0);
            int m, n;

            cin >> m >> n;

            string s;
            cin >> s;

            for (int i = 0; i < s.length(); i++)
            {

                  switch (s[i])
                  {
                  case 'U':
                        y++;
                        break;

                  case 'D':
                        y--;
                        break;
                  case 'R':
                        x++;
                        break;
                  case 'L':
                        x--;
                        break;
                  }
            }
            if (m==x && n==y)
            {
                  cout<<"YES"<<endl;
            }
            else{
                  cout<<"NO"<<endl;

            }
            // cout<<x<<" "<<y;
            x=1;y=1;
      }

      return 0;
}