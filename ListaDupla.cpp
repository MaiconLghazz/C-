#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Estrutura.h"
#include "Menu.h"
#include "InserirIn.h"
#include "Imprimir.h"
#include "Retirar.h"
#include "Esvaziar.h"


main()
{
	
	int opcao;
	no *ListaD = NULL;
	
	do
	{
		
		system("cls");
		opcao=Menu();
		
		if(opcao==1)
		{	
	      
		  ListaD = InserirIn(ListaD);
	    }
	    
		else if(opcao==2)
		{
			if(ListaD==NULL)
			{
			    system("cls");
				printf("Lista vazia  !\n");
				_sleep(1000);
			}
				
			else
			
			Imprimir(ListaD);
		}
		
			else if(opcao==3)
		{
			
			if(ListaD==NULL)
			{
			    system("cls");
				printf("Lista vazia !\n");
				_sleep(1000);
			}
				
			else
			
			ListaD = Retirar(ListaD);
		}
		
			else if(opcao==4)
		{
			
			if(ListaD==NULL)
			{
			    system("cls");
				printf("Lista vazia !\n");
				_sleep(1000);
			}
				
			else
			
			ListaD = Esvaziar(ListaD);
		}
	
	
	}while(opcao!=0);
}
