#include <stdio.h>
int main()
{
    int i_hour, i_minute, f_hour, f_minute, i_time, f_time, duration, d_hour, d_minute;
    scanf("%d %d %d %d", &i_hour, &i_minute, &f_hour, &f_minute);
    // Calculate the duration in minutes.
    i_time = i_hour * 60 + i_minute;
    f_time = f_hour * 60 + f_minute;
    if (f_time > i_time)
        duration = f_time - i_time;
    else {
        duration = (24 * 60) - i_time + f_time;
    }
    // Check for maximum and minimum game time
    if (duration >= 1 && duration <= 24 * 60) {
        // Convert the duration to hours and minutes.
        d_hour = duration / 60;
        d_minute = duration % 60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", d_hour, d_minute);
    }
    return 0;
}