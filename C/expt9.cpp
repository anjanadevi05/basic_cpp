#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    int n,m,result;

    puts("enter 1 for addition,2 for multilication,3 for finding square root,4 for modulus");
    printf("Enter your choice:");
    scanf("%d", &choice);

    switch (choice)
	 {
        case 1:
            printf("Enter two numbers: ");
            scanf("%d %d", &n, &m);
            result = n+m;
            printf("Result:%d\n", result);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%d%d", &n, &m);
            result = n*m;
            printf("Result: %d\n", result);
            break;

        case 3:
            printf("Enter a number: ");
            scanf("%d", &n);
            result = sqrt(n);
            printf("Square Root: %d\n", result);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%d%d", &n, &m);
            result = n%m;
            printf("Modulus: %d\n", result);
            break;

        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}






