no *inserirInicio(no *Z)
{
	
	no *Novo, *x ;
	Novo = (no*)malloc(sizeof(no));
	
		printf("Digite a conta do cliente : ");
	    scanf("%i",&Novo->conta);
	    
		printf("Digite o nome do cliente : ");
		fflush(stdin);
		scanf("%s",&Novo->nome);
		
		printf("Digite o saldo do cliente : ");
		scanf("%f",&Novo->saldo);
		
	if(Z==NULL)
	{
		Novo->prox = Z;
		system("cls");
		printf("Conta inserida !\n");
		_sleep(2000);
		return Novo;
	}	
	
	else 
	{
		for (x=Z; x!=NULL; x=x->prox)
		{
		   if(x->prox==NULL)
		   {
		   Novo->prox = x->prox;
		   x->prox = Novo;
		   Novo->ant = x;
		   system("cls");
		   printf("Conta inserida !\n");
	   	   _sleep(2000);
	       return Z;	
	       
	       }
	    }
	}
}
	
	
no *inserirMeio(no *Z)
{
	
	no *Novo, *x ;
	int pesq;
	Novo = (no*)malloc(sizeof(no));
	
    	printf("Digite a conta do cliente : ");
	    scanf("%i",&Novo->conta);
	    
		printf("Digite o nome do cliente : ");
		fflush(stdin);
		scanf("%s",&Novo->nome);
		
		printf("Digite o saldo do cliente : ");
		scanf("%f",&Novo->saldo);
		
	
	if(Z==NULL)
    {
    	Novo->prox = Z;
        system("cls");
		printf("Conta inserida !\n");
		_sleep(2000);
		return Novo;
	}
	
    else
	{
		printf("\nInserir apos qual conta ? ");
		scanf("%d",&pesq);
		
		for(x=Z;x!=NULL;x=x->prox)
		{
			
			if ( pesq==x->conta && x->prox == NULL)
			{ 
			    system("cls");
				printf("Nao e possivel inserir nessa posicao !!");
				_sleep(2000);
				return Z;
		
			}
			else if(pesq==x->conta)
			{
				x->ant = Novo;
				Novo->prox = x->prox;
				Novo->ant = x;
				x->prox = Novo;
				system("cls");
		        printf("Conta inserida !\n");
		        _sleep(2000);
				return Z;
			}
		}
	}
}



no *inserirFinal(no *Z)
{
	
	no *Novo, *x ;
	Novo = (no*)malloc(sizeof(no));

	    printf("Digite a conta do cliente : ");
	    scanf("%i",&Novo->conta);
	    
		printf("Digite o nome do cliente : ");
		fflush(stdin);
		scanf("%s",&Novo->nome);
		
		printf("Digite o saldo do cliente : ");
		scanf("%f",&Novo->saldo);
		
		
	if(Z==NULL)
    {
    	Novo->prox = Z;
    	system("cls");
		printf("Conta inserida !\n");
		_sleep(2000);
		return Novo;
	}
	
	else
	{
	      Z->ant = Novo->prox;
	      Novo->prox = Z;
	      Z->ant = Novo;
	      system("cls");
		  printf("Conta inserida !\n");
		  _sleep(2000);
	      return Novo;	
	}
}


	
no *InserirIn(no *Z)
{
	no *Lista;
	int inse;
	
	Lista = Z;
	
	system("cls");
	printf("\n1 - Inserir no inicio\n");
	printf("2 - Inserir no meio\n");
	printf("3 - Inserir no final\n\n");
	printf("Onde deseja inserir ?");
	scanf("%i",&inse);
	
		system("cls");
		
		
		if(inse==1)
		{	
	    
	      inserirInicio(Lista);
	      
	    }
	    
		else if(inse==2)
		{
		
		  inserirMeio(Lista);
		
		}
		
			else if(inse==3)
		{
			
		  inserirFinal(Lista);
		  
		}	
}

