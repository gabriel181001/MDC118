#include <stdio.h>

int main(){
    int pn;
    int sn;

    scanf("%d",&pn);
    scanf("%d",&sn);

    if(pn<sn){
        printf("O primeiro número é menor\n");    
    }else{
        printf("O segundo número é menor\n");
    }

    return 0;
}
