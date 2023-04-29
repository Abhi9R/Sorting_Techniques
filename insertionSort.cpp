#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

void insertionSort(int* a, int n) {
    for(int i=0;i<n;i++) {
        int curr = a[i];
        int j = i-1;
        while(a[j] > curr && j >= 0) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = curr;
    }
}

void print(int* a, int n) {
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

    insertionSort(a, n);
    print(a, n);

    return 0;
}