#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

void swap(int* a, int i, int j) {
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void waveSort(int* a, int n) {
    for (int i = 1; i < n; i += 2) {
        if(a[i] > a[i - 1]) {
            swap(a, i, i - 1);
        }

        if(a[i] > a[i + 1] && i <= n-2) {
            swap(a, i, i + 1);
        }
    }
}

void printArray(int* a, int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    } cout << endl;
}

int32_t main() {
    int n;
    cin >> n;

    int* a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    waveSort(a, n);
    printArray(a, n);
    return 0;
}

/*
7
1 3 4 7 5 6 2
*/