//muhindo simon
#include <stdio.h>

int main()
{
    printf("MUHINDO SIMON\n");
    //program to calculate the toatal amount of items bought.
    //initialising items
    int apple = 2500;
    int mango = 1000;
    int sweet = 5000;
    //for number of items bought
    int a, m, s;

    printf("SHOPPING:\n");
    printf("1. apple = 2500\n");
    printf("2. mango = 1000\n");
    printf("3. sweet = 5000\n");

    printf("enter number of apples: ");
    scanf("%d", &a);
    printf("\nenter number of mangoes: ");
    scanf("%d", &m);
    printf("\nenter number of sweets: ");
    scanf("%d", &s);
    //totaling of each item
    float total_A = apple * a; //for apples
    float total_M = mango * m; //for mangoes
    float total_S = sweet * s; //for sweets

    //printing totals
    printf("\ntotal for apples = %.3f", total_A);
    printf("\ntotal for mangoes = %.3f", total_M);
    printf("\ntotal for sweets = %.3f", total_S);

    //for total amount of all items
    float total_sum = total_A + total_M + total_S;
    printf("total amount = %.3f\n\n", total_sum);
return 0;
}