#include <stdio.h>
#include <stdlib.h>



typedef struct no {

struct no* back;
struct no* next;
int codigo;

}no;

struct no *auxiliar, *corrente, *topo;


void enterdata()
{
    printf("digite o codigo");
    scanf("%i", &topo->codigo);
}

int pop(no**lista)
{

    if(topo==NULL)
    {
        printf("nao existe nenhuma pilha");
        printf("\n");
        system("pause");
    }

    else if(topo->back == NULL)
    {
        topo = NULL;
        free(auxiliar);
        printf("unico codigo foi removido");
        system("pause");
    }
    else
    {
        topo = topo->back;
        topo->next=NULL;
        free(auxiliar);
        printf("foi removido");
        system("pause");
    }
}

int push(no**lista)
{
    if(topo==NULL)
    {
        topo = malloc((no*) sizeof(no));
        topo->back = NULL;
        topo->next =NULL;
        auxiliar = topo;
        enterdata();
        system("pause");
    }
    else
    {
        topo = malloc((no*) sizeof(no));
        auxiliar->next = topo;
        topo->back = auxiliar;
        auxiliar = topo;
        enterdata();
        system("pause");

    }


}


int top(no**lista)
{
    if(topo==NULL)
    {
        printf("não foi encontrado");
    }
    else
    {
           printf("\nEsse e o topo: %i", topo->codigo);

    }
    system("pause");
}

int main()
{
    int op;
   topo=NULL;
   corrente=NULL;
   auxiliar=NULL;


 do{
        system("cls");
        printf("\n[1] - push");
        printf("\n[2] - pop");
        printf("\n[3] - top");


        printf("\n\nDigite a opcao: ");
        scanf("%d",&op);
        switch(op){

            case 1:
                push(topo);
                break;
            case 2:
                pop(topo);
                break;
            case 3:
                top(topo);
                break;

            case 4:
                system("pause");

        }
    }while(op != 4);




}

