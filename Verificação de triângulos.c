// Aluno: Andr� Junges Baratto
// N� USP: 13731107

//obs: como as acentua��es n�o funcionam, troquei o "�" por "eh" para evitar poss�veis ambiguidades.

#include <stdio.h>

int main()
{
    int A, B, C;
     printf("Informe as medidas dos tres lados do triangulo: \n");
      scanf("%d, %d, %d", &A, &B, &C);
        if(A+B<=C||B+C<=A||A+C<=B)  //teste da desigualdade triangular (caso seja falsa, o tri�ngulo n�o existe)
        {
            printf("Isso nao eh um triangulo \n");
        }
        else{
          if(A==B&&B==C)
             printf("O triangulo em questao eh equilatero\n");

           if(A!=B&&A==C||A!=C&&A==B||A!=B&&B==C)
               printf("O triangulo em questao eh isoceles\n");

            if(A!=B&&B!=C&&A!=C)
                printf("O triangulo em questao eh escaleno\n");
        }
    return 0;
}
