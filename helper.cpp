#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>

int NOD(int num1, int num2, int ans) {
    int num;
    if (num1 > num2) { num = num1; }
    else { num = num2; }
    for (int i = 1; i < num / 2 + 1; i++) {
        if ((num1 % i == 0) and (num2 % i == 0)) {
            ans = i;
        }
    }
    return ans;
}
int NOK(int num1, int num2, int ans) {
    bool Flag = true;
    int num;
    if (num1 > num2) { num = num1; }
    else { num = num2; }
    while (num > 0) {
        num++;
        if ((num % num1 == 0) and (num % num2 == 0)) {
            Flag = false;
            ans = num;
            break;
        }
    }
    return ans;
}

void f(char* str) {
    int i, k;
    i = 0;
    k = 1;
    while (str[i]) {
        if (str[i] == ' ') {
            if ((str[i - 1] == '(') or (str[i - 1] == '"') or (str[i - 1] == ':')) {
                k = 0;
            }
            else {
                k = 1;
            }
        }
        else {
            if (k && i) {
                printf(" ");
            }
            printf("%c", str[i]);
            k = 0;
        }
        i++;
    }
}

int main() {
    setlocale(LC_ALL, "Rus");
    //задание 1
    int ans = 0, num1, num2;
    printf("Введите первое число: ");
    scanf(" %d", &num1);
    printf("Введите второе число: ");
    scanf(" %d", &num2);

    int m = NOD(num1, num2, ans);
    printf("НОД: %d\n", m);

    int n = NOK(num1, num2, ans);
    printf("НОК: %d\n", n);
    printf("-----------\n");

    //задание 5
    char str[100];
    scanf(" %[^\n]s", &str);
    f(str);
	return 0;
}