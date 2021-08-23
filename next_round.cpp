#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
      int n;
      cin >> n;

      int arr[n];

      for (int i = 0; i < n; i++)
      {
            cin>>arr[i];
      }

      int q;
      cin>>q;

      int nos=0;

      for (int i = 0; i < n; i++)
      {
            if(arr[i]>q && arr[i]>0){
                  // nos++;
            }
            else{
                  nos = nos;
            }
      }

      cout<<nos<<endl;
      

      return 0;
}