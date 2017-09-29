#include <stdio.h>
#include <stdlib.h>

#define OK 0
#define ERROR 1

typedef struct Nodo
{
	char Nombre [30];

	char Apellido [30];

	char Direccion [30];

	char Profesion [20];

	int Intervencion;

    struct Nodo *next;
}Node;

typedef Node *_pNodo;

void Add_Person (_pNodo);
void Display_List (_pNodo);
void Surname_Search (_pNodo,char*);
void Delete_Person (_pNodo,char*);
int String_Compare (char*,char*);
