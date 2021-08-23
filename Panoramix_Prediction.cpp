#include<iostream>
using namespace std;

int main()
{     
      int n,m;
      cin>>n>>m;
      
      for (int i = 2; i <m/2; ++i)
      {
            if(m%i==0){

                  cout<<"No"<<endl;
                  break;
            }
            else {

                  cout<<"YES"<<endl;
                  break;
            }
      }
      

      return 0;
}