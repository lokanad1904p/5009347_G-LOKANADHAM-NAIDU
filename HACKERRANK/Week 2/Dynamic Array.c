#include <stdio.h>
#include <stdlib.h>

int* dynamicArray(int n, int queries[][3], int q, int* returnSize) {
    int** arr = (int**)malloc(n * sizeof(int*));
    int* sizes = (int*)calloc(n, sizeof(int)); 

    for (int i = 0; i < n; i++) {
        arr[i] = NULL;
    }

    int lastAnswer = 0;
    int* answers = (int*)malloc(q * sizeof(int)); 
    int ansCount = 0;

    for (int i = 0; i < q; i++) {
        int type = queries[i][0];
        int x = queries[i][1];
        int y = queries[i][2];

        int idx = (x ^ lastAnswer) % n;

        if (type == 1) {
           
            sizes[idx]++;
            arr[idx] = (int*)realloc(arr[idx], sizes[idx] * sizeof(int));
            arr[idx][sizes[idx] - 1] = y;
        }
        else if (type == 2) {
           
            int element = arr[idx][y % sizes[idx]];
            lastAnswer = element;
            answers[ansCount++] = lastAnswer;
        }
    }

    *returnSize = ansCount;
    return answers;
}

int main() {
    int n, q;
    scanf("%d %d", &n, &q);

    int queries[q][3];
    for (int i = 0; i < q; i++) {
        scanf("%d %d %d", &queries[i][0], &queries[i][1], &queries[i][2]);
    }

    int returnSize;
    int* result = dynamicArray(n, queries, q, &returnSize);

    for (int i = 0; i < returnSize; i++) {
        printf("%d\n", result[i]);
    }

    free(result);
    return 0;
}