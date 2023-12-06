#ifndef ITEM_LIST_H 
#define  ITEM_LIST_H
#include "CatalogItem.h"


class ItemList{

public:
	//constructor
	//initial state is an empty list
	ItemList():head(nullptr){};

	//setters
	void setHead(CatalogItem *);

	//getters
	CatalogItem * getHead() const;

	// other class methods
	bool addItem(CatalogItem *);
	bool showItemByCode(int) const;
	void showList() const;
	void showInventory() const;
	bool deleteItem(const int catalogCode);
	CatalogItem * find(int catalogCode) const;


private:
	CatalogItem *head;
};


#endif

