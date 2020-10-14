/*                             
 *       de      nd        *
 *      n  f    u  e    d  *
 *     u    i  d    f  e   *
 *           ne      in    *
                           */

#include <iostream>

using namespace std;

double power (double a, int b){
    if (b!=1)
    return power(a,b-1)*a;
    else
        return a;
}
int main() {
    double a;
    int n;
    cin >> a >> n;
    cout << power(a,n);
}
