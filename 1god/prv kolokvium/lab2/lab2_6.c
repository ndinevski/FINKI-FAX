/*
Да се напише програма каде од тастатура ќе се внесе еден број кој 
има пет цифри, но не мора да е петцифрен, како на пример 04569 или 
00256. Програмата ги печати сумите на паровите цифри од надвор кон 
внатре, за на крај да ја испечати средишната цифра. Така, ако внесениот 
број е 12596, програмата враќа 7 11 5.
*/
#include <stdio.h>

int main(){
    int a,prva,vtora,treta,cetvrta,petta;
    scanf("%d", &a);
    prva=a%10;
    vtora=(a/10)%10;
    treta=(a/100)%10;
    cetvrta=(a/1000)%10;
    petta=(a/10000)%10;
    printf("%d %d %d", prva+petta, vtora+cetvrta, treta);
    return 0;
}
