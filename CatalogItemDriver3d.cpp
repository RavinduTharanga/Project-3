#include <iostream>
#include "CatalogItem.h"
#include "ItemList.h"


int main(){
	// create 2 catalog items
	CatalogItem *item1Ptr = new CatalogItem(11030,"Lots_of_Bricks",1000,30.00, 2.0, 150);
	CatalogItem *item2Ptr = new CatalogItem(10698,"Lego_Large_Creative_Brick_Box", 790,30.00, 2.0, 250);

	// display using overloaded operator<<

	cout << "*item1Ptr, displayed as an inventory item: " << endl;
	cout << *item1Ptr << endl;

	cout << "*item2Ptr, displayed as an inventory item: " << endl;
	cout << *item2Ptr << endl;

	cout << "and cascaded use: " << endl;
	cout << *item1Ptr << *item2Ptr << endl;



	return 0;
}

