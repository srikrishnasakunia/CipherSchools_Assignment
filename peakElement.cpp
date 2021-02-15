#include<bits/stdc++.h>
using namespace std;

int findPeak(int arr[],int n)
{
	if(n==1)
	return arr[0];
	if(arr[0]>=arr[1])
	return 0;
	if(arr[n-1]>=arr[n-2])
	return n-1;
	
	for(int i=1;i<n-1;i++)
	{
		if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1])
		return i;
	}
}

int main()
{
	int n;
	cout<<"Enter the size of array";
	cin>>n;
	int arr[n];
	cout<<"Enter the array";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Peak Element is"<<findPeak(arr,n);
	return 0;
}
