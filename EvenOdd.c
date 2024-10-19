#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    long long int n,k;
    scanf("%lld %lld", &n, &k); // 10 
    if(k<=(n+1)/2){
        printf("%lld\n", 2*k - 1);
    }else{
        printf("%lld\n", (k - (n+1)/2)*2);
    }
}
