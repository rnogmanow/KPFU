/*                             
 *       de      nd        *
 *      n  f    u  e    d  *
 *     u    i  d    f  e   *
 *           ne      in    *
                           */

#include <iostream>
using namespace std;
int main() {
    int pred, num, count = 0, max = 0;
    cin >> num;
    pred = num;
    while (num != 0){
        if (pred == num) {
            count++;
            if (count > max) {
                max = count;
            }
        }
        else
            count = 1;
    pred = num;
    cin >> num;
}
    if (count > max)
        max = count;
        cout << max;
}

/*
Дана последовательность натуральных чисел, завершающаяся числом 0. 
Определите, какое наибольшее число подряд идущих элементов этой последовательности равны друг другу. 
Если не нашлось ни одной пары, тройки и т.д. элементов, равных друг другу, то программа должна вывести число 1.
*/
