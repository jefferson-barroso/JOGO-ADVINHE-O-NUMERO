
# Jogo "Adivinha o Número" em C

Este é um jogo simples desenvolvido em C que permite ao usuário pensar em um número entre 0 e 63, e o programa adivinha qual é o número com base em algumas perguntas de sim/não. O jogo utiliza uma série de telas com opções numéricas para encontrar o número que o usuário pensou.

## Funcionamento

O jogo faz perguntas ao usuário e com base nas respostas (SIM ou NÃO), ele calcula o número em que o usuário estava pensando. Cada tela apresentada contém uma série de números e o usuário deve responder se o número que ele pensou está presente nessa tela. Com as respostas, o programa consegue descobrir o número exato.

## Como Jogar

1. O jogo pede para o usuário pensar em um número entre 0 e 63.
2. O programa mostra uma série de números e o usuário deve responder se o número que ele pensou está presente na tela.
3. Com as respostas fornecidas, o programa vai acumulando o resultado até adivinhar o número exato.
4. No final, o programa revela o número que o usuário pensou.

## Requisitos

- Compilador de C (como o GCC).
- Ambiente para rodar programas em C.

## Como Compilar e Rodar o Jogo

### Compilar

1. Abra o terminal ou prompt de comando.
2. Navegue até o diretório onde o arquivo do jogo (ex: `adivinhe_numero.c`) está localizado.
3. Compile o código usando o GCC:
   gcc -o adivinhe_numero adivinhe_numero.c


### Executar

4. Após a compilação, execute o jogo:
   ./adivinhe_numero

### Exemplo de Saída
 ___________  
|           | 
| B I D U   | 
|___________| 
(\__/)||      
(O^O)_||      
/   /         
=================================================================== 

PENSE EM UM NUMERO ENTRE 0 E 63...

O NUMERO QUE VOCE PENSOU ESTA NESSA TELA? 
 1-SIM 2-NAO 

  1  3  5  7
	 9 11 13 15
	17 19 21 23
	25 27 29 31
	33 35 37 39
	41 43 45 47
	49 51 53 55
	57 59 61 63

...

O NUMERO QUE VOCE PENSOU FOI: 42
=================================================================== 

|----------------------------------|
|                                  |       __
| F I M                            |-------|  \       ______
|                                  |       --- \_____/**|_|_\\____  |
|----------------------------------|         \_______ --------- __>-}
                                              /  \_____|_____/   |
                                             *         |
                                                      {O}
