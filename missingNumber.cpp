#include<iostream>
using namespace std;

int missingNum(int a[], int num) 
{ 
    int i, t=1; 
     
    for ( i = 2; i<= (num+1); i++)
    {
        t+=i;
        t -= a[i-2];
    }
    return t; 
} 

int main() {
    int arr[] = {1, 2, 3, 4, 5, 7};
    int n = missingNum(arr,sizeof(arr)/sizeof(arr[0]));
    cout<<n;
    return 0;
}
