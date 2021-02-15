#include <algorithm>
#include <iostream>
 
using namespace std;

int plat(int arr[], int dep[], int num)
{

    sort(arr, arr + num);
    sort(dep, dep + num);

    int p_req = 1, res = 1;
    int i = 1, j = 0;
 
    while (i < num && j < num) {
        
        if (arr[i] <= dep[j]) {
            p_req++;
            i++;
        }
 
        else if (arr[i] > dep[j]) {
            p_req--;
            j++;
        }

        if (p_req > res)
            res = p_req;
    }
 
    return res;
}

int main()
{
    int arr[] = { 850, 910, 950, 1120, 1800, 1850 };
    int dep[] = { 920, 1000, 1120, 1130, 1900, 1930 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int pf = plat(arr, dep, n);
    cout << "Minimum Number of Platforms Required on Station = "
         << pf;
    return 0;
}
