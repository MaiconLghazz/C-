no *Retirar(no *Z)
{
	 
	no *x, *aux;
	int conta1;
	system("cls");
	
	printf("Qual conta deseja retirar ?");
	scanf("%d",&conta1);
	
	for(x=Z;x!=NULL;x=x->prox)
	{
		
		if(x->conta==conta1 && x==Z)
		{
			aux=x->prox;
			free(x);
			system("cls");
			printf("Conta retirada !\n");
			_sleep(2000);
			return aux;
			
		}
		else if(x->conta==conta1)
		{
			aux->prox=x->prox;
			free(x);
			system("cls");
			printf("Conta retirada !\n");
			_sleep(2000);
			return Z;
		}
		aux=x;
	}
	
	if(x==NULL)
	    system("cls");
		printf("Conta nao encontrada !\n");
		_sleep(2000);
		return Z;
}
