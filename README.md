# Revisão de um jogo realizado em Monogame para o 1ºo trabalho da cadeira de tecnicas de desenvolvimento de jogos (TDJ).
-----------------------------------------------------------------------------------------------------------------------

Neste README vamos observar mais a detalhe a estrutura de um jogo feito em Monogame.
### O Git do jogo original é o seguinte ----->https://github.com/Mustafa1177/SimpleSnakeGame
---------------------------------------------------------------
## Estrutura do trabalho:
### 1- Apresentação do jogo;                                                                  
### 2 - Projeto em Monogame;                    
### 3 - Mecânicas e Controlos do jogo;                 
### 4 - Alguns Problemas;               
-----------------------------------------------------
## 1 - Apresentaçao do Jogo

O jogo escolhido para este trabalho é uma recriação do classico videojogo de arcade de 1976, Blockade, desenvolvido e publicado pela Gremlin Industries, onde o jogador manobra o fim de uma linha crescente, geralmente tematizada como uma cobra.
O jogador deve evitar que a cobra colida com outros obstáculos e consigo mesma, o que fica mais difícil conforme a cobra se alonga.

<img src = "https://github.com/user-attachments/assets/fbf2ebaf-d4c7-4f06-9113-19cc13cefe44" width="500" />

(foto do jogo escolhido em funcionamento)

É uma recriação simples com apenas um ficheiro de Conteúdo. Todo o restante contido no jogo é feito através utensílios disponibilizados pela extenção do Monogame, como por exemplo a própria cobra ou a grelha de fundo a verde pela qual a cobra se movimenta e a fruta dá "spawn", o leva ao proximo ponto.

----------------------------

## 2- Projeto em Monogame

### 2.1 - organização dos ficheiros:

<img src = "https://github.com/user-attachments/assets/59dd4a81-ad3c-4a8f-9c6d-d18617639679" width="300">


Na imagem observamos como estão separados todos os ficheiros do trabalho.
Como qualquer outro jogo feito em Monogame, o existe a pasta "Content" onde estão guardados todos os ficheiros relacionados com imagens, videos, entre outros tipos de media, e
também temos a pasta "Snake" que é onde iremos encontrar o codigo do projeto.
Separado destes ficheiros existe o "Program.cs" que irá rodar o programa e o "GameSnake.cs" onde se encontra as principais funções do monogame como: o **"Inicialize"**; 
o **"Update"**; o **"LoadContent"**; o **"UnloadContent"** e o **"Draw"**.


Dentro do ficheiro "Content.mgcb":

<img src = "https://github.com/user-attachments/assets/eb8b7fa8-7820-49a2-9505-1df8e1518a03" width="500">

------------------------
### 2.2 - "Initialize":

<img src = "https://github.com/user-attachments/assets/5a3d4adb-13eb-44ae-945a-c4d7c25c92e9" width="500">

Nesta função do monogame vai decorrer todas as operações que, tal como diz o nome da função, inicializam o jogo.
Define aqui quantos frames por segundo o jogo irá decorrer, a resoluçao da janela do jogo e ainda uma outra função
chamada "Init".

Esta função está escrita noutra pagina **("SnakeLogic.cs")**.

<img src = "https://github.com/user-attachments/assets/38aaa199-7ae4-4ec5-ab1f-f584993b215e" width="500">

A função recebe como parametros a largura do nivel, a altura do nivel e o número de jogadores.

<img src = "https://github.com/user-attachments/assets/ba33156f-0b77-404c-a840-b532477e8771" width="150">

-------------------------
### 2.3 - "LoadContent"

<img src = "https://github.com/user-attachments/assets/938d889c-7ec7-4e9d-92fb-8915cd018aad" width="500">

Nesta função é carregado todo o conteudo da pasta "Content", que é apenas as sprites das frutas (2) e também
uma variavel chamada de "whiteRectangle".





