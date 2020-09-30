/*                             
 *       de      nd        *
 *      n  f    u  e    d  *
 *     u    i  d    f  e   *
 *           ne      in    *
                           */

#include <iostream>
#include <math.h>

using namespace std;

bool prime(int n) {
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}

void itsprime(int a, int b) {
    for (int i = a; i < b; i++)
        if (prime(i))
            cout << i << " ";
}

int main() {
    int a, b;
    cin >> a >> b;
    itsprime(a, b);
}

/*
Напишите программу, которая получает натуральные числа A и B (A<B) и выводит все простые числа на отрезке [A; B].
Пример:
Введите границы диапазона:
10 20
11 13 17 19
*/
