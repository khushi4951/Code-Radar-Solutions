// Your code here...
#include <stdio.h>
void bubbleSort(arr, n);
void printArray(arr, n);
int main({
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr, n);
    printArray(arr, n);
    return 0;
})