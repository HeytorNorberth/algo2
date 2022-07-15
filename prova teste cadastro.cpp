#include <stdio.h>
3.
4. struct dadosCliente {
5. int numConta;
6. char sobrenome[15];
7. char primNome[10];
8. float saldo;
9. };
10.
11. main(){
12.
13. FILE *cfPtr;
14. struct dadosCliente cliente;
15.
16. if ((cfPtr = fopen( *credito.dat", "r")) == NULL)
17. printf("Arquivo nao pode ser aberto.\n");
18. else {
19. printf("%-6s%-16s%-lls%10s\n","Conta", "Sobrenome","Nome","Saldo");
20. while(!feof(cfPtr)){
21. fread(&cliente,sizeof(struct dadosCliente),1,cfPtr);
22. if (cliente.numConta != 0)
23. printf("%-6d%-16s%-lls%10.2f\n",cliente.numConta,
24. cliente.sobrenome,cliente.primNome,cliente.saldo);
25. }
26. }
27. fclose(cfPtr);
28. return 0;
29. }

int Cadastrar(){
 	fwrite()
 }
if(registro=NULL){
	scanf("%d",&codigo);
	scanf("%c",&nome);
	scanf("%d",&preco);
	Cadastrar(){
		else{
			
			do{
				cadastrar=True;
				while()
			}
		}
	}
}


