#include <stdio.h>
#include <string.h>

int main(){

    char seq1[80];
    int seq2, seq3;

    printf("Insira até 80 números:\n");
    scanf("%[^\n]s",seq1);

    seq2=strlen(seq1);

    for(seq3=seq2;seq3>-1;seq3--){
        printf("%c\n", seq1[seq3]);
    }

    return 0;
}
