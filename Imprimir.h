void Imprimir (no *z)
{
	
	no *x;
	system("cls");
	
	for(x=z;x!=NULL;x=x->prox)
	
	{
		
		printf("Conta do cliente : %i \nNome do cliente : %s \nSaldo do cliente : %.2f\n\n ------------ \n",x->conta,x->nome,x->saldo);
		
    }
    
    system("pause");
    
}
