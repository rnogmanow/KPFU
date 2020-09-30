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
    int a,b,c ;
    cin >> a >> b >> c;
    if (a>b)
        swap (a,b);
    if (b>c)
        swap (b,c);
    if (a>c)
        swap (a,c);
    if (a>b)
        swap (a,b);
    cout << a << " " << b << " " << c;

}

/*
Даны три целых числа. Вывести их на экран в порядке возрастания.
*/
