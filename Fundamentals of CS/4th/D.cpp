/*                             
 *       de      nd        *
 *      n  f    u  e    d  *
 *     u    i  d    f  e   *
 *           ne      in    *
                           */

#include <iostream>

using namespace std;

int kolvo(int n) {
    int k=0;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            k++;
    return k;
}

void chislo(int a, int b) {
    for (int i = a; i < b; i++)
        if (kolvo(i)==2)
            cout << i << " ";
}

int main() {
    int a, b;
    cin >> a >> b;
    chislo(a, b);
}

/*
Напишите программу, которая получает натуральные числа A и B (A<B) и выводит все на отрезке [A; B], у которых ровно 4 разных делителя.
Пример:
Введите границы диапазона:
10 20
10 14 15
*/
