#include "pch.h"
#include "list.h"
#include "stdio.h"




List* initList(void)
{
	List* ws = (List*)malloc(sizeof(*pRoot));
	
	return ws;
}

void deinitList(List* ws)
{
	free(ws);
	pRoot = NULL;
}

// adding a new car to list
void addCar(List* ws, char* plateNum)
{
	
}

void removeCar(List* ws, char* plateNum)
{

}
void printAll(List* ws) {

}

int numberOfElements(List* ws)
{
    int number = 0;
    if (ws == NULL)
    {
      return number;
    }

    List *pLastElement = ws;
    while(pLastElement->pNext != NULL)
    {
        pLastElement = (pLastElement->pNext);
        number++;
    }
    return number;
}
