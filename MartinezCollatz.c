////////////////////////////////////////////////////////////////////////////////
//INCLUDES
#include <stdio.h>

int termination(int n) {
    int count = 0;
    while(n != 1) {
        if(n % 2 == 0){
            n = n / 2;
        }
        else {
            n = 3 * n + 1;
        }
        count++;
    }
    return count;
}

int main(void)
{
    int num, iterations;
    printf("Give an integer to be checked by the Collatz Conjecture: ");
    scanf("%d", &num);
    
    iterations = termination(num);
    printf("It took %d iterations", iterations);
    return 0;
}