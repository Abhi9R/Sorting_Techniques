#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

void bubbleSort(int* a, int n) {
    int counter = 1;
    while(counter < n) {
        for(int i=0;i<n-counter;i++) {
            if(a[i] > a[i+1]) {
                int temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
        counter++;
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

    bubbleSort(a, n);
    print(a, n);

    return 0;
}