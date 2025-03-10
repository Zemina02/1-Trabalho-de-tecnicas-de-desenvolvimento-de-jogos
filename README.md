Revisão de um jogo realizado em Monogame para o 1ºo trabalho da cadeira de tecnicas de desenvolvimento de jogos (TDJ).
-----------------------------------------------------------------------------------------------------------------------

Neste README vamos observar mais a detalhe a estrutura de um jogo feito em Monogame.
O Git do jogo original é o seguinte -----> https://github.com/Mustafa1177/SimpleSnakeGame
-

Estrutura do trabalho:                                                                                                                                                                                                               
1- Apresentação do jogo;                                                                  
2 - Projeto em Monogame;                    
3 - Mecânicas e Controlos do jogo;                 
4 - Alguns Problemas;               
-----------------------------------------------------
1 - Apresentaçao do Jogo

O jogo escolhido para este trabalho é uma recriação do classico videojogo de arcade de 1976, Blockade, desenvolvido e publicado pela Gremlin Industries, onde o jogador manobra o fim de uma linha crescente, geralmente tematizada como uma cobra.
O jogador deve evitar que a cobra colida com outros obstáculos e consigo mesma, o que fica mais difícil conforme a cobra se alonga.

![main](https://github.com/user-attachments/assets/fbf2ebaf-d4c7-4f06-9113-19cc13cefe44)
(foto do jogo escolhido em funcionamento)

É uma recriação simples com apenas um ficheiro de Conteúdo. Todo o restante contido no jogo é feito através utensílios disponibilizados pela extenção do Monogame, como por exemplo a própria cobra ou a grelha de fundo a verde pela qual a cobra se movimenta e a fruta dá "spawn", o leva ao proximo ponto.

----------------------------

2- Projeto em Monogame

2.1 - organização dos ficheiros:

![estrutura do jogo](https://github.com/user-attachments/assets/59dd4a81-ad3c-4a8f-9c6d-d18617639679)

Na imagem observamos como estão separados todos os ficheiros do trabalho, alguns já do monogame mas outros criados pelo criador e separados em pastas.
Como qualquer outro jogo feito em Monogame, o existe a pasta "Content". Nesta estão guardados todos os ficheiros de 

