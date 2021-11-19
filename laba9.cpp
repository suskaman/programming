#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Rus");
    //задание 1

    char str[100] ;
    int Number = 0, High = 0, Under = 0;

    printf("Введите строку:");
    scanf("%[^\n]s",&str);

    for (int i = 0; i < sizeof(str) ; i++){
        if (str[i] >= '0' and str[i] <= '9') { Number++; }
        else if (str[i] >= 'A' and str[i] <= 'Z') { High++; }
        else if (str[i] >= 'a' and str[i] <= 'z') { Under++; }

    }

    printf("кол-во цифр = %d\n", Number);
    printf("кол-во прописные = %d\n", High);
    printf("кол-во строчные = %d\n", Under);
    printf("---------------\n");

    //задание 5
    int summ, month;
    float now, per;
    printf("Введите сумму ваших средств счёта:");
    scanf(" %d", &summ);
    printf("Введите процентную ставку:");
    scanf(" %f", &per);
    printf("Введите количество месяцев:");
    scanf(" %d", &month);
    per = per / 100;
    now = summ;
    for (int i = 0; i < month; i++) {
        now = (now * (1 + per));
        printf("в %d месяц сумма средств вашего счёта равна %f\n", i+1, now);
    }
	return 0;
}
