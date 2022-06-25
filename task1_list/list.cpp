#include "pch.h"
#include "list.h"
#include "stdio.h"
#include "math.h"


List* initList(void) //tworzenie nowej listy
{
	return (new List);
}

void deinitList(List* pRoot)
{
	free(pRoot);
	pRoot = NULL;
}

// adding a new car to list
void addCar(List* pRoot, char* plateNum)
{

}

// deleting a car from list
void removeCar(List* pRoot, char* plateNum)
{

}
void printAll(List* pRoot) {

}

//Show number of elements on the list
int numberOfElements(List* pRoot)
{
    int number = 0;
    if (pRoot == NULL)
    {
      return number;
    }

    List *pLastElement = pRoot;
    while(pLastElement->pNext != NULL)
    {
        pLastElement = (pLastElement->pNext);
        number++;//increment
    }
    return number;
}
