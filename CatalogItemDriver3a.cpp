#include <iostream>
#include "CatalogItem.h"
#include "ItemList.h"


int main(){
	// create 2 catalog items
	CatalogItem *item1Ptr = new CatalogItem(10696,"Lego_Medium_Creative_Brick_Box", 484,17.50, 2.0, 400);
	CatalogItem *item2Ptr = new CatalogItem(11033,"Creative_Fantasy_Universe", 1800,45.00, 2.0, 75);

	// and a CatalogItem pointer
	CatalogItem *item3Ptr;

	cout << "*item1Ptr, displayed as a catalog item: " << endl;
	item1Ptr->showCatalogItem();
	cout << endl;

	cout << "and now item1 points to item 2 " << endl;
	item1Ptr->setNext(item2Ptr);
	cout << endl;

	// test the copy constructor -- should create and return a new CatalogItem
	// copying all BUT the next pointer to a new node (next pointer should be nullptr)
	item3Ptr = new CatalogItem(*item1Ptr);

	cout << "*item3Ptr, displayed as a catalog item: " << endl;
	item3Ptr->showCatalogItem();
	cout << endl;

	cout << "item 1's next pointer is " << item1Ptr->getNext() << endl;
	cout << "item 3's next pointer is " << item3Ptr->getNext() << endl;
	cout << endl;

	return 0;
}

