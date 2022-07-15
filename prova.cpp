#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

typedef struct Registro
{
    char descricao[30];
	float preco;
	int codigo;
} Registro;


void Cadastrar()
{
    Registro infos;
    FILE *ptr;
    int choice;
    
    if((ptr = fopen("data.bin","rb+")) == NULL)
    {
        printf("Codigo ja foi cadastrado!.\n");
    }
    else
    {
        while (1)
        {
            printf("codigo: ");
            scanf("%d",&infos.codigo);
            if(infos.codigo == 0)
                {break;}
            printf("Descricao: ");
            scanf("%s",infos.descricao);
            printf("Preco: ");
            scanf("%f",&infos.preco);
            fseek(ptr,(infos.codigo-1) * sizeof(Registro), SEEK_SET);
            fwrite(&infos,sizeof(Registro), 1, ptr);
        }
        fclose(ptr);
    } 
	printf("Informe o modulo desejado:\n") ;  
	scanf("%d",&choice);
}

int Visualizar()
{
    Registro infos;
    FILE *ptr;

    if((ptr = fopen("data.bin","rb")) == NULL)
    {
        printf("Nao foi possivel acessar o arquivo.\n");
    }
    else
    {
        printf("%-6s%-16s%-11s\n","Codigo","Nome","Valor");
        while (!feof(ptr))
        {
            fread(&infos, sizeof(Registro), 1, ptr);
            if(infos.codigo != 0)
            {
                printf("%-6d%-16sR$ %-12.2f\n",
                infos.codigo,
                infos.descricao,
                infos.preco
                );
            }
            
        }
        fclose(ptr);
    }
}

int main()
{
    int choice,cancel;
    while (1)
    {   
        cancel = 0;
        printf("Informe o modulo desejado:\n");
        printf("1-Cadastrar\n");
        printf("2-Visualizar\n");
        printf("3-Visualizar um Registro\n");
        printf("4-Ordenar por preco\n");
        printf("5-Finalizar\n");
        

        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            Cadastrar();
            break;
        case 2:
        	Visualizar();
            break;
        
            
        default:
            if(choice == 5)
            {cancel = 1;}
            else{printf("Valor invalido\n");}
            break;
        }
        if(cancel == 1){break;}
    }
}
 




