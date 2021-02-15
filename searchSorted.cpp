#include <iostream> 
using namespace std; 

int search(int arr[], int l, int h, int key) 
{ 
    if (l > h) 
        return -1; 
  
    int mid = (l + h)/2; 
    if (arr[mid] == key) 
        return mid; 
  
    if (arr[l] <= arr[mid]) { 
       
        if (key >= arr[l] && key <= arr[mid]) 
            return search(arr, l, mid - 1, key); 
        return search(arr, mid + 1, h, key); 
    } 
    if (key >= arr[mid] && key <= arr[h]) 
        return search(arr, mid + 1, h, key); 
    return search(arr, l, mid - 1, key); 
} 

int main() 
{ 
    int arr[] = { 6, 9, 8, 5, 3, 1, 2, 4, 7 }; 
    int num = sizeof(arr) / sizeof(arr[0]); 
    int key ;
    cout<<"Enter Key :";
    cin>>key;
    int i = search(arr, 0, num - 1, key); 
    if (i != -1) 
        cout << "Index of key element is: " << i << endl; 
    else
        cout << "Key not found"; 
} 
