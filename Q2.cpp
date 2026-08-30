#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];
    int second = 0;
    bool found = false;

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
            found = true;
        }
        else if (arr[i] < largest) {
            if (!found || arr[i] > second) {
                second = arr[i];
                found = true;
            }
        }
    }

    if (found)
        cout << second;
    else
        cout << -1;

    return 0;
}