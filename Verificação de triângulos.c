// Aluno: André Junges Baratto
// Nº USP: 13731107

//obs: como as acentuações não funcionam, troquei o "é" por "eh" para evitar possíveis ambiguidades.

#include <stdio.h>

int main()
{
    int A, B, C;
     printf("Informe as medidas dos tres lados do triangulo: \n");
      scanf("%d, %d, %d", &A, &B, &C);
        if(A+B<=C||B+C<=A||A+C<=B)  //teste da desigualdade triangular (caso seja falsa, o triângulo não existe)
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
