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
    int n, m, x,y;
    cin >> n >> m >> x >> y;
    if (n<m)
        n=n;
    else
        swap (n,m);
    if (y<n)
        y=y;
    else
        y=n-y;
    if (x<m)
        x=x;
    else
        x=m-x;
    cout << min(x,y);
}

/*
Яша плавал в бассейне размером N×M метров и устал. 
В этот момент он обнаружил, что находится на расстоянии X метров от одного из длинных бортиков (не обязательно от ближайшего) 
и Y метров от одного из коротких бортиков. 
Какое минимальное расстояние должен проплыть Яша, чтобы выбраться из бассейна на бортик?
*/
