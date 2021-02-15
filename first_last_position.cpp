#include <bits/stdc++.h>
using namespace std;
int firstElement(int arr[], int x, int n)
{
    int low = 0, high = n - 1, res = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;
        else {
            res = mid;
            high = mid - 1;
        }
    }
    return res;
}
int lastElement(int arr[], int x, int n)
{
    int low = 0, high = n - 1, res = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;
        else {
            res = mid;
            low = mid + 1;
        }
    }
    return res;
}
int main()
{
 	int n;
	cout<<"Enter size of Array";
	cin>>n;
	int arr[n];
	cout<<"Enter Array Elements";
	for(int i=0;i<n;i++)
	cin>>arr[i];  
	int x;
	cout<<"Element to be searched ";
	cin>>x;
    cout<<"First Occurrence = "<<firstElement(arr, x, n);
    cout<<"\nLast Occurrence = "<<lastElement(arr, x, n);
 
    return 0;
}
