#include <stdio.h>

int process_data(int start, int limit)
{
    int total = start;

    if (start < limit) {
        for (int i = 0; i < limit; i++) {
            total += 2;
        }
    }
    else {
        total -= 5;
    }

    return total;
}

int main(void)
{
    int result = process_data(5, 10);
    printf("Result: %d\n", result);
    return 0;
}
