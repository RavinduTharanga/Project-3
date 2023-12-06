#include <iostream>
#include <iomanip>
#include "ItemList.h"
using namespace std;


//setters
void ItemList::setHead(CatalogItem * newHead){
	head = newHead;
};

//getters
CatalogItem * ItemList::getHead() const{
	return head;
};

// other class methods
bool ItemList::addItem(CatalogItem *newItem){
	CatalogItem *temp, *trail;

	// bad item pointer 
	if (newItem == nullptr){
		cerr << "item to add is not valid"<< endl;
		return false;
	}

	// add to empty list
	if (head == nullptr){
		newItem->setNext(head);
		head = newItem;
		return true;
	}

	// add before head if less that head's code
	if (newItem->getCode() < head->getCode()) {
		newItem->setNext(head);
		head = newItem;
		return true;
	}

	// otherwise, advance through the list until you find the right spot
	// set pointers to begin traversal
	temp = head;
	trail = nullptr;

	// traverse while advancing temp, with trail following along behing
	while (temp != nullptr){
		// did we find a duplicate?
		if (newItem->getCode() == temp->getCode()){
			cerr << "item is a duplicate" << endl;
			return false;
		}
		if (newItem->getCode() > temp->getCode()){
			// if we haven't found the insert location yet,
			// advance trail and temp 
			trail = temp;
			temp = temp->getNext();
		}
		else{
			// otherwise we found the spot
			// and link in the newItem
			trail->setNext(newItem);
			newItem->setNext(temp);
			return true;
		}
	}
	// if we reach this code, then we ran off the end of the list
	// so add it at the end (trail is now the last item; temp is nullptr)
	trail->setNext(newItem);
	newItem->setNext(nullptr);
	return true;
};

// find the CatalogItem with the matching code and dsiplay it
// as a catalog item
bool ItemList::showItemByCode(int findCode) const{
	struct CatalogItem *temp;
	bool success = false;

	// set pointer to start traversal
	temp = head;

	// while we haven't reached end of list or found the matching node
	// keep advancing the temp pointer
	while ( (temp->getNext() != nullptr) && (temp->getCode() != findCode))
		temp = temp->getNext();

	// we reach this point either by finding a matching OR
	// by running off the end of the list 

	// if we found the code, display the item
	if (temp->getCode() == findCode){
		temp->showCatalogItem();
		success = true;
	}
	// otherwise, note that we did not find it
	if (!success){
		cerr << "catalog code not found in inventory" << endl;
	}
	return success;
};

// display a header and separator lines
// and invoke showCatalogItem on each item in the list
void ItemList::showList() const{
	// initialize the temp pointer 
	CatalogItem *temp = head;

	// display the column headers and top separator line
	cout << endl;
	cout << left << setw(10) << "code"
        << left << setw(30) << "description"
		  << left << setw(10) << "num_pieces"
		  << right << setw(15) << "price"
		  << endl;
	cout << "----------------------------------------------";
	cout << "--------------------------" << endl;

	// for every item in the list, invoke showCatalogItem
	while (temp != nullptr){
		temp->showCatalogItem();
		temp = temp->getNext();
	}

	// display the bottom separator line
	cout << "----------------------------------------------";
	cout << "--------------------------" << endl;
	return;
};


// display a header and separator lines
// and invoke showInventoryItem on each item in the list
void ItemList::showInventory() const{
	// initialize the temp pointer 
   CatalogItem *temp = head;

	// display the column headers and top separator line
   cout << endl;
   cout << left << setw(10) << "code"
        << left << setw(30) << "description"
        << left << setw(10) << "num_pieces"
        << right << setw(15) << "cost"
        << right << setw(10) << "markup"
        << right << setw(10) << "quantity"
        << endl;
   cout << "----------------------------------------------";
	cout << "-----------------------------------------" << endl;

	// for every item in the list, invoke showCatalogItem
   while (temp != nullptr){
      temp->showInventoryItem();
      temp = temp->getNext();
   }

	// display the bottom separator line
   cout << "----------------------------------------------";
	cout << "-----------------------------------------" << endl;
   return;
};


bool ItemList::deleteItem(const int catalogCode) {
    // Check if the list is empty
    if (head == nullptr) {
        return false;
    }

    CatalogItem *temp = head;
    CatalogItem *prev = nullptr;

    // If head node itself holds the catalogCode to be deleted
    if (temp != nullptr && temp->getCode() == catalogCode) {
        head = temp->getNext(); // Changed head
        delete temp;             // Free memory
        return true;
    }

    // Search for the catalogCode, keep track of the previous node
    while (temp != nullptr && temp->getCode() != catalogCode) {
        prev = temp;
        temp = temp->getNext();
    }

    // If catalogCode was not present in the list
    if (temp == nullptr) {
        return false;
    }

    // Unlink the node from the linked list
    prev->setNext(temp->getNext());
    
    // Free memory
    delete temp;
    return true;
}


// Method to find an item by catalog code
CatalogItem * ItemList::find(int catalogCode) const {
    CatalogItem *temp = head;
    while (temp != nullptr) {
        if (temp->getCode() == catalogCode) {
            return temp;
        }
        temp = temp->getNext();
    }
    return nullptr;
}