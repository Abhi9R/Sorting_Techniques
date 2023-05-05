#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

void printArray(int* arr, int n) {
    for ( int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}

void countSort(int* a, int n) {
    int k = a[0];
    for (int i = 0; i < n; i++) {
        k = max(k, a[i]);
    }

    int* count = new int[k+1];
    for(int i=0;i<k;i++) {
        count[i] = 0;
    }
    for(int i=0;i<n;i++) {
        count[a[i]]++;
    }

    for(int i=1;i<=k;i++) {
        count[i] += count[i-1];
    }

    int* arr = new int[n];
    for(int i=n-1;i>=0;i--) {
        arr[--count[a[i]]] = a[i];
    }

    for(int i=0;i<n;i++) {
        a[i] = arr[i];
    }
}

int32_t main() {
    int n;
    cin >> n;

    int* a = new int[n];
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }

    countSort(a, n);
    printArray(a, n);
    return 0;
}

/*
9
1 3 2 3 4 1 6 4 3
*/