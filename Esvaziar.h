no *Esvaziar(no *Z)
{
	no *x;
	
	system("cls");
	printf("Lista esvaziada !!");
	_sleep(2000);
	
	for(x=Z;x!=NULL;x=x->prox)
	{
		free(x);
		return NULL;
	}
		
}
