/*                             
 *       de      nd        *
 *      n  f    u  e    d  *
 *     u    i  d    f  e   *
 *           ne      in    *
                           */


#include <iostream>

using namespace std;

int minimum (int a, int b){
    if (a<b)
        return a;
    else return b;
}

int min4( int a, int b, int c, int d){
	return minimum(minimum (a,b), minimum(c, d));
	}
int main() {
    int a , b , c ,d;
    cin >> a >> b >> c >> d;
    cout << min4(a, b, c, d);
}
