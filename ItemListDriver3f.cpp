#include <iostream>
#include "CatalogItem.h"
#include "ItemList.h"


int main(){
	ItemList * listPtr;
	CatalogItem *item1Ptr, *item2Ptr, *item3Ptr, 
					*item4Ptr, *item5Ptr;

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

	// now delete the list (calls destructor, which should delete all the nodes in the list)
	delete listPtr;

	// best practice is to now set listPtr to nullptr
	listPtr = nullptr;

	return 0;
}

