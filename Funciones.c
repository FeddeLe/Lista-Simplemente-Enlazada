#include "header.h"

void Add_Person (_pNodo Lista_Inicial)
{
	_pNodo new,aux;

	aux = Lista_Inicial;

	new = (_pNodo) malloc (sizeof(Node));

	if (new == NULL)
	{
		printf("No space available\n");
	}

	printf("Enter name\n");
	scanf("%s",(new -> Nombre));

	printf("Enter surname\n");
	scanf("%s",(new -> Apellido));

	printf("Enter address\n");
	scanf("%s",(new -> Direccion));

	printf("Enter profesion\n");
	scanf("%s",(new -> Profesion));

	new -> next = NULL;

	if (Lista_Inicial -> next == NULL)
	{
		Lista_Inicial -> next = new;
	}

	else
	{
		while (aux -> next != NULL)
		{
			aux = aux -> next;
		}

		aux -> next = new;
	}
}



void Display_List (_pNodo Lista_Inicial)
{
    _pNodo aux = Lista_Inicial;

	while (aux -> next != NULL)
	{
		printf("%s\n%s\n%s\n%s\n\n",aux -> Nombre, aux -> Apellido, aux -> Direccion, aux -> Profesion);
		aux = aux -> next;
	}
	printf("%s\n%s\n%s\n%s\n",aux -> Nombre, aux -> Apellido, aux -> Direccion, aux -> Profesion);
}



void Surname_Search (_pNodo Lista_Inicial,char *surname)
{
	_pNodo aux = Lista_Inicial;
	char *Aux_surname;

	while (aux -> next != NULL)
	{
        Aux_surname = aux -> next -> Apellido;

		if (String_Compare(Aux_surname,surname) == 0)
		{
			printf("%s\n%s\n%s\n%s\n\n",aux -> next -> Apellido, aux -> next -> Nombre, aux -> next -> Direccion, aux -> next -> Profesion);
		}
		
		aux = aux -> next;
	}
}



int String_Compare (char *surname,char *aux_surname)
{
	int i = 0;

	while (surname[i] != '\0'  &&  aux_surname[i] != '\0')
	{
		if (surname[i] == aux_surname[i])
		{
			i++;
		}

		else
		{
			return ERROR;
		}
	}   
    return OK;
}



void Delete_Person (_pNodo Lista_Inicial,char *surname)
{
	_pNodo aux, temp, temp_prev;
	char *Aux_surname,*Prev_surname;
	int input;
        
        aux = Lista_Inicial;
		Aux_surname = aux -> Apellido;
		Prev_surname = aux -> next -> Apellido;

		if (aux == NULL)
	    {
		   printf("No match!\n");
	    }

        for (aux = Lista_Inicial;aux != NULL; aux = aux -> next)
        {
        Aux_surname = aux -> Apellido;
		Prev_surname = aux -> next -> Apellido;

        if (String_Compare(Prev_surname,surname) == OK)
	    {
	    	temp_prev = aux;
	  
			printf("%s\n%s\n%s\n%s\n\n",aux -> next -> Apellido, aux -> next -> Nombre, aux -> next -> Direccion, aux -> next -> Profesion);

			printf("0.Delete\n1.Continue\n");
			scanf("%d",&input);

			if (input == 0)
			{
				temp = aux -> next;

				temp_prev -> next = temp;

				free(aux);

				break;
			}
			if (input == 1)
			{
				continue;
			}
		}

        } 


}
