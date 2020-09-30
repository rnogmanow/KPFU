/*                             
 *       de      nd        *
 *      n  f    u  e    d  *
 *     u    i  d    f  e   *
 *           ne      in    *
                           */

#include <iostream>

using namespace std;

int main() {
    int n = 185;
    int k = 0;
    for (int i = 0; i < 12; i++)
        for (int j = 0; j < 12; j++)
            for (int k = 0; k < 12; k++)
                if (15 * i + 17 * j + 21 * k == 185)
                   {
                    k+=1;
                    cout << i << " " << j << " " << k << endl;
                   } 
     cout << k;
                    
}

/*
В магазине продается мастика в ящиках по 15 кг, 17 кг, 21 кг. 
Как купить ровно 185 кг мастики, не вскрывая ящики? 
Сколькими способами можно это сделать?
*/
