#include<iostream>
#include<algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{     int n;
      cin>>n;
      int arr[n];

      for (int i = 0; i < n; i++)
      {
            cin>>arr[i];
      }

      int arrs[n];

      for (int i = 0; i < n; i++)
      {
            arrs[i] = arr[i];
      }



      sort(arr , arr+n);

      int count(0);
      int a,b;
      
      for (int i = 0; i < n; i++)
      {
            if(arr[i]!=arrs[i]){
                  count++;
                  arr[i];
            }
      }
     
      if(count==2){
            cout<<"yes"<<endl;

      }
      else
      {
            cout<<"no"<<endl;
      }
      
      return 0;

}