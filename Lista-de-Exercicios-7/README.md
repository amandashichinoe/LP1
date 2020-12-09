# Lista de Exercícios Alocação Dinâmica

1. Faça um programa que leia um valor n e crie dinamicamente um vetor de n elementos
e passe esse vetor para uma função que vai ler os elementos desse vetor. Depois, no
programa principal, o vetor preenchido deve ser impresso. Além disso, antes de
finalizar o programa, deve-se liberar a área de memória alocada.


2. Faça uma função que receba um valor n e crie dinamicamente um vetor de n
elementos e retorne um ponteiro. Crie uma função que receba um ponteiro para um
vetor e um valor n e imprima os n elementos desse vetor. Construa também uma
função que receba um ponteiro para um vetor e libere esta área de memória. Ao final,
crie uma função principal que leia um valor n e chame a função criada acima. Depois,
a função principal deve ler os n elementos desse vetor. Então, a função principal deve
chamar a função de impressão dos n elementos do vetor criado e, finalmente, liberar a
memória alocada através da função criada para liberação.


3. Crie uma função que receba como parâmetros dois vetores de inteiros (já ordenados): x1 e x2 e as suas respectivas quantidades de elementos: n1 e n2. A função deverá retornar um ponteiro para um terceiro vetor, x3, alocado dinamicamente, contendo a união de 
x1 e x2 e usar o ponteiro qtd para retornar o tamanho de x3.

Sendo x1 = {1, 3, 5, 6, 7} e x2 = {1, 3, 4, 6, 8},  x3 irá conter {1, 3, 4, 5, 6, 7, 8}.

Assinatura da função:

int* uniao(int *x1, int *x2, int n1, int n2, int* qtd);


4.  Crie uma função que receba como parâmetros dois vetores de inteiros: x1 e x2 e as suas respectivas quantidades de elementos: n1 e n2. A função deverá retornar um ponteiro para um terceiro vetor, x3, alocado dinamicamente, contendo a intersecção de x1 e x2 e usar o ponteiro qtd para retornar o tamanho de x3.

Sendo:
x1 = {1, 3, 5, 6, 7}
x2 = {1, 3, 4, 6, 8}
x3 irá conter {1, 3, 6}.

Assinatura da função:
int* interseccao(int *x1, int *x2, int n1, int n2, int *qtd);


5.  Crie um programa para manipular vetores. Implemente uma função que receba um vetor de inteiros V e retorne um outro vetor de inteiros alocado dinamicamente com todos os valores de V que estejam entre o valor mínimo e máximo (que também são passados como parâmetro para a função.

A função deve obedecer ao seguinte protótipo:

int* valores_entre(int *v, int n, int min, int max, int *qtd);

A função recebe:
- v: vetor de números inteiros;
- n: a quantidade de elementos do vetor v;
- min: valor mínimo a ser buscado;
- max: valor máximo a ser buscado;

A função deve:
- Verificar a quantidade de elementos do vetor que sejam maiores do que min e menores que max;
- Caso a quantidade seja maior do que 0 (zero), alocar dinamicamente uma área do exato tamanho necessário para armazenar os valores;
- Copia os elementos do vetor que sejam maiores do que min e menores que max para a área alocada dinamicamente.

A função retorna:
- O endereço da área alocada dinamicamente, preenchida com os números maiores do que min e menores que max, ou NULL, caso essa relação de números não tenha sido criada;
- A quantidade de números carregados na área alocada dinamicamente, através do parâmetro qtd.

 Em seguida, crie a função principal do programa para inicializar um vetor de inteiros, exibir
esses valores na tela e pedir para o usuário digitar o valor mínimo e máximo a ser buscado.
Em seguida o programa deverá chamar a função valores_entre e exibir na tela os valores resultantes. Lembre-se de exibir uma mensagem de erro caso nenhum valor seja  encontrado. Não se esqueça de liberar a memória alocada dinamicamente.
