#include <bits/stdc++.h>
using namespace std;
int main()
{
   int arr[] = {5, 4, 8, 9, 6, 5, 21, 2};
   int key;
   cin >> key;

   int sizeOfArray = sizeof(arr) / sizeof(arr[0]);

   for (int i = 0; i < sizeOfArray; i++)
   {
      if (arr[i] == key)
      {
         cout << i;
         break;
      }
   }

   return 0;
}