#include<iostream>
using namespace std;
 
int largeSubArraySum(int m[], int size)
{
   int large_so_far = m[0];
   int curr_large = m[0];
 
   for (int i = 1; i < size; i++)
   {
        curr_large = max(m[i], curr_large+m[i]);
        large_so_far = max(large_so_far, curr_large);
   }
   return large_so_far;
}
 
int main()
{
   int a[] =  {-5, -4, 7, -2, -6, 1, 5, -9};
   int n = sizeof(a)/sizeof(a[0]);
   int ls = largeSubArraySum(a, n);
   cout << "Largest contiguous sum is " << ls;
   return 0;
}
