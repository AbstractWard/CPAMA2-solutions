#include <stdio.h>

int main(void)
{
    int num1, num2, num3, num4,
        num5, num6, num7, num8,
        num9, num10, num11, num12,
        num13, num14, num15, num16,
        row1, row2, row3, row4,
        col1, col2, col3, col4,
        diag1, diag2;
    
    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    scanf("%d %d %d %d", &num5, &num6, &num7, &num8);
    scanf("%d %d %d %d", &num9, &num10, &num11, &num12);
    scanf("%d %d %d %d", &num13, &num14, &num15, &num16);

    row1 = num1 + num2 + num3 + num4;
    row2 = num5 + num6 + num7 + num8;
    row3 = num9 + num10 + num11 + num12;
    row4 = num13 + num14 + num15 + num16;

    col1 = num1 + num5 + num9 + num13;
    col2 = num2 + num6 + num10 + num14;
    col3 = num3 + num7 + num11 + num15;
    col4 = num4 + num8 + num12 + num16;

    diag1 = num1 + num6 + num11 + num16;
    diag2 = num13 + num10 + num7 + num4;

    printf("\n%2d %2d %2d %2d\n", num1, num2, num3, num4);
    printf("%2d %2d %2d %2d\n", num5, num6, num7, num8);
    printf("%2d %2d %2d %2d\n", num9, num10, num11, num12);
    printf("%2d %2d %2d %2d\n", num13, num14, num15, num16);

    printf("\nRow sums: %d %d %d %d\n", row1, row2, row3, row4);
    printf("Column sums: %d %d %d %d\n", col1, col2, col3, col4);
    printf("Diagonal sums: %d %d\n", diag1, diag2);

    return 0;
}