#ifndef CATALOG_H
#define CATALOG_H


#include <string>
#include <iostream>

using namespace std;

class CatalogItem{
public:
	// constructors
	CatalogItem();
	~CatalogItem();
	CatalogItem(int, string, int, float, float, int);
	// Copy constructor
    CatalogItem(const CatalogItem& other);

	// Overloaded assignment operator
	CatalogItem& operator=(const CatalogItem& other);

	// Overloaded equality operator
    bool operator==(const CatalogItem& other) const;
 
	// Declare the friend overloaded stream insertion operator
    friend ostream& operator<<(ostream& os, const CatalogItem& item);

	// setters
	void setCode(int );
	void setDescription(string);
	void setNumPieces(int);
	void setWholesalePrice(float);
	void setMarkup(float);
	void setNumItems(int);
	void setNext(CatalogItem*);

	// getters
	int getCode() const;
	string getDescription() const;
	int getNumPieces() const;
	float getWholesalePrice() const;
	float getRetailPrice() const;
	float getMarkup() const;
	int	getNumItems() const;
	CatalogItem * getNext() const;

	// other methods
	void getCatalogItem();		
	void showCatalogItem();
	void showInventoryItem();
	
private:
	int		code;
	string	description;
	int 		numPieces;
	float		wholesalePrice;
	float		markup;
	int 		numItems;
	CatalogItem * next;



};

#endif





// Forward declaration of the ostream class






// ... [previous code] ...

// class CatalogItem {
//     // ... [existing members and methods] ...

//     // Overloaded assignment operator
//     CatalogItem& operator=(const CatalogItem& other);

//     // ... [remaining members and methods] ...
// };

// ... [remaining code] ...


// class CatalogItem {
//     // ...

//     // Overloaded equality operator
//     bool operator==(const CatalogItem& other) const;

//     // ...
// };
