#include <iostream>
#include "CatalogItem.h"
#include "ItemList.h"


int main(){
	// create 2 catalog items
	CatalogItem *item1Ptr = new CatalogItem(11030,"Lots_of_Bricks",1000,30.00, 2.0, 150);
	CatalogItem *item2Ptr = new CatalogItem(10698,"Lego_Large_Creative_Brick_Box", 790,30.00, 2.0, 250);
	CatalogItem *item3Ptr = new CatalogItem(11030,"Lots_of_Bricks",1000,30.00, 2.0, 150);

	// make item1 point to item2
	item1Ptr->setNext(item2Ptr);
	cout << "*item1Ptr, displayed as a catalog item: " << endl;
	item1Ptr->showCatalogItem();

	cout << "*item3Ptr, displayed as a catalog item: " << endl;
	item3Ptr->showCatalogItem();

	// test the == comparison operator
	// should compare based on all member attributes except next pointer
	if (*item3Ptr == *item1Ptr){
		cout << "item1 and item3 are the same " << endl;
	}
	else{
		cout << "item1 and item3 are different " << endl;
	}

	return 0;
}

