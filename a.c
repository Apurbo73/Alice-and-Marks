
#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);

    if (X >= 2 * Y) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}