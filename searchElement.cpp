#include<bits/stdc++.h>
using namespace std;
int searchElement(int n,int mat[4][4],int x)
{
	if(n==0)
	return -1;
	int smallest = mat[0][0], largest = mat[n-1][n-1];
	if(x<smallest || x> largest)
	return -1;
	
	int i=0,j=n-1;
	while(i<n && j>=0)
	{
		if(mat[i][j]==x)
		{
			cout<<"Element position is "<<i<<","<<j;
			return 1;
		}
		if(mat[i][j]>x)
		j--;
		else
		i++;
	}
	cout<<"Not Found";
	return 0;
}
int main()
{
	int n;
	cout<< "Specify the size of matrix";
	cin>>n;
	int mat[4][4];
	cout<< "Enter the matrix elements";
	int i=0,j=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>mat[i][j];
		}
	}
	int x;
	cout<<"Element to search";
	cin>>x;
	searchElement(n,mat,x);
	return 0;
	
}
