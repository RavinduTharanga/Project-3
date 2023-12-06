#include <iostream>
#include <string>
#include "CatalogItem.h"

int main(){
	CatalogItem * item1Ptr;
	CatalogItem * item2Ptr;
	const CatalogItem item;

	cout << "This program exercises the updated catalog functions." << endl << endl;

	cout << "Calling the updated CatalogItem constructor with: " << endl;
	cout << "\t 11031, Creative_Monkey_Fun, 135 pieces, 5.00, 1.5, 25" << endl << endl;
	item1Ptr = new CatalogItem(11031, "Creative_Monkey_Fun", 135, 5.00, 1.5, 25);

	cout << "Invoking showCatalogItem on the newly created CatalogItem" << endl;
	item1Ptr->showCatalogItem();
	cout << endl;

	cout << "Calling the no-argument CatalogItem constructor" << endl;
	item2Ptr = new CatalogItem();
	cout << endl;

	cout << "Invoking getCatalogItem() to interactively obtain and "
		  << "fill in the fields" << endl;
	item2Ptr->getCatalogItem();
	cout << endl;

	cout << "Invoking showCatalogItem on the newly created CatalogItem"
		  << endl;
	item2Ptr->showCatalogItem();
	cout << endl;

	return 0;

}

