// Condition -->> Array should be in sorted order
// i.e., in increasing or decreasing order
// Time Complexity of Binary Search is O(log n).

// for increasing order -->
// 1) set start = 0 & end = sizeOfArray - 1
// 2) find mid index of array -> [mid = start + (end - start) / 2]
// 3) if arr[mid] == key return mid
// 4) if arr[mid] > key then set end = mid - 1
// 5) if arr[mid] < key then set start = mid + 1

// Similarly we can show it for decreasing order.

#include <bits/stdc++.h>
using namespace std;

int binarySearchOfIncreasingOrder(int arr[], int key, int sizeOfArray)
{
   int start = 0;
   int end = sizeOfArray - 1;

   if (key < arr[0] || key > arr[sizeOfArray - 1])
   {
      return -1;
   }
   else
   {
      while (start <= end)
      {
         int mid = start + (end - start) / 2;
         // OPTIMIZATION -->>
         // we have never used "mid = (start + end)/2" formula
         // bcoz if the start and end index of array is '2^31 - 1'
         // then the value of mid will go out of range of int varible
         // and it will generate error, so to avoid this
         // we have used "mid = start + (end - start) / 2" which will
         // never goes out of range of int

         if (arr[mid] == key)
         {
            return mid;
         }
         else if (arr[mid] > key)
         {
            end = mid - 1;
         }
         else if (arr[mid] < key)
         {
            start = mid + 1;
         }
      }
   }
}

int main()
{
   int arr[] = {2, 5, 6, 8, 9, 12, 15, 18, 23};
   int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
   int key;
   cin >> key;
   cout << binarySearchOfIncreasingOrder(arr, key, sizeOfArray);
   return 0;
}