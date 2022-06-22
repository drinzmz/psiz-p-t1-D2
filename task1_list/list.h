#pragma once
#ifndef LIST_H
#define LIST_H

typedef struct List {
	char* pPlateNum;
	time_t entryTime;
	struct List* pNext;
} List;

List*initList(void);
void deinitList(List* pRoot); // Function to deinitialize list
void addCar(List* pRoot, char* plateNum); // Function to add a car to the list
void removeCar(List* pRoot, char* plateNum); // Function to remove car from list

void printAll(List* pRoot); //print all the items from the list
int numberOfElements(List* pRoot);

#endif // !LIST_H
