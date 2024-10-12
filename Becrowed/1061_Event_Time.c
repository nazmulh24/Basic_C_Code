#include<stdio.h>
int main()
{
    char dia[4];
    int s_day, i_h, i_m, i_s, e_day, f_h, f_m, f_s;
    long long s_t, e_t, d;
    scanf("%s %d", dia, &s_day);
    scanf("%d : %d : %d", &i_h, &i_m, &i_s);
    scanf("%s %d", dia, &e_day);
    scanf("%d : %d : %d", &f_h, &f_m, &f_s);
    // convert times to seconds.
    s_t = s_day * 86400LL + i_h * 3600LL + i_m * 60LL + i_s;
    e_t = e_day * 86400LL + f_h * 3600LL + f_m * 60LL + f_s;
    // compute duration in seconds.
    d = e_t - s_t;
    // print output.
    printf("%lld dia(s)\n", d / 86400LL);
    d %= 86400LL;
    printf("%lld hora(s)\n", d / 3600LL);
    d %= 3600LL;
    printf("%lld minuto(s)\n", d / 60LL);
    d %= 60LL;
    printf("%lld segundo(s)\n", d);
    return 0;
}