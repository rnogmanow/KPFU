/*                             
 *       de      nd        *
 *      n  f    u  e    d  *
 *     u    i  d    f  e   *
 *           ne      in    *
                              */
                              
#include <iostream>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    int flag = 0;
    int s = 0;
    for (int i = 0; i < n; i++)
        if (((s += n) % k == 0) && (k%n==0)) {
            cout << "YES";
            flag = 1;
            break;
        }
    s = 0;
    if (flag == 0) {
        for (int i = 0; i < m; i++)
            if (((s += m) % k == 0) && (k%m==0)) {
                cout << "YES";
                flag = 1;
                break;
            }
    }
    if (flag == 0) {
        cout << "NO";
    }
}

/*
Шоколадка имеет вид прямоугольника, разделенного на N×M долек. Шоколадку можно один раз разломить по прямой на две части. Определите, можно ли таким образом отломить от шоколадки ровно K долек.
(Программа должна вывести одно из двух слов: YES или NO.)
*/
