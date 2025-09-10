Simulação de Movimentação de Peças de Xadrez em C
📌 Descrição

Este projeto simula a movimentação de três peças de xadrez (Torre, Bispo e Rainha) utilizando as estruturas de repetição for, while e do-while em C.
O programa imprime no console as direções percorridas pelas peças, de acordo com suas regras de movimento simplificadas.

🎯 Regras implementadas

Torre → movimenta-se em linha reta horizontal ou vertical.

Simulação: 5 casas para a direita (usando for).

Bispo → movimenta-se nas diagonais.

Simulação: 5 casas na diagonal para cima e à direita (usando while).

Rainha → movimenta-se em todas as direções.

Simulação: 8 casas para a esquerda (usando do-while).

🖥️ Exemplo de saída no console
Movimento da Torre:
Direita
Direita
Direita
Direita
Direita

Movimento do Bispo:
Cima, Direita
Cima, Direita
Cima, Direita
Cima, Direita
Cima, Direita

Movimento da Rainha:
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda

🚀 Como compilar e executar
Pré-requisitos

Ter instalado um compilador C, como o GCC (disponível no Linux, macOS e Windows via MinGW ou WSL).

Ter instalado o Git para clonar o repositório (opcional).

Passos

Clone este repositório ou baixe o arquivo xadrez.c:

git clone https://github.com/SEU-USUARIO/xadrez-movimento.git
cd xadrez-movimento


Compile o programa:

gcc xadrez.c -o xadrez


Execute o programa:

./xadrez


No Windows, basta rodar:

xadrez.exe

📂 Estrutura do Projeto
xadrez-movimento/
│-- xadrez.c        # Código-fonte em C
│-- README.md       # Documentação do projeto

📝 Observações

O programa não implementa o jogo completo de xadrez, apenas uma simulação simples dos movimentos das peças especificadas.

O código está comentado para facilitar o entendimento.
