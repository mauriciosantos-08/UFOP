/*Implemente seis fun¸c˜oes em C para, dados dois n´umeros reais, calcular:
a) A soma dos n´umeros;
b) O produto do primeiro n´umero pelo quadrado do segundo;
c) O quadrado do primeiro n´umero;
d) A raiz quadrada da soma dos quadrados;
e) O seno da diferen¸ca do primeiro n´umero pelo segundo;
f) O m´odulo do primeiro n´umero.*/

#include <stdio.h>
#include <math.h>

//prototipo das funções
float soma(float n1, float n2);
float multiplica(float n1, float n2);
float quadradoDoPrimeiro(float n1);
float raizDaSomaDosQuadrados(float n1, float n2) ;
float senoDaDiferenca(float n1, float n2);
float moduloDoPrimeiro(float n1);

//main
int main() {
  float n1, n2, res;
  char op;

  //recebendo valores
  printf("Digite o primeiro valor: ");
  scanf("%f", &n1);
  
  printf("Digite o segundo valor: ");
  scanf("%f", &n2);

  //selecionando operação a ser realizada
  printf("\n1- soma dos valores\n2- produto do primeiro pelo quadrado do segundo\n3- quadrado do primeiro valor\n4- raiz quadrada da soma dos quadrados\n5- seno da diferença do primeiro pelo segundo\n6- módulo do primeiro valor\n");
  printf("\nSelecione a operação a ser realizada: ");
  scanf(" %c", &op);

  switch (op) {
    case '1':
    res = soma(n1, n2);
    break;   
    
    case '2':
    res = multiplica(n1, n2);
    break;   
    
    case '3':
    res = quadradoDoPrimeiro(n1);
    break;   
    
    case '4':
    res = raizDaSomaDosQuadrados(n1, n2);
    break;   
    
    case '5':
    res = senoDaDiferenca(n1, n2);
    break;
        
    case '6':
    res = moduloDoPrimeiro(n1);
    break;
    
    default:
    printf("Código inválido.\n");
    return 0;
  }

  //imprimindo resultado
  printf("Resultado = %.2f\n", res);

  return 0;
}

//função a
float soma(float n1, float n2) {
  float r = n1+n2;
  return r;
}

//função b
float multiplica(float n1, float n2) {
  float r = n1 * pow(n2, 2);
  return r;
}

//função c
float quadradoDoPrimeiro(float n1) {
  float r = pow(n1, 2);
  return r;
}

//função d
float raizDaSomaDosQuadrados(float n1, float n2) {
  float r = sqrt( (pow(n1,2) + pow(n1,2)) );
  return r;
}

//função e
float senoDaDiferenca(float n1, float n2) {
  float r = sin( (n1-n2) );
  return r;
}

//função f
float moduloDoPrimeiro(float n1) {
  float r;
  if (n1<0) {
    r = n1*(-1);
  } else {r = n1;}

  return r;
}