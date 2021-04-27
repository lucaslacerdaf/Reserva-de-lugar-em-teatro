# Reserva-de-lugar-em-teatro
Projeto acadêmico do 1º semestre: Reserva de Lugar em Teatro

    Descrição do problema:
Fazer um programa que exibe o mapa de lugares de um Teatro, o cliente escolhe o lugar e gera o ingresso. O ingresso é individual e para mais ingressos repetir o processo. O processo deve ser repetido até que seja digitado algum símbolo – por exemplo ‘&’ para a fileira. Nesse caso terminar o programa. Ou perguntar se quer continuar ou não.

int Mapa_Lugares [10][20] – iniciar toda com ZERO

Zero significa lugar vazio;
Quando um lugar for escolhido, mudar a posição para 1.

    Entrada de dados:
O programa deve apresentar o mapa de lugares, como mostrado abaixo. Observe que no lugar das linhas devem aparecer LETRAS e os números das colunas começam em UM e estão na parte debaixo da matriz.
Para cada nova reserva, limpar a tela, de tal forma que em toda leitura aparece o Mapa de Lugares atualizado e o pedido para digitar as escolhas e o nome da pessoa.
Repetir até escolha válida – use do/while para validação.

    Quando a escolha for válida:
Pedir o nome da Pessoa;
Mudar, na matriz, a posição de zero por 1. Por exemplo, se a escolha for B5, na posição da matriz: Mapa_Lugares[1][4]=1

    Quando escolha for válida, imprimir:
- a mensagem: Reserva feita com sucesso!
- e, o Ingresso como descrito abaixo:

Reserva feita com sucesso!
Ingresso nominal: <colocar aqui o Nome digitado>
------------------------------------------------------
Nome da peça: O Fantasma da Opera
Horário: 6a – 19h
Lugar: B5
Novo ingresso? (S/N): _____
