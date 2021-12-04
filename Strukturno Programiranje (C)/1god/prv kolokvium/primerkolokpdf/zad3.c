/*
Empires & Allies е стратегиска игра во повеќе нивоа со можност за играње од
страна на повеќе играчи. Секој играч има своја територија, како и одбранбени
и напаѓачки единици. Може да влезе во битка (напад на туѓа територија или
одбрана на сопствената) со други играчи што може да заврши со победа или
пораз за што се добиваат поени. Да се напише програма во која од тастарура се
внесува бројот на играчи на играта Empires & Allies. За секој играч потоа се
внесуваат податоци за ниво (цел број), број на победи и број на порази.
Резултатот на играчот се пресметува на следниот начин:
• ако се работи за прво ниво, секоја победа носи 13 поени, а секој пораз носи -1
поен
• ако се работи за второ ниво, секоја победа носи 13 поени, а секој пораз носи
-3 поени
За секој играч треба да се испечати Dobar igrac ако неговиот број на поени е
позитивен или Los igrac во сите други случаи. Потоа треба да се најде и
испечати најдобриот резултат (најголемиот вкупен број на поени), како и
редниот број на играчот со најдобар резултат (првиот играч е со реден број
еден, вториот со реден број два итн.). Ако постојат повеќе играчи со ист
најдобар резултат, да се испечати редниот број на првиот таков играч.
1 3 7
2 1 8
2 6 4
1 5 5 

*/
#include <stdio.h>

int main(){
    int n,l,W,L,maxi=1,maxpoeni=0;
    scanf("%d", n);
    for(int i=1;i<=n;i++){
        scanf("%d %d %d", &l, &W, &L);
        int poeni=0;
        if(l==1){
            poeni=13*W - L;
            if(poeni>maxpoeni){
                maxpoeni=poeni;
                maxi=i;
            }
            if(poeni>0){
                printf("Dobar igrac\n");
            }else{
                printf("Los igrac\n");
            }
        }else if (l==2){
            poeni=13*W - 3*L;
            if(poeni>maxpoeni){
                maxpoeni=poeni;
                maxi=i;
            }
            if(poeni>0){
                printf("Dobar igrac\n");
            }else{
                printf("Los igrac\n");
            }
        }
    }
    printf("Najdobar Igrac: br. %d, %d poeni", maxi, maxpoeni);
    return 0;
}