/*
Од тастатура се внесува број на студенти кои ќе полагаат колоквиум, а потоа и индексите (цели броеви) на сите студенти кои ќе полагаат колоквиум. Програмата треба да ги подели студентите 
во три групи: студенти со индекси кои завршуваат на цифрата 0, 1 и 2, студенти со индекси кои завршуваат на цифрата 3, 4, 5 и студенти со индекси кои завршуваат на цифрата 6, 7, 8, 9. Програмата 
треба да ги испечати индексите за секоја група, во истиот редослед како што биле внесени. Максималниот број на студенти што може да се внесат е 1000.
Влез
10 //Kolku studenti?
20010 20145 20147 20139 20581 19452 19873 19825 19458 20653 //Koi studenti?
Излез
Grupa 1
20010 20581 19452 
Grupa 2
20145 19873 19825 20653
Grupa 3
20147 20139 19458
*/
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=1;i<=3;i++){
        printf("Grupa %d\n", i);
        for(int j=0;j<n;j++){
            if(i==1){
                switch(arr[j]%10){
                    case 0:
                    case 1:
                    case 2:
                        printf("%d ", arr[j]);
                        break;
                }
            }
            if(i==2){
                switch(arr[j]%10){
                    case 3:
                    case 4:
                    case 5:
                        printf("%d ", arr[j]);
                        break;
                    }
            }
            if(i==3){
                switch(arr[j]%10){
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                        printf("%d ", arr[j]);
                        break;
                }
            }   
        }
        printf("\n");
    }
    return 0;
}
