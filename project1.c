#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, random, nguesses = 0;
    srand(time(0));
    random = rand() % 100 + 1;
    printf("The random number is %d\n", random);
    do
    {
        printf("Guess a number\n");
        scanf("%d", &number);
        if (number < random)
        {
            printf("Higher number please\n");
        }
        else if (number > random)
        {
            printf("lower number please\n");
        }
        else
        {
            printf("You guessed in %d attempts\n",nguesses);
        }
        nguesses++;
    } while (number!=random);

        return 0;
}