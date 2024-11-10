#define _CRT_SECURE_NO_WARNINGS     
#include <stdio.h>     
#include <locale.h>     
#define _USE_MATH_DEFINES     
#include <math.h>

#define ROW 9
#define COL 9

//1.16
int main() {
    setlocale(LC_ALL, "RUS");

    int row, col;
    for (row = 1; row <= ROW; ++row) {
        for (col = 1; col <= row; col++) {
            printf("%5d", col * row);
        }
        printf("\n");
    }

    getchar();

    for (row = 1; row <= ROW; ++row) {
        for (col = 1; col <= COL; col++) {
            printf("%d * %d = %d\t", row, col, row * col);
        }
        printf("\n");
    }

    getchar();

    // 2
        char a;
        long long int number;
        int d = 0;
        printf("¬ведите произвольное длинное число: ");
        scanf_s("%lld", &number);
        int last = number % 10;
        long long int temp = number;
        while (temp > 0) {
            int digit = temp % 10;
            temp /= 10;
            if (digit == last) {
                d++;
            }
        }
         printf("„исло повторений последней цифры: %d\n", d);
         getchar();
   
        // 3
        int c, b;
        printf("¬ведите символ дл€ рисовани€ параллелограмма: ");
        scanf("%c", &a);
        printf("¬ведите ширину параллелограмма: ");
        scanf("%d", &c);
        printf("¬ведите высоту параллелограмма: ");
        scanf("%d", &b);

        for (int i = 0; i < b; i++) {
            for (int j = 0; j < i; j++) {
                printf(" ");
            }
            for (int j = 0; j < c; j++) {
                printf("%c", a);
            }
            printf("\n");
        }
        getchar();
    return 0;
}