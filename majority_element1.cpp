#include <bits/stdc++.h>
using namespace std;
 
int majorityElement(int *arr, int n)
{
    sort(arr, arr+n);
     
    int count = 1, max_element = -1, temp = arr[0], e, f=0;
     
    for(int i=1;i<n;i++)
    {
        if(temp==arr[i])
        {
            count++;
        }
        else
        {
            count = 1;
            temp = arr[i];
        }
        if(max_element<count)
        {
            max_element = count;
            e = arr[i];
             
            if(max_element>(n/2))
            {
                f = 1;
                break;
            }
        }
    }
    return (f==1 ? e : -1);
}
int main()
{
    int arr[] = {4, 4, 2, 4, 3, 4, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<majorityElement(arr, n);
 
    return 0;
}
