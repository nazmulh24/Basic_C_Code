#include <stdio.h>

int main()
{
    float I, J;
    for (I = 0; I <= 2.2; I += 0.2)
    {
        for (J = 1; J <= 3; J++)
        {
            if (I == 0.0 || I == 1.0 || I >= 2.0)
            {
                printf("I=%.0f J=%.0f\n", I, I + J);
            }
            else
            {
                printf("I=%.1f J=%.1f\n", I, I + J);
            }
        }
    }
    return 0;
}