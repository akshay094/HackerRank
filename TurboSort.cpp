#include <iostream>
using namespace std;

int main()
{
      int t;
      cin >> t;

      int arr[t];

      for (int i = 0; i < t; i++)
      {
            cin >> arr[i];
      }

      for (int i = 0; i < t; i++)
      {
            for (int j = i + 1; j < t; j++)
            {
                  if (arr[i] > arr[j])
                  {
                        int temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                  }
            }
      }

      // cout<<"==================\n";

      for (int i = 0; i < t; i++)
      {
            cout << arr[i]<<"\n";
      }

      return 0;
}