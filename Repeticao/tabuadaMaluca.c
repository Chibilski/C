#include <stdio.h>


int main (void) {

    int n = 0, m = 0;

    scanf("%d", &n);

    if (n >= 0 || n <= 250){

        for( int i = 1; i <= 10; i++){
            m = n * i;
            if( i == 1 || i == 3 || i == 5 || i == 7 || i == 9){
                printf("%d X %d = %d \n", n, i, m);
            }
        }
         for( int i = 1; i <= 10; i++){
            m = n * i;
            if( i == 2 || i == 4 || i == 6 || i == 8 || i == 10){
                printf("%d X %d = %d \n", n, i, m);
            }
        }

    }

    return 0;
}
