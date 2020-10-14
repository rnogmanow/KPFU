/*                             
 *       de      nd        *
 *      n  f    u  e    d  *
 *     u    i  d    f  e   *
 *           ne      in    *
                           */



#include <iostream>

using namespace std;

void coout (int b){
    if (b!=0)
    cout << b << " ";
}
void ciin(int b) {
    if (b != 0) {
        cin >> b;
         ciin(b);
    }
    coout (b);
}


int main() {
    int b = 1;
    ciin(b);
}
