/*                             
 *       de      nd        *
 *      n  f    u  e    d  *
 *     u    i  d    f  e   *
 *           ne      in    *
                           */



#include <iostream>
#include <algorithm>

using namespace std;

int pravbinary_search(int a[], int n, int x) {
    int l = -1;
    int r = n-1;
    int m;
    while (l < r - 1) {
        m = (l + r) / 2;
        if (a[m] < x)
            l = m;
        else
            r = m;
    }
    return r;
}

int levbinary_search(int a[], int n, int x) {
    int l = 0;
    int r = n;
    int m;
    while (l < r - 1) {
        m = (l + r) / 2;
        if (a[m] > x)
            r=m;
        else
            l=m;
    }
    return l;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    int x;
    cin >> x;
    for (int i = 0; i < n; i++)
       a[i] = rand() % 100 - 50;
    sort(a, a + n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    if (abs(a[pravbinary_search(a, n, x)]-x)>abs(a[levbinary_search(a, n, x)]-x))
        cout << a[levbinary_search(a, n, x)];
    else
        cout << a[pravbinary_search(a, n, x)];
}
