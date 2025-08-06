#include <stdio.h>

void main()
{
    int unit = 0;

    printf("Enter the number of units: ");
    scanf("%d", &unit);

    if (unit >= 1 && unit < 50)
    {
        printf("The bill is 30 rs per unit");
    }
    else if (unit >= 50 && unit < 150)
    {
        printf("The bill is 40 rs per unit");
    }
    else if (unit >= 151)
    {
        printf("The bill is 50 rs per unit");
    }
    else
    {
        printf("Invalid input. Units must be at least 1.");
    }
}