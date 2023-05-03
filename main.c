#include <stdio.h>
#include <stdlib.h>
#define maxN 30

void rotate(int v[maxN], int n, int p, int dir);

int main() {
    int v[maxN],n=0,p=0,dir=0;
    rotate( v, n, p, dir);
    return 0;
}

void rotate(int v[maxN], int n, int p, int dir) {
    printf("Enter the values of number of elements, how many square they will move and the direction of the movement (1 for right, -1 for left) in order:\n");
    scanf("%d %d %d", &n, &p, &dir);
    printf("%d %d %d %d", n, p, dir, maxN);
    if (n > maxN) {
        printf("n must be smaller equal to capacity of array, please enter the value again.\n");
        scanf("%d", &n);
    }
    if (n > maxN || p == 0 || p > n) {
        exit(0);
    }
    for (int i = 0; i < n; i++) {
        printf("Enter the value of index %d:\n", i);
        if (dir == 1) {
            if ((i + p) > n - 1) {
                p = -i;
            }
            scanf("%d", &v[i + p]);
        } else if (dir == -1) {
            if ((n - p + i) > n - 1) {
                p = n + i;
            }
            scanf("%d", &v[n - p + i]);
        }
    }
    for (int x = 0; x < n; x++) {
        printf("%d", v[x]);
    }
}
