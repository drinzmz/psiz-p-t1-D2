#include "pch.h"
#include "list.h"



List* initList(void)
{
	List* pRoot = (List*)malloc(sizeof(*pRoot));
	
	return pRoot;
		if (NULL != pRoot)
	{
		pRoot->pNext = NULL;
		pRoot->entryTime = NULL;
		printf("List has been initialized.\n");
		return pRoot;
	}
	else
	{
		printf("Error! The list could not be initialized.\n");
		return nullptr;
	}
}

void deinitList(List* pRoot)
{
	free(pRoot);
	pRoot = NULL;
}

void addCar(List* pRoot, char* plateNum)
{

}

void removeCar(List* pRoot, char* plateNum)
{

}
void printAll(List* pRoot) {

}

int numberOfElements(List* pRoot)
{
	return 0;
}
