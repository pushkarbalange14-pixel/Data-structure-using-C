#include <stdio.h>

int main()
{
    int a[5] = {25, 10, 45, 30, 50};
    int largest, second, i;

    largest = second = -9999;

    for(i = 0; i < 5; i++)
    {
        if(a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if(a[i] > second && a[i] != largest)
        {
            second = a[i];
        }
    }

    printf("Largest = %d\n", largest);
    printf("Second Largest = %d", second);

    return 0;
}
