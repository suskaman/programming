#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Rus");
    //задание 1
	int i = 0;  
    printf("¬ведите строку: ");
    do
        ++i;
    while (getchar() != '\n');
    printf("%d\n", i - 1);
     
    printf("-----------\n");
    //задание 5
    int summ, month;
    float now, per;
    printf("¬ведите сумму ваших средств счЄта:");
    scanf(" %d", &summ);
    printf("¬ведите процентную ставку:");
    scanf(" %f", &per);
    printf("¬ведите количество мес€цев:");
    scanf(" %d", &month);
    per = per / 100;
    now = summ;
    for (int i = 0; i < month; i++) {
        now = (now * (1 + per));
        printf("в %d мес€ц сумма средств вашего счЄта равна %f\n", i+1, now);
    }
	return 0;
}