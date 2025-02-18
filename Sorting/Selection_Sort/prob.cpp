#include <iostream>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int a[n], min;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < x; i++) {
        min = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min])
                min = j;
        }
        int temp = a[min];
        a[min] = a[i];
        a[i] = temp;
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
