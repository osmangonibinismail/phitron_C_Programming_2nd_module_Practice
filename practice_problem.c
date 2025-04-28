// #include <stdio.h>

// int main() {
//     int number;
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     if (number % 2 == 0) {
//         printf("The number is even.\n");
//     } else {
//         printf("The number is odd.\n");
//     }

//     return 0;
// }
#include <stdio.h>

int main() {
    float number;
    printf("Enter a number: ");
    scanf("%f", &number);

    if (number > 0) {
        printf("The number is positive.\n");
    } else if (number < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
