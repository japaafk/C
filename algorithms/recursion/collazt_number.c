/*
THE COLLAZT CONJECTURE IS APPLIES TO POSITIVE INTEGERS AND 
SPECULATES THAT IT IS ALWAYS POSSIBLE TO GET "BACK TO 1" IF YOU FOLLOW THESE STEPS:
    - IF n IS 1, STOP
    - OTHERWISE, IF n IS EVEN, REPEAT THIS PROCESS ON n/2
    - OTHERWISE, IF n IS ODD, REPEAT THIS PROCESS ON 3n+1
*/

#include <stdio.h>

int collazt(int n) {
    // BASE CASE
    if(n == 1) 
        return 0;
    // RECURSION CASE FOR EVEN NUMBERS
    else if((n % 2) == 0) 
        return 1 + collazt(n/2);
    // RECURSION CASE FOR ODD NUMBERS
    else 
        return 1 + collazt(3*n + 1);
    // return 1 + ...  IT WILL COUNT THE NUMBER OF STEPS IT TAKES TO REACH NUMBER ONE
}

int main(void) {
    int number;
    printf("Type a number: ");
    scanf("%i", &number);

    printf("%i", collazt(number));
}