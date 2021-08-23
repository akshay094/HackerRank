#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{
      int n;
      cin >> n;

      int arr[7];

      int sum = 0;

      for (int i = 0; i < 7; i++)
      {
            cin >> arr[i];
      }

      do
      {
            for (int i = 0; i < 7; i++)
            {
                  sum += arr[i];

                  if (sum >= n)
                  {
                        cout << i+1 << endl;
                        break;
                  }
            }

      } while (sum<n);

      return 0;
}