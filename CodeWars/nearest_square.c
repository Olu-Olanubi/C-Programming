#include <stdio.h>
#include <math.h>
/**
 * Finds the nearest perfect quare for a given number n.
 * If n is a perfect square, print n.
 * @n: given number
 * Return:- void
*/

void nearest_square(int n);

int main()
{
    //printf("Hello World");
    nearest_square(150);
    printf("%d\n",  round(5.7));

    return 0;
}

void nearest_square(int n)
{
     float  n_sqrt = sqrt(n);
    printf("The square root of %d is: %.2f\n", n, n_sqrt);
    int int_part = (int)n_sqrt;
    printf("The integer value of the square root is: %d\n", int_part);
    if(n_sqrt - int_part == 0)
        printf("%d is a perfect square on its own", n);
    else if ((n_sqrt - int_part) > ((int_part+1) - n_sqrt))
        {
            printf("the nearest square is: %d\n",((int_part+1) * (int_part+1)));
        }
    else{
        printf("the nearest square is: %d\n",(int_part * int_part));
    }
}