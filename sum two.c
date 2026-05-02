#include <stdio.h>

int main() {
    int n, t;
    int arr[100];
    int i, j;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target: ");
    scanf("%d", &t);

    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == t){
                printf("The pair is: %d at index %d and %d at index %d\n", arr[i], i, arr[j], j);
            }
        }
    }

    return 0;
}