#include <stdio.h>
#include <stdlib.h>

int main (void){
    int n,*ponteiro;
    ponteiro=NULL;
    n=3;

    ponteiro=malloc(n*sizeof(int));
    if(ponteiro==NULL){
    fprintf(stderr,"Erro de alocação");
    exit(1);
    }

    printf("Digite O primeiro numero:\n");
        scanf("%i",&ponteiro[0]);
        printf("Digite O segundo numero:\n");
        scanf("%i",&ponteiro[1]);
ponteiro[2]=ponteiro[0]+ponteiro[1];
printf("Resultado:%i",ponteiro[2]);
free(ponteiro);
return 0;
}
