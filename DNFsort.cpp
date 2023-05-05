// Dutch National Flag Sorting Technique   OR 0, 1, 2 sort
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

void swap(int* a, int l, int r) {
    int temp = a[l];
    a[l] = a[r];
    a[r] = temp;
}

void printArray(int* a, int n) {
    for(int i=0;i<n;i++) {
        cout << a[i] << " ";
    } cout << endl;
}

void DNFsort(int* a, int n) {
    int low = 0;
    int mid = 0;
    int high = n-1;

    while(mid <= high) {
        if(a[mid] == 0) {
            swap(a, low, mid);
            low++;
            mid++;
        } else if (a[mid] == 1) {
            mid++;
        } else {
            swap(a, mid, high);
            high--;
        }
    }
}

int32_t main() {
    int n;
    cin >> n;

    int* a = new int[n];
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }

    DNFsort(a, n);
    printArray(a, n);
    return 0;
}
/*
9
1 0 2 1 0 1 2 1 2
*/