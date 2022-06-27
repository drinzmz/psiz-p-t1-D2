#include "pch.h"
#include "list.h"
#include <ctime>

List mojaLista;

int main()
{
	List* pFirstFloor = initList(); //tworzenie listy
	List* pSecFloor = initList();
	
	deinitList(pFirstFloor);//usuwanie listy
	deinitList(pSecFloor);
}
