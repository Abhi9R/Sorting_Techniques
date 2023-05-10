#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int merge(int* arr, int l, int mid, int r) {
    int inv = 0;
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int* a = new int[n1];
    int* b = new int[n2];

    for (int i = 0; i < n1; i++) {
        a[i] = arr[i + l];
    }

    for (int i = 0; i < n2; i++) {
        b[i] = arr[mid + i + 1];
    }

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (a[i] <=b[j]) {
            arr[k] = a[i];
            k++; i++;
        } else {
            arr[k] = b[j];
            inv += n1 - i;
            k++; j++;
        }
    }

    while (i < n1) {
        arr[k] = a[i];
        i++; k++;
    }

    while(j < n2) {
        arr[k] = b[j];
        k++; j++;
    }

    return inv;
}

int mergeSort (int* arr, int l, int r) {
    int inv = 0;

    if (l < r) {
        int mid = (l + r) / 2;
        inv += mergeSort(arr, l, mid);
        inv += mergeSort(arr, mid + 1, r);
        inv += merge(arr, l, mid, r);
    }

    return inv;
}

void printArray (int* a, int n) {
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

    cout << mergeSort(a, 0, n - 1) << endl;
    return 0;
}

/*
8
3 5 6 9 1 2 7 8
*/