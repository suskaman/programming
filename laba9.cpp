#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Rus");
    //задание 1
	int i = 0;  
    printf("Введите строку: ");
    do
        ++i;
    while (getchar() != '\n');
    printf("%d\n", i - 1);
     
    printf("-----------\n");
	
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
