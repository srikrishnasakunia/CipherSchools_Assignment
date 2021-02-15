#include<bits/stdc++.h>
using namespace std;

int MajorityElement(int *arr,int n)
{
	sort(arr[0],arr[n]);
	int count = 1,max_element=-1,temp = arr[0],e,f=0;
	for(int i=0;i<n;i++)
	{
		if(temp==arr[i])
		{
			count++;
		}
		else
		{
			count =1;
			temp = arr[i];
		}
		if(max_element<count)
		{
			max_element = count;
			e=arr[i];
			
			if(max_element>(n/2))
			{
				f=1;
				break;
			}
		}
	}
	return (f==1?e:-1);
}
int main()
{
	int arr[] = {1,1,2,3,5,1};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<MajorityElement(arr,n);
	return 0;
}
