#include <iostream>
#include "CatalogItem.h"
#include "ItemList.h"


void foo(){
	// statically create two catalog items
	CatalogItem itemA;
	CatalogItem itemB(11077,"Pretty_Bricks",100,20.00, 1.75, 50);
	return;
}

int main(){
	// dynamically create 2 catalog items
	CatalogItem *item1Ptr = new CatalogItem(11030,"Lots_of_Bricks",1000,30.00, 2.0, 150);
	CatalogItem *item2Ptr = new CatalogItem(10698,"Lego_Large_Creative_Brick_Box", 790,30.00, 2.0, 250);

	foo();

	delete item1Ptr;
	delete item2Ptr;



	return 0;
}

