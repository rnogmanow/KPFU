#include <iostream>

using namespace std;

int main() {
    int v ,t ;
    cin >> v >> t;
    cout << (109*t+(v*t))%109;
}

/*
Длина Московской кольцевой автомобильной дороги —109 километров. Байкер Вася стартует с нулевого километра МКАД и едет со скоростью V километров в час. На какой отметке он остановится через T часов?
(Программа получает на вход целые числа V и T. 
Если V > 0, то Вася движется в положительном направлении по МКАД, если же значение V < 0, то в отрицательном. 
0 ≤ T ≤ 1000, -1000 ≤ V ≤ 1000)
*/
