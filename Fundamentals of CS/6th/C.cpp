/*                             
 *       de      nd        *
 *      n  f    u  e    d  *
 *     u    i  d    f  e   *
 *           ne      in    *
                           */


#include <iostream>
using namespace std;
 int main() {
     int n;
     cin >> n;
     int a[n];
     for (int i=0;i<n;i++)
         a[i]=1;
     int k;
     cin >> k;
     int b,c ;
     for (int i=0;i<k;i++) {
         cin >> b >> c;
         for (int j = b; j <= c; j++)
             a[j-1] = 0;
     }
     for (int i=0;i<n;i++)
         if (a[i]!=0)
             cout << "I";
         else
             cout << ".";

 }
