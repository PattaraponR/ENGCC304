#include <stdio.h>
int main(){
    int N,i;
    printf("Enter Num : ");
    if (scanf("%d", &N ) !=1 || N<=0 ){
        printf("Error\n");
        return 1;
    }
    for( i=0; i<N ;i++){
    printf("[%d]Hello World \n",i+1);
    }
    return 0;
}
