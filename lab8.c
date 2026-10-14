#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>


int main()
{
    task4();
}

int task1()
{
    setlocale(LC_ALL, "RUS");
    int n = 10;
    char a = '*', b = '!';
    putchar('!');
    for (int start = 1; start <= 10; start++) putchar('*');
    putchar('!');
    putchar('\n');
    for (int start = 1; start <= 2*(n-(n/2)); start++) putchar(a);
    for (int start = 1; start <= 2*(n / 2); start++) putchar(b);
    putchar('\n');
    for (int start = 1; start <= 5; start++)
    {
        putchar('*');
        putchar('!');
    }
}

int task2()
{
    setlocale(LC_ALL, "RUS");
    int n, m, s = 0, k = 0, last5 = 0, other = 0;
    printf("Введите m:");
    scanf("%d", &m);
    printf("Введите n:");
    scanf("%d", &n);
    for (int i = m;i >= n;i--) {
        printf("%d ", i);
        s += i;
        k++;
        if (i % 10 == 5 || i % 10 == -5)
            last5++;
        else
            other++;
    }
    printf("\nКоличество чисел: %d\n", k);
    printf("Сумма: %d\n", s);
    printf("Количество чисел с последней цифрой 5: %d\n", last5);
    printf("Количество остальных чисел: %d\n", other);
}

double f(double x)
{
    return x * x + 3 * x - 1;
}

int task4()
{
    setlocale(LC_ALL, "RUS");
    double h, x, y;
    double a = 0, b = 2;
    double min_y = 99999, max_y = -99999, min_x, max_x;
    printf("Введите h: ");
    scanf("%lf", &h);
    printf("\n  x          y\n");
    printf("-------------------\n");
    min_x = a;
    max_x = a;
    for (x = a; x <= b+h;x += h) {
        y = f(x);
        printf("%6.2f   %8.2f\n",x,y);
        if (y < min_y) {
            min_y = y;
            min_x = x;
        }
        if (y > max_y) {
            max_y = y;
            max_x = x;
        }
    }
    printf("\nМинимум: y=%.4f при x=%.2f\n", min_y,min_x);
    printf("\nМаксимум: y=%.4f при x=%.2f\n", max_y, max_x);
}

