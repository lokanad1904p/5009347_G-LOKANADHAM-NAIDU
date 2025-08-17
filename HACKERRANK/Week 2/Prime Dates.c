#include <stdio.h>

int isleapyear(int year) {
    if (year % 400 == 0) return 1;
    if (year % 100 == 0) return 0;
    if (year % 4 == 0) return 1;
    return 0;
}

int lucky(int day, int mon, int year) {
    int num = day * 100 + mon;
    num = num * 10000 + year;
    return (num % 4 == 0 || num % 7 == 0);
}

int main() {
    int d1, m1, y1, d2, m2, y2;
    scanf("%d-%d-%d", &d1, &m1, &y1);
    scanf("%d-%d-%d", &d2, &m2, &y2);

    int daysinmon[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int count = 0;

    while (1) {
        if (lucky(d1, m1, y1))
            count++;

        if (d1 == d2 && m1 == m2 && y1 == y2)
            break;

        int dim = daysinmon[m1];
        if (m1 == 2 && isleapyear(y1))
            dim = 29;

        d1++;
        if (d1 > dim) {
            d1 = 1;
            m1++;
            if (m1 > 12) {
                m1 = 1;
                y1++;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}