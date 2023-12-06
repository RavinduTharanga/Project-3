#include <iostream>
#include "CatalogItem.h"
#include "ItemList.h"


int main(){
	CatalogItem *item1Ptr, *item2Ptr, *item3Ptr, *item4Ptr, *item5Ptr, *item6Ptr; 
	ItemList * catalogPtr;

	cout << "Test driver for list functions ... " << endl;
	cout << "First, create an empty list of items and show the list:" << endl;
	catalogPtr = new ItemList();
	catalogPtr->showList();


	cout << "Make catalog item 11030, add to the list, show the list:" << endl;
	item1Ptr = new CatalogItem(11030,"Lots_of_Bricks",1000,30.00, 2.0, 150);
	catalogPtr->addItem(item1Ptr);
	catalogPtr->showList();

	cout << "Make catalog item 10698, add to the list, show the list:" <<endl;
	item2Ptr = new CatalogItem(10698,"Lego_Large_Creative_Brick_Box",790,30.00, 2.0, 250);
	catalogPtr->addItem(item2Ptr);
	catalogPtr->showList();

	cout << "Make catalog item 11022, add to the list, show the list:" << endl;
	item3Ptr = new CatalogItem(11022,"Space_Mission",1700,35.00, 2.0, 300);
	catalogPtr->addItem(item3Ptr);
	catalogPtr->showList();

	cout << "Make catalog item 10696, add to the list, show the list:" << endl;
	item4Ptr = new CatalogItem(10696,"Lego_Medium_Creative_Brick_Box",484,17.50, 2.0, 400);
	catalogPtr->addItem(item4Ptr);
	catalogPtr->showList();

	cout << "Make catalog item 11033, add to the list, show the list:" << endl;
	item5Ptr = new CatalogItem(11033,"Creative_Fantasy_Universe",1800,45.00, 2.0, 75);
	catalogPtr->addItem(item5Ptr);
	catalogPtr->showList();

	cout << "Make duplicate item 11022, try to add to list, show list:" << endl;
	item6Ptr = new CatalogItem(11022,"Space_Mission",1700,35.00, 2.0, 300);
	catalogPtr->addItem(item6Ptr);
	catalogPtr->showList();

	cout << endl;

	cout << endl;
	cout << "Show item by code, for 10696:" << endl;
	catalogPtr->showItemByCode(10696);

	cout << endl;
	cout << "Show item by code, for 10698:" << endl;
	catalogPtr->showItemByCode(10698);

	cout << endl;
	cout << "Show item by code, for 11022:" << endl;
	catalogPtr->showItemByCode(11022);

	cout << endl;
	cout << "Show item by code, for 11030:" << endl;
	catalogPtr->showItemByCode(11030);

	cout << endl;
	cout << "Show item by code, for 99999 (not in list) :" << endl;
	catalogPtr->showItemByCode(99999);
return 0;

}

