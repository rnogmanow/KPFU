/*                             
 *       de      nd        *
 *      n  f    u  e    d  *
 *     u    i  d    f  e   *
 *           ne      in    *
                           */

#include <iostream>

using namespace std;

int main() {
    int count = 2;
    int ai2, ai1 = 1, ai = 1;
    int a;
    cin >> a;
    if (a == 1)
        cout << count;
    else {
        while (a > ai) {
            ai2 = ai1;
            ai1 = ai;
            ai = ai2 + ai1;
            count += 1;
        }
        if (a == ai)
            cout << count;
        else
            cout << "-1";
    }
}

/*
Последовательность Фибоначчи определяется так: 
F(0) = 0, F(1) = 1, …, F(n) = F(n−1) + F(n−2).
Дано натуральное число A. 
Определите, каким по счету числом Фибоначчи оно является, то есть выведите такое число N, что F(N) = A. 
Если А не является числом Фибоначчи, выведите число -1.
*/
