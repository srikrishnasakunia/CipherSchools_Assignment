#include <iostream> 
using namespace std; 
  
int numberOfPaths(int m, int n) 
{ 
    int path = 1; 
    for (int i = n; i < (m + n - 1); i++) { 
        path *= i; 
        path /= (i - n + 1); 
    } 
    return path; 
} 
int main() 
{ 
    cout << numberOfPaths(3, 3); 
    return 0; 
} 
