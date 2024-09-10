#include <stdio.h>

int main() {
    // Declare variables to store marks in each subject
    float M, P, C, E, CM;

    // Input marks in Mathematics, Physics, Chemistry, and English
    printf("Enter marks in Mathematics (out of 200): ");
    scanf("%f", &M);

    printf("Enter marks in Physics (out of 200): ");
    scanf("%f", &P);

    printf("Enter marks in Chemistry (out of 200): ");
    scanf("%f", &C);

    printf("Enter marks in English (out of 100): ");
    scanf("%f", &E);

    // Calculate the cut-off mark using the formula
    CM = (M / 2) + (P / 2) + (C / 2) + E;

    // Display the result
    printf("The cut-off mark is: %.2f\n", CM);

    return 0;
}
