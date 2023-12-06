#include <iostream>
#include "CatalogItem.h"
#include "ItemList.h"

//using namespace std;

int main(){
	// create 2 catalog items
	CatalogItem *item1Ptr = new CatalogItem(11030,"Lots_of_Bricks",1000,30.00, 2.0, 150);
	CatalogItem *item2Ptr = new CatalogItem(10698,"Lego_Large_Creative_Brick_Box", 790,30.00, 2.0, 250);

	// and catalog item pointer
	CatalogItem *item3Ptr = new CatalogItem();

	// make item1 point to item2
	item1Ptr->setNext(item2Ptr);
	cout << "*item1Ptr, displayed as a catalog item: " << endl;
	item1Ptr->showCatalogItem();
	
	// test the assignment operator -- should do a memberwise assignment,
	// copying all but the next pointer from the item on the right to the item on the left
	*item3Ptr = *item1Ptr;

	cout << "*item3Ptr, displayed as a catalog item: " << endl;
	item3Ptr->showCatalogItem();

	cout << "item 1's next pointer is " << item1Ptr->getNext() << endl;
	cout << "item 3's next pointer is " << item3Ptr->getNext() << endl;


	return 0;
}

