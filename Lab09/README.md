# Laboratório 9 - Funções

**ENTREGA QUARTA 06/07**

1. Faça uma função que receba a data atual (dia, mês s e ano em inteiro) e exiba-a na tela no formato textual por extenso. Exemplo: Data: 01/01/2000, Imprimir: 1 de janeiro de 2000.  *feito*

2. Faça uma função que receba 3 números inteiros como parâmetro, representando horas, minutos e segundos, e os converta em segundos.  *feito*

3. Elabore uma função que receba três notas de um aluno como parâmetros e uma letra. Se a letra for A, a função deverá calcular a média aritmética das notas do aluno; se for P, deverá calcular a média ponderada, com pesos 5, 3 e 2.  *feito*

4. Crie um programa que receba três valores (obrigatoriamente maiores que zero), representando as medidas dos três lados de um triângulo. Elabore funções para: *feito*

   (a) Determinar se eles lados formam um triangulo, sabendo que:   
      • O comprimento de cada lado de um triangulo é menor do que a soma dos outros dois lados. 
   
   (b) Determinar e mostrar o tipo de triângulo, caso as medidas formem um triângulo. Sendo que:  
      • Chama-se equilátero o triângulo que tem três lados iguais.  
      • Denomina-se isósceles o triângulo que tem o comprimento de dois lados iguais.  
      • Recebe o nome de escaleno o triangulo que tem os três lados diferentes.  

5. Faça uma função chamada ‘simplifica’ que recebe como parâmetro o numerador e o denominador de uma fração. Esta função deve simplificar a fração recebida dividindo o numerador e o denominador pelo maior fator possível. Por exemplo, a fração 36/60 simplifica para 3/5 dividindo o numerador e o denominador por 12. A função deve modificar as variáveis passadas como parâmetro.  

6. Faça uma função que receba como parâmetro um vetor X de 30 elementos inteiros e retorne, também por parâmetro, dois vetores A e B. O vetor A deve conter os elementos pares de X e o vetor B, os elementos ímpares.  

7. Considerando a estrutura: struct Ponto{    int x; 
   int y;  }; para representar um ponto em uma grade 2D, implemente uma função que indique se um ponto p está localizado dentro ou fora de um retângulo. O retângulo é definido por seus vértices inferior esquerdo v1 e superior direito v2. A função deve retornar 1 caso o ponto esteja localizado dentro do retângulo e 0 caso contrário. Essa função deve obedecer ao protótipo: int dentroRet (struct Ponto v1, struct Ponto v2, struct Ponto p); 
