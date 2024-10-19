#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int compare(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int s = 0;
    for(int i = 0;i<n;i++){
        s += arr[i];
    }
    s = s/2;
    int count = 0;
    qsort(arr, n, sizeof(int), compare);
    int ans = 0;
    for(int i = n-1;i>=0;i++){
        ans += arr[i];
        count ++;
        if(ans > s){
            break;
        }
    }
    printf("%d\n", count);

}