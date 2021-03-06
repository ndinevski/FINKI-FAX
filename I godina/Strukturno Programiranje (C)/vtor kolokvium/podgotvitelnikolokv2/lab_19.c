/*
Од стаднарден влез се читаат N низи од знаци (стрингови) не подолги од 80 знаци. На почетокот на програмата се читаат два цели броеви:
N - бројот на низи од знаци кои ќе се читаат и
X - поместување.
Секоја од вчитаните низи од знаци треба да се трансформира на тој начин што секоја од малите и големите букви (a-z, A-Z) се заменува со истата 
буква поместена X места понапред во азбуката (a-z). Ако се надмине опсегот на буквите во азбуката, се продолжува циклично од почетокот на азбуката. 
Трансформираната низа да се отпечати на СИ.                                                        влегува во двете суми!). Да се испечати на екран променетата матрица.
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n,x,i,j;
    char niza[100];
    scanf("%d %d", &n, &x);
    getchar();
    for(j=0;j<n;j++){
        fgets(niza, 100, stdin);
        for(i=0;i<strlen(niza);i++){
            if(isalpha(niza[i])){
                    if((isupper(niza[i]))&&(x>'Z'-(niza[i]))){
                        niza[i]='A'+(x%26 - ('Z'-niza[i]))-1;
                    }else if(x>122-(niza[i])){
                        niza[i]='a'+(x%26 - ('z'-niza[i]))-1;
                    }else{
                        niza[i]+=x;
                    }
            }
        }
        printf("%s", niza);
    }

    return 0;
}
