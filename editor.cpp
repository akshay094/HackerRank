#include <iostream>
#include <string>
using namespace std;

int main()
{
      int *ptr = new int[5];

      for (int i = 0; i < 5; i++)
      {
            cin>>*(ptr+i);
      }
      
      for (int i = 0; i < 5; i++)
      {     if (*(ptr+i)==42)
      {
            break;
      }
      
            cout<<*(ptr+i);
      }
      return 0;
}