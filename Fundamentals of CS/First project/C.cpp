#include <iostream>

using namespace std;

int main() {
    int h,a,b;
    cin >> h >> a >> b;
    cout << (h-a)/(a-b)+1;
}

/*
Улитка ползет по вертикальному шесту высотой H метров, поднимаясь за день на A метров, а за ночь спускаясь на B метров. На какой день улитка доползет до вершины шеста?
(Программа получает на вход целые неотрицательные числа 
H, A, B, причем H > B. Числа не превосходят 100.)
*/