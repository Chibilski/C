#include <stdio.h>
long long int fatorial (long long int n){

    if(n == 0 || n == 1){
        return 1;
    }
    else{

        return n * fatorial(n-1);
    }
}
int main (void){

    int n = 0;
    long long int result = 0;

    scanf("%d", &n);

    result = fatorial(n);

    printf("%lld", result);

    return 0;
}

