#include <stdio.h>

void reverse() {
    int num, rev = 0;

    printf("Enter number to reverse: ");
    scanf("%d", &num);

    while (num != 0) {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }

    printf("Reversed number: %d\n", rev);
}


