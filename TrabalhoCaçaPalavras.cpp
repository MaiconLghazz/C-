#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
char words1[15][15]={'Y', 'C', 'Y', 'G', 'W', 'R', 'P', 'K', 'H', 'O', 'A', 'B', 'U', 'V', 'H', 'S', 'C', 'I', 'R', 'F', 'Z', 'B', 'M', 'C', 'P', 'M', 'Y', 'C', 'F', 'P', 'U', 'A', 'F', 'R', 'X', 'T', 'W', 'L', 'O', 'T', 'A', 'S', 'M', 'X', 'C', 'E', 'J', 'R', 'A', 'G', 'S', 'A', 'V', 'H', 'G', 'L', 'R', 'X', 'G', 'F', 'K', 'X', 'Z', 'T', 'A', 'P', 'C', 'V', 'J', 'Q', 'M', 'J', 'Y', 'M', 'G', 'G', 'C', 'X', 'Q', 'E', 'W', 'S', 'I', 'A', 'L', 'A', 'E', 'O', 'I', 'V', 'I', 'F', 'Y', 'F', 'X', 'V', 'A', 'L', 'P', 'A', 'L', 'H', 'E', 'T', 'A', 'L', 'E', 'K', 'O', 'U', 'U', 'T', 'I', 'G', 'U', 'A', 'N', 'C', 'O', 'I', 'V', 'H', 'I', 'H', 'Z', 'U', 'A', 'I', 'F', 'R', 'D', 'B', 'A', 'L', 'U', 'A', 'R', 'Z', 'H', 'X', 'C', 'L', 'C', 'O', 'G', 'E', 'E', 'X', 'V', 'R', 'U', 'N', 'B', 'S', 'T', 'M', 'U', 'S', 'I', 'C', 'A', 'T', 'L', 'A', 'A', 'W', 'R', 'A', 'U', 'J', 'A', 'B', 'I', 'S', 'S', 'N', 'O', 'R', 'I', 'S', 'C', 'M', 'P', 'L', 'E', 'N', 'P', 'A', 'L', 'C', 'O', 'A', 'H', 'B', 'E', 'T', 'M', 'F', 'O', 'T', 'Z', 'M', 'P', 'T', 'R', 'E', 'S', 'J', 'R', 'L', 'F', 'S', 'I', 'K', 'U', 'F', 'P', 'E', 'Q', 'T', 'A', 'M', 'L', 'O', 'J'};
char words2[15][15];

mat2(char words2[15][15])
{
	for(int l=0;l<15;l++)
		{
			for(int c=0;c<15;c++)
			{
				words2[l][c]='*';
			}
		}
}

main()
{
	
	char procura[15];
	int op,tam,let=0;
	int linha=0,coluna=0,tot=0;
	
	
	
	do{
		
		system("cls");
		
		for(int l=0;l<15;l++)
		{
			
			for(int c=0;c<15;c++)
			{
				printf("%c ",words1[l][c]);
				words2[l][c]='*';
			}
			
			printf("\n");
		}
		
		printf("Entre com a palavra a ser procurada: ");
		gets(procura);
		tam=strlen(procura);
	
		
		for(int l=0; l<15; l++)
		{
			
			for(int c=0; c<15; c++)
			{
					
				if(procura[let]==words1[l][c])
				{
					words2[l][c]=procura[let];
					let++;
					
					if(let==tam)
					{
						printf("\nlinha: %i\n\n",l);
						l=15;
						c=15;
					}
				}	
				
				else
				{
					let=0;
					mat2(words2);
		
				}		
			}
		}
		
			if(let==tam)
		{
		 printf("Palavra encontada: %s\n\n",procura);
		
			for(int l=0;l<15;l++)
			{
				for(int c=0;c<15;c++)
				{
					printf("%c ",words2[l][c]);
				}
				printf("\n");
			}
		}
		
		
		for(int l=0; l<15; l++)
		{
			
			for(int c=0; c<15; c++)
			{
					
				if(procura[let]==words1[c][l])
				{
					words2[c][l]=procura[let];
					let++;
					
					if(let==tam)
					{
						printf("\nColuna: %i\n\n",c);
						l=15;
						c=15;
					}
				}	
				
				else
				{
					let=0;
					mat2(words2);
					
				}		
			}
		}
				
			if(let==tam)
		{
		 printf("Palavra encontada: %s\n\n",procura);
		
			for(int l=0;l<15;l++)
			{
				for(int c=0;c<15;c++)
				{
					printf("%c ",words2[l][c]);
				}
				printf("\n");
			}
		}
		
		
		system("pause");
	}while(op!=0);
}
