//
// Created by Krishna on 15-02-2021.
//
#include <bits/stdc++.h>
#include <cstdio>

using namespace std;
int swap(int x1,int x2){
    int temp = x1;
    x1=x2;
    x2=temp;
    return (x1,x2);
}
bool two_meet(int d1,int d2,int s1,int s2){
    if(d1<d2 && s1<s2)
        return false;
    if(d1>d2 && s1>s2)
        return false;
    if(d1<d2)
    {
        swap(d1,d2);
        swap(s1,s2);
    }
    return ((d1-d2)%(s1-s2)==0);
}

int main()
{
    int d1=5,d2=8,s1=7,s2=4;
    if(two_meet(d1,d2,s1,s2))
        printf("Yes");
    else
        printf("No");
    return 0;
}
