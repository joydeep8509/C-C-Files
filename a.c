#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    int arr[100], max, min;
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("\nThe elements of the array are:");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    max = arr[0];
    min = arr[0];

    for(int i=1; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("\nThe maximum and minimum element is %d and %d", max, min);
    return 0;
}
