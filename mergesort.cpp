#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long

void merge(int* arr, int l, int mid, int r) {
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int* a = new int[n1];
    int* b = new int[n2];

    for(int i=0;i<n1;i++) {
        a[i] = arr[l+i];
    }

    for(int i=0;i<n2;i++) {
        b[i] = arr[mid+i+1];
    }

    int i = 0, j = 0, k = l;
    while(i < n1 && j < n2) {
        if(a[i] < b[j]) {
            arr[k] = a[i];
            k++; i++; 
        } else {
            arr[k] = b[j];
            k++; j++;
        }

    }

    while(i < n1) {
        arr[k] = a[i];
        k++;
        i++;
    }

    while(j < n2) {
        arr[k] = b[j];
        k++;
        j++;
    }

}

void mergeSort(int* a, int l, int r) {
    if(l < r) {
        int mid = (l+r)/2;
        mergeSort(a, l, mid);
        mergeSort(a, mid+1, r);

        merge(a, l, mid, r);
    }
}

void printArray(int* a, int n) {
    for(int i=0;i<n;i++) {
        cout << a[i] << " ";
    } cout << endl;
}

int32_t main() {
    int n;
    cin >> n;

    int* a = new int[n];
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }

    mergeSort(a, 0, n-1);
    printArray(a, n);
    return 0;
}