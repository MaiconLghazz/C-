#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
main()
{
	char velha[9],jogar;
	int fim=0,posicao,jogador=1;
	
	
	
	printf("\n\n                                    ------------JOGO DA VELHA---------------\n\n");
	printf("\n--Jogador 1 = X -- \n--Jogador 2 = O --\n");
	printf("\nDeseja jogar ? ");
	scanf("%s",&jogar);
	
    if (jogar=='s' || jogar=='S') //aqui acontece a escolha do jogador, se quer ou nao jogar
	{
	
	
	for(int x=0;x<9;x++)
	{
		velha[x]=' '; //limpa a velha
	}
	
	
	do
	{
		system("cls");
		if ((velha[0]=='X' && velha[1]=='X' && velha[2]=='X') || (velha[3]=='X' && velha[4]=='X' && velha[5]=='X') || (velha[6]=='X' && velha[7]=='X' && velha[8]=='X') 
		||  (velha[0]=='X' && velha[3]=='X' && velha[6]=='X') || (velha[1]=='X' && velha[4]=='X' && velha[7]=='X') || (velha[2]=='X' && velha[5]=='X' && velha[8]=='X')
		||  (velha[0]=='X' && velha[4]=='X' && velha[8]=='X') || (velha[2]=='X' && velha[4]=='X' && velha[6]=='X'))
		    {
		    	printf("\nO JOGADOR NUMERO 1 VENCEU !!\n\n");
		    	fim=1;
			}
			else if ((velha[0]=='O' && velha[1]=='O' && velha[2]=='O') || (velha[3]=='O' && velha[4]=='O' && velha[5]=='O') || (velha[6]=='O' && velha[7]=='O' && velha[8]=='O')
		        ||   (velha[0]=='O' && velha[3]=='O' && velha[6]=='O') || (velha[1]=='O' && velha[4]=='O' && velha[7]=='O') || (velha[2]=='O' && velha[5]=='O' && velha[8]=='O')
		        ||   (velha[0]=='O' && velha[4]=='O' && velha[8]=='O') || (velha[2]=='O' && velha[4]=='O' && velha[6]=='O'))
		    {
		    	printf("\nO JOGADOR NUMERO 2 VENCEU !!\n\n"); //verifica se tem ganhador
		    	fim=1;
			}
		
				if  (velha[0]!=' ' && velha[1]!=' ' && velha[2]!=' ' && velha[3]!=' ' && velha[4]!=' ' && velha[5]!=' ' && velha[6]!=' ' && velha[7]!=' ' && velha[8]!=' ')
		        {
		        printf("\nO JOGO DEU VELHA !!\n\n"); //verifica se deu empate
		    	fim=1;
				}
				
			
	if(fim==0) //para o programa se tiver um ganhador ou empate
	{
						
		for(int x=0;x<9;x++)
		{
			printf("[%c]",velha[x]); //vetor que cria a velha
			if(x==2 || x==5)
				printf("\n");
		}
		
		
		
		
		printf("\n\nDigite a posicao da jogada : \n");
		scanf("%d",&posicao); //pede a posiçao da jogada

	if(posicao>=0 && posicao<=8) //verifica se a jogada esta em um valor valido
	{
			
		    if(velha[posicao]==' ') //verifica se o local da jogada esta vazio
		    {
		     	if(jogador==1)
			    {
				velha[posicao]='X'; //faz a jogada 1
				jogador=2;	
	         	}
	         	
	    	    else if(jogador==2)
	    	    {
	    		velha[posicao]='O'; //faz a jogada 2
				jogador=1;
			    }	
		    }
	     	else if(velha[posicao]!=' ')
	    	{
			printf("\nPosicao ja ocupada !!"); //da mensagem se o local da jogada ja estiver oculpado
			Sleep(400);
	    	}
	
	}
	else if (posicao<0 || posicao>8)
	{
	printf("\nJogar uma posicao entre 0 a 8 "); //da mensagem se o valor da jogada for invalido
	Sleep(400);
	}
}else 
{
	
}
	}while(fim!=1); //termina o jogo
}
}
	

