#include <iostream>
#include "CatalogItem.h"
#include "ItemList.h"


int main(){
	ItemList * listPtr;
	CatalogItem *item1Ptr, *item2Ptr, *item3Ptr, 
					*item4Ptr, *item5Ptr;
	CatalogItem *tempPtr;

	// create an empty list
	listPtr = new ItemList();

	// create 5 list items
	item1Ptr = new CatalogItem(11030,"Lots_of_Bricks",1000,30.00, 2.0, 150);
	item2Ptr = new CatalogItem(10698,"Lego_Large_Creative_Brick_Box",
						790,30.00, 2.0, 250);
	item3Ptr = new CatalogItem(11022,"Space_Mission",1700,35.00, 2.0, 300);
	item4Ptr = new CatalogItem(10696,"Lego_Medium_Creative_Brick_Box",
						484,17.50, 2.0, 400);
	item5Ptr = new CatalogItem(11033,"Creative_Fantasy_Universe",
						1800,45.00, 2.0, 75);

	// add them all to the list and display the list
	cout << endl;
	cout << "Our initital inventory is: ";
	listPtr->addItem(item1Ptr);
	listPtr->addItem(item2Ptr);
	listPtr->addItem(item3Ptr);
	listPtr->addItem(item4Ptr);
	listPtr->addItem(item5Ptr);
	listPtr->showInventory();


	// now make copy
	ItemList list2;

	// use the assignment operator to populate data members in list2
	list2 = *listPtr;


	// and show the copied list
	cout << endl;
	cout << "Our copy of the inventory is: ";
	list2.showInventory();

	// now make a change to the original list:
	// and change the markup to 1.5
	tempPtr = listPtr->find(11022);
	tempPtr->setMarkup(1.5);

	// show the updated original list
	cout << endl;
	cout << "The original list with code 11022 with updated markup value:";
	listPtr->showInventory();

	// show the unchanged copied list
	cout << endl;
	cout << "The copied list with code 11022 with unchanged  markup value:";
	list2.showInventory();


	return 0;
}

