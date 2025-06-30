#include <stdio.h> 

void biggest3() {
    int n1, n2, n3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 >= n2 && n1 >= n3)
        printf("Biggest number: %d\n", n1);
    else if (n2 >= n1 && n2 >= n3)
        printf("Biggest number: %d\n", n2);
    else
        printf("Biggest number: %d\n", n3);
}




