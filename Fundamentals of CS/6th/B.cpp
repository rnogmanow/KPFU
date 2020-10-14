/*                             
 *       de      nd        *
 *      n  f    u  e    d  *
 *     u    i  d    f  e   *
 *           ne      in    *
                           */



#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a[9];
    int b[9];
    for (int i = 0; i < 8; i++)
        cin >> a[i] >> b[i];
    for (int i = 0; i < 8; i++)
        for (int j = i+1; j < 8; j++)
            if ((a[i]==a[j]) || (b[i]==b[j]) || (a[i]+b[i]==a[j]+b[j]))
                    {
                cout << "YES";
                exit(0);
            }
cout << "NO";
}
