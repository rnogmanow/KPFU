/*                             
 *       de      nd        *
 *      n  f    u  e    d  *
 *     u    i  d    f  e   *
 *           ne      in    *
                           */



#include <iostream>
using namespace std;
int ubiv(int a[] , int  n){
for (int i=0;i<n-1;i++)
    if (a[i]>a[i+1])
        continue;
    else
    {
    return 0;
    }
    return 1;
}

int vozr(int a[] , int  n){
    for (int i=0;i<n-1;i++)
        if (a[i]<a[i+1])
            continue;
        else
        {
            return 0;
        }
    return 1;
}
    int main () {
    int n;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++)
        cin >> a[i];
    cout << (ubiv(a, n) || (vozr(a, n)));
}
