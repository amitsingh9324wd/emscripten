
#include <bits/stdc++.h>
using namespace std;


void sortExceptUandL(int a[], int l, int u, int n)
{
    
    int b[n - (u - l + 1)];
    for (int i = 0; i < l; i++) 
         b[i] = a[i];
    for (int i = u+1; i < n; i++) 
         b[l + (i - (u+1))] = a[i];    

    
    sort(b, b + n - (u - l + 1));

    for (int i = 0; i < l; i++) 
         a[i] = b[i];
    for (int i = u+1; i < n; i++) 
         a[i] = b[l + (i - (u+1))]; 
}


int main()
{
    int a[] = { 5, 4, 3, 12, 14, 9 };
    int n = sizeof(a) / sizeof(a[0]);
    int l = 2, u = 4;
    sortExceptUandL(a, l, u, n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
