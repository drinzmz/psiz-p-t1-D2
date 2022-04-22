#include "pch.h"
#include "list.h"
#include "stdio.h"
#include <iostream>




List* initList(void)
{
	List* pRoot = (List*)malloc(sizeof(*pRoot));
	
	return pRoot;
}

void deinitList(List* pRoot)
{
	free(ws);
	pRoot = NULL;
}

// adding a new car to list
void addCar(List* pRoot, char* plateNum)
{
	pRoot.plateNum = plateNum;
}

void removeCar(List* pRoot, char* plateNum)
{
	pRoot.plateNum=null;
}
void printAll(List* pRoot) {
	
	if (ws==NULL)
	{
	    cout<<"PUSTO ";
	}
	else
	{
	  cout<<"Cars : ";
	  while(pLastElement->pNext != NULL)
    	  {
	      	cout<<"pRoot.plateNum<<endl;
		pLastElement = (pLastElement->pNext);  
	  }
	}
	
}

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
        number++;
    }
    return number;
}
