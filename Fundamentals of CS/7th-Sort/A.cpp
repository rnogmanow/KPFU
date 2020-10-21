/*                             
 *       de      nd        *
 *      n  f    u  e    d  *
 *     u    i  d    f  e   *
 *           ne      in    *
                           */




#include <iostream>
#include <algorithm>

//rand function in cpp isn`t really random

long bubbleSort(int a[], int n) {
    long bk = 0;
    for (int i = 0; i < n - 2; i++) {
        for (int j = 0; j < n - i - 2; j++)
            if (a[j] > a[j + 1]) {
                std::swap(a[j], a[j + 1]);
                bk++;
            }
    }
    return bk;
}

long mergeSort(int a[], int n) {
    long mk = 0;
    int left = 0;
    int right = n;
    int mid = (left + right) / 2;
    int it1 = 0;
    int it2 = 0;
    int result[right - left];

    while ((left + it1 < mid) && (mid + it2 < right)) {
        if (a[left + it1] < a[mid + it2]) {
            result[it1 + it2] = a[left + it1];
            it1++;
            mk++;
        } else {
            result[it1 + it2] = a[mid + it2];
            it2++;
            mk++;
        }
    }
    while (left + it1 < mid) {
        result[it1 + it2] = a[left + it1];
        it1++;
        mk++;
    }
    while (mid + it2 < right) {
        result[it1 + it2] = a[mid + it2];
        it2++;
        mk++;
    }

    for (int l = 0; l < it1 + it2; l++)
        a[left + l] = result[l];
    return mk;
}

using namespace std;

int main() {
    int kolvo = 0;
    cin >> kolvo;
    unsigned long long kolvobubble = 0;
    unsigned long long kolvomerge = 0;
    for (int i = 0; i < kolvo; i++) {
        int n = 1001;
        int a[n];
        // a[n] massive for bubbleSort
        for (int j = 0; j < n; j++) {
            a[j] = rand() % 100 - 50;
        }
        int b[n];
        // b[n] massive for mergeSort
        for (int j = 0; j < n; j++)
            b[j] = a[j];
        kolvobubble += bubbleSort(a, n);
        kolvomerge += mergeSort(b, n);
    }
    cout << "sr. number for bubbleSort  " << kolvobubble/kolvo << endl;
    cout << "sr. number for mergeSort  " << kolvomerge/kolvo << endl;
}
