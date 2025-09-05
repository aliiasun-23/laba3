#include <stdio.h>
int main() {
    int hp;
    int lection;
    char knowledge;
    printf("--Проверка HP --\n");
  
    hp = 85;
    printf("HP = %d: ", hp);
    if (hp > 70) {
        printf("Студент в отличной форме\n");
    } else if (hp > 30) {
        printf("Студент устал\n");
    } else {
        printf("Студент в опасности\n");
    }
  
    hp = 45;
    printf("HP = %d: ", hp);
    if (hp > 70) {
        printf("Студент в отличной форме\n");
    } else if (hp > 30) {
        printf("Студент устал\n");
    } else {
        printf("Студент в опасности\n");
    }
  
    hp = 20;
    printf("HP = %d: ", hp);
    if (hp > 70) {
        printf("Студент в отличной форме\n");
    } else if (hp > 30) {
        printf("Студент устал\n");
    } else {
        printf("Студент в опасности\n");
    }
    
    printf("\n \n --Проверка лекций и знаний -- \n");
  
    lection = 60;
    knowledge = 'H';
    printf("Лекции = %d, Знания = %c: ", lection, knowledge);
    if (lection >= 50 && knowledge == 'H') {
        printf("Можно купить знания\n");
    } else {
        printf("Недостаточно ресурсов\n");
    }
    
    lection = 40;
    knowledge = 'H';
    printf("Лекции = %d, Знания = %c: ", lection, knowledge);
    if (lection >= 50 && knowledge == 'H') {
        printf("Можно купить знания\n");
    } else {
        printf("Недостаточно ресурсов\n");
    }
    
    lection = 60;
    knowledge = 'L';
    printf("Лекции = %d, Знания = %c: ", lection, knowledge);
    if (lection >= 50 && knowledge == 'H') {
        printf("Можно купить знания\n");
    } else {
        printf("Недостаточно ресурсов\n");
    }
    
    printf("--Проверка с !(отсутствие знаний): ");
    if (lection >= 50 && !(knowledge == 'H')) {
        printf("Есть лекции, но нет знаний\n");
    } else {
        printf("Условие не выполняется\n");
    }
    
    printf("\n \n --Циклы --\n");
   
    printf("Числа от 1 до 20, пропуская кратные 3:\n");
    for (int i = 1; i <= 20; i++) {
        if (i % 3 == 0) {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");
    
    printf("Вычисление факториала числа 7:\n");
    int factorial = 1;
    for (int i = 1; i <= 7; i++) {
        factorial *= i;
        printf("%d! = %d\n", i, factorial);
    }
    
    return 0;
}
