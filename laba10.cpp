#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>
#include<string.h>

int NOD(int num1, int num2) {
    while (num1 != num2){
        if (num1 > num2){
            num1 -= num2;
        } else {
            num2 -= num1;
        }
    }
    return num2;
}

int NOK(int num1, int num2){
    return (num1 * num2)/NOD(num1, num2);
}

void delete_space(char* str, int j)
{
    int i;
    if ((str[j] == ' ') and (str[j + 1]) == ' ')
        delete_space(str, j + 1);
    for (i = j; i < strlen(str) - 1; i++)
    {
        str[i] = str[i + 1];
    }
    str[i] = 0;

}

int main() {
    setlocale(LC_ALL, "Rus");
    //задание 1
    int num1, num2;
    printf("Введите первое число: ");
    scanf(" %d", &num1);
    printf("Введите второе число: ");
    scanf(" %d", &num2);

    int m = NOD(num1, num2);
    printf("НОД: %d\n", m);

    int n = NOK(num1, num2);
    printf("НОК: %d\n", n);
    printf("-----------\n");

    //задание 5
    char str[100];
    scanf(" %[^\n]s", &str);

    for (int i = 0; i < strlen(str); i++)
    {
        if ((str[i] == ' ') and (str[i + 1] == ' '))
            delete_space(str, i + 1);
    }
    printf("%s\n", str);
    return 0;
}
