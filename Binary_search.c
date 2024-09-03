#include <stdio.h>

int main() {
    int n, i, k;
    int found = 0;
    printf("Array size: ");
    scanf("%d", &n);
    int a[n];
    printf("Array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Key element to find: ");
    scanf("%d", &k);
    int l = 0, m = n - 1;
    while (l <= m) {
        int mid = l + (m - l) / 2;
        if (a[mid] == k) {
            printf("Element found at index %d\n", mid);
            return 0;
        }
        else if (a[mid] > k) {
            m = mid - 1; 
        }
        else {
            l = mid + 1; 
        }
    }
    printf("Element not found in the array\n");
    return -1; 
}
