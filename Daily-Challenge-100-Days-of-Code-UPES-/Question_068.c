// Q68: Delete an element from an array.
#include <stdio.h>

int main() {
    int a[10],i,n,pos;

    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Original array: ");
    for (int i = 0;i<n; i++) {
        scanf("%d",&a[i]);
    }

    printf("Enter the index of the element ");
    scanf("%d", &pos);

    if (pos < 0 || pos >= n) {
        printf("Invalid index!\n");
        return 1;
    }
    for (i = pos; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n--;  
    printf("Array after deletion: ");
    for (int i = 0; i < n; i++) {
        printf("%d\t",a[i]);
    }
    return 0;
}

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/