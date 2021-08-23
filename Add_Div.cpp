#include <iostream>
#include <cmath>
using namespace std;

int main()
{
      int t;
      cin >> t;

      while (t--)
      {
            int count(0);

            int a, b;
            cin >> a >> b;
            bool m = true;

            while (m)
            {     
                  a = a / b;
                  ++b;
                  if (a==0)
                  {
                        m = false;
                  }
                  count++;
            }
            cout << count << endl;
      }

      return 0;
}