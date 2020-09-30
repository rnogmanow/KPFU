/*                             
 *       de      nd        *
 *      n  f    u  e    d  *
 *     u    i  d    f  e   *
 *           ne      in    *
                           */

#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n;
    for (int i=1; i <= n ; i++) {
        k = i;
        while (k > 0)
        {
            if (k%10==0)
                break;
            else
                if (i%(k%10)==0)
                    k/=10;
            else
                    break;
        }
        if (k==0)
            cout << i << " ";
    }
}

/*
Ввести натуральное число N и вывести все натуральные числа, не превосходящие N и делящиеся на каждую из своих цифр. 
Пример:
Введите N:
15
1 2 3 4 5 6 7 8 9 11 12 15
*/
