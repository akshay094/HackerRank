#include <iostream>
using namespace std;

int main()
{
      int n;
      cin >> n;
      //    6 ,
      int m;

      

      if (n % 2 == 0)
      {     cout<<(n/2)<<endl;
            for (int i = 0; i < n; i += 2)
            {

                  cout << "2"
                       << " ";
            }
      }

      else if (n % 2 != 0)
      {     cout<<(n/2)<<endl;    
            for (int i = 0; i < n - 3; i += 2)
            {     
                  cout << "2"
                       << " ";
            }
            cout << "3";
      }

      return 0;
}