#include <iostream>
using namespace std;

int main()
{
      int arr[5][5];

      for (int i = 0; i < 5; i++)
      {
            for (int j = 0; j < 5; j++)
            {
                  cin>>arr[i][j];
            }
      }
      for (int i = 1; i <=5; i++)
      {
            for (int j = 1; j <= 5; j++)
            {
                  if(arr[i-1][j-1]==1){
                        cout<<(abs(i-3) + abs(j-3))<<endl;
                  }
            }
      }

      return 0;
}