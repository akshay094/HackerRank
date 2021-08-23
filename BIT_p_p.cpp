#include <iostream>
using namespace std;
#include <string>

int main()
{
      int n;
      cin >> n;
      int sum = 0;
      string x;

      for (int i = 0; i < n; i++)
      {
            cin >> x;

            if (x == "++X" || x == "X++")
            {
                  sum += 1;
            }
            else if (x == "--X" || x == "X--")
            {
                  sum -= 1;
            }
            else
            {
                  sum = sum;
            }
      }
      cout << sum;
      return 0;
}