#include <stdio.h>

int countPairs(int size, int items[]) {
    int count[105] = {0}; // store occurrences
    int totalPairs = 0;

    for (int i = 0; i < size; i++) {
        count[items[i]]++;
        if (count[items[i]] % 2 == 0) {
            totalPairs++;
        }
    }
    return totalPairs;
}

int main() {
    int num;
    scanf("%d", &num);

    int socks[num];
    for (int i = 0; i < num; i++) {
        scanf("%d", &socks[i]);
    }

    int result = countPairs(num, socks);
    printf("%d\n", result);

    return 0;
}
