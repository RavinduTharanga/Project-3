#include <iostream>
#include "CatalogItem.h"
#include "ItemList.h"

int main(){
	CatalogItem *item1Ptr, *item2Ptr, *item3Ptr, 
					*item4Ptr, *item5Ptr;
	ItemList * catalogPtr;
	bool success;

	// create an empty list
	catalogPtr = new ItemList();

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
	cout << "Our initital list is: ";
	catalogPtr->addItem(item1Ptr);
	catalogPtr->addItem(item2Ptr);
	catalogPtr->addItem(item3Ptr);
	catalogPtr->addItem(item4Ptr);
	catalogPtr->addItem(item5Ptr);
	catalogPtr->showList();

	// delete an item from the list and show the list
	success = catalogPtr->deleteItem(10696);
	if (success){
			cout << endl 
			<< "After deleting the item at the head (10696):";
			catalogPtr->showList();
			cout << endl;
	}
	else{
			cout << "delete of 10696 failed " << endl;
	}

	// delete an item from the list and show the list
	success = catalogPtr->deleteItem(11033);
	if (success){
			cout << endl 
			<< "After deleting the item at the end (11033):";
			catalogPtr->showList();
			cout << endl;
	}
	else{
			cout << "delete of 11033 failed " << endl;
	}

	// delete an item from the middle of the list
	success = catalogPtr->deleteItem(11022);
	if (success){
		cout << endl;
		cout << "After deleting an item in the middle of the list (11022):";
		catalogPtr->showList();
		cout << endl;
	}
	else{
		cout << "delete of 11022 failed " << endl;
	}
	return 0;
}

