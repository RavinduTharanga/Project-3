#ifndef ITEM_LIST_H 
#define  ITEM_LIST_H
#include "CatalogItem.h"


class ItemList{

public:
	~ItemList();  // Destructor declaration
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
	ItemList(const ItemList &other);
	ItemList &operator=(const ItemList &other);
		
// In ItemList.h, inside the ItemList class definition

	bool operator==(const ItemList &other) const;
	 friend std::ostream& operator<<(std::ostream& os, const ItemList& list);


private:
	CatalogItem *head;
};

#endif

