/*                             
 *       de      nd        *
 *      n  f    u  e    d  *
 *     u    i  d    f  e   *
 *           ne      in    *
                           */



#include <iostream>

using namespace std;

int step(int a, int n) {
    if (n!=1) {
        if (n % 2 == 0)
            return step(a * a, n / 2);
        else
            return a * step(a, n - 1);
    }
    else
        return a;
}

int main() {
    int a, n;
    cin >> a >> n;
    cout << step(a, n);
}
