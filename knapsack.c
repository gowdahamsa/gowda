#include <stdio.h>

int max(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int n, i, j, capacity;
    int weight[20], value[20], w;
    int v[50][50];

    printf("Enter the number of items: ");
    scanf("%d", &n);

    printf("Enter weights:\n");
    for (i = 1; i <= n; i++) {
        scanf("%d", &weight[i]);
    }

    printf("Enter values:\n");
    for (i = 1; i <= n; i++) {
        scanf("%d", &value[i]);
    }

    printf("Enter the capacity of knapsack: ");
    scanf("%d", &capacity);

    for (i = 0; i <= n; i++) {
        for (j = 0; j <= capacity; j++) {
            if (i == 0 || j == 0) {
                v[i][j] = 0;
            } else if (j - weight[i] >= 0) {
                v[i][j] = max(v[i-1][j], v[i-1][j-weight[i]] + value[i]);
            } else {
                v[i][j] = v[i-1][j];
            }
            printf("%4d", v[i][j]);
        }
        printf("\n");
    }

    w = capacity;
    printf("Items in the knapsack:\n");
    for (i = n; i > 0; i--) {
        if (v[i][w] != v[i-1][w]) {
            printf("%3d ", i);
            w = w - weight[i];
        }
    }
    printf("\nTotal profit = %d\n", v[n][capacity]);

    return 0;
}

