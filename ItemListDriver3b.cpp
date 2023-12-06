#include <iostream>
#include "CatalogItem.h"
#include "ItemList.h"


int main(){
	ItemList * listPtr;
	CatalogItem *item1Ptr, *item2Ptr, *item3Ptr, 
					*item4Ptr, *item5Ptr;
	CatalogItem *tempPtr;
	int np;

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

	// find the item with catalog_code 11022
	// and change the markup to 1.5
	tempPtr = listPtr->find(11022);
	tempPtr->setMarkup(1.5);
	// show the updated list
	cout << endl;
	cout << "Item with code 11022 with updated markup value:";
	listPtr->showInventory();

	// find the item with catalog_code 10696
	// and indicate that 100 have been sold
	tempPtr = listPtr->find(10696);
	np = tempPtr->getNumItems();
	if (np >= 100)
		tempPtr->setNumItems(np - 100);
	// show the updated list
	cout << endl;
	cout << "Item with code 10696 has sold 100 units :";
	listPtr->showInventory();

	// find the item with catalog_code 11033
	// and indicate that a shipment of 200 units has arrived
	tempPtr = listPtr->find(11033);
	np = tempPtr->getNumItems();
	tempPtr->setNumItems(np + 200);
	// show the updated list
	cout << endl;
	cout << "Item with code 11033 has received a shipment of 200 units :";
	listPtr->showInventory();

	return 0;
}

