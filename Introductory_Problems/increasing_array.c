#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long arr[200000];
    long long moves = 0;

    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }

    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            moves += (arr[i - 1] - arr[i]);
            arr[i] = arr[i - 1];
        }
    }

    printf("%lld\n", moves);

    return 0;
}