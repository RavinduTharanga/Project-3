#include "CatalogItem.h"
#include<iostream>
#include<iomanip>
using namespace std;


// constructors
// sets default values for member attributes, markup to 1.0, next to nullptr
// CatalogItem::CatalogItem(): code(0), description(""), numPieces(0), 
// 	wholesalePrice(0.0),markup(1.0), numItems(0), next(nullptr){};

CatalogItem::CatalogItem() : code(0), description(""), numPieces(0), 
    wholesalePrice(0.0), markup(1.0), numItems(0), next(nullptr) {
    cout << "Default Constructor called for CatalogItem" << endl;
}

CatalogItem::CatalogItem(int c, string d, int n, float w, float m, int ni)
    : code(c), description(d), numPieces(n), wholesalePrice(w), markup(m), numItems(ni), next(nullptr) {
    cout << "creating CatalogItem with code = "<<code<< endl;
}

// sets values for member attributes, next to nullptr
// CatalogItem::CatalogItem(int c, string d, int n, float w, float m, int ni):
// 	code(c), description(d), numPieces(n), wholesalePrice(w),markup(m), numItems(ni), next(nullptr){};
// Copy constructor implementation
// CatalogItem::CatalogItem(const CatalogItem& other) 
//     : code(other.code), description(other.description), numPieces(other.numPieces),
//       wholesalePrice(other.wholesalePrice), markup(other.markup), numItems(other.numItems),
//       next(nullptr) // setting next to nullptr
// {
// }
CatalogItem::CatalogItem(const CatalogItem& other) 
    : code(other.code), description(other.description), numPieces(other.numPieces),
      wholesalePrice(other.wholesalePrice), markup(other.markup), numItems(other.numItems),
      next(nullptr) {
    cout << "via copy constructor, creating CatalogItem with code ="<<code<< endl;

}
CatalogItem::~CatalogItem() {
    cout << "Destructor called for CatalogItem" << endl;
}



// Overloaded assignment operator implementation
CatalogItem& CatalogItem::operator=(const CatalogItem& other) {
    // Self-assignment check
    if (this == &other) {
        return *this;
    }

    // Copy data from 'other' (except 'next')
    code = other.code;
    description = other.description;
    numPieces = other.numPieces;
    wholesalePrice = other.wholesalePrice;
    markup = other.markup;
    numItems = other.numItems;

    // Set 'next' to nullptr
    next = nullptr;

    return *this; // Return a reference to the current object
}



void CatalogItem::setCode(int c){
	code = c;
};

void CatalogItem::setDescription(string d){
	description = d;
};

void CatalogItem::setNumPieces(int n){
	numPieces = n;
};

void CatalogItem::setWholesalePrice(float w){
	wholesalePrice = w;
};

void CatalogItem::setMarkup(float m){
	markup = m;
};

void CatalogItem::setNumItems(int n){
	numItems = n;
};

void CatalogItem::setNext(CatalogItem * n){
	next = n;
}


int CatalogItem::getCode() const{
	return code;
};

string CatalogItem::getDescription() const{
	return description;
};

int CatalogItem::getNumPieces() const{
	return numPieces;
};

float CatalogItem::getWholesalePrice() const{
	return wholesalePrice;
};

float CatalogItem::getRetailPrice() const{
	return wholesalePrice * markup;
};

float CatalogItem::getMarkup() const{
	return markup;
};

int CatalogItem::getNumItems() const{
	return numItems;
};

CatalogItem * CatalogItem::getNext() const{
	return next;
};

// prompt user to enter attribute values for an existing CatalogItem
void CatalogItem::getCatalogItem(){
	cout << "Enter catalog code: ";
	cin >> code;

	cout << "Enter description: ";
	cin >> description;

	cout << "Enter number of pieces: ";
	cin >> numPieces;

	cout << "Enter wholesale price: "; 
	cin >> wholesalePrice;

	cout << "Enter markup: "; 
	cin >> markup;

	cout << "Enter number of items: "; 
	cin >> numItems;

	return;
};


void CatalogItem::showCatalogItem(){
	cout << left << setw(10) << code 
		  << left << setw(30) << description
		  << right << setw(10) << numPieces 
		  << setw(10) << fixed << setprecision(2) 
		  <<"$" << getRetailPrice()
		  << endl;
};


void CatalogItem::showInventoryItem(){
   cout << left << setw(10) << code
        << left << setw(30) << description
        << right << setw(10) << numPieces
        << setw(10) << fixed << setprecision(2) <<"$" << wholesalePrice
        << setw(10) << fixed << setprecision(2) << markup
        << setw(10) << numItems
        << endl;
};



bool CatalogItem::operator==(const CatalogItem& other) const {
    return (code == other.code) &&
           (description == other.description) &&
           (numPieces == other.numPieces) &&
           (wholesalePrice == other.wholesalePrice) &&  // Direct comparison, may not be precise for floats
           (markup == other.markup) &&  // Direct comparison, may not be precise for floats
           (numItems == other.numItems);
    // Note: 'next' is not compared as per your requirements
}



ostream& operator<<(ostream& os, const CatalogItem& item) {
    os << left << setw(10) << item.code
       << left << setw(30) << item.description
       << right << setw(10) << item.numPieces
       << setw(10) << fixed << setprecision(2) <<"$" << item.wholesalePrice
       << setw(10) << fixed << setprecision(2) << item.markup
       << setw(10) << item.numItems
       << endl;
    return os;
}

// CatalogItem::~CatalogItem() {
//     cout << "Destructor called for CatalogItem with code: " << code << endl;
// }


// ... rest of the code ...


//#include "CatalogItem.h"
// ... [other includes and code] ...

// // Overloaded assignment operator implementation
// CatalogItem& CatalogItem::operator=(const CatalogItem& other) {
//     // Self-assignment check
//     if (this == &other) {
//         return *this;
//     }

//     // Copy data from 'other' (except 'next')
//     code = other.code;
//     description = other.description;
//     numPieces = other.numPieces;
//     wholesalePrice = other.wholesalePrice;
//     markup = other.markup;
//     numItems = other.numItems;

//     // Set 'next' to nullptr
//     next = nullptr;

//     return *this; // Return a reference to the current object
// }

// // ... [remaining code] ...





// To implement the overloaded assignment operator (operator=) for your CatalogItem class, follow these steps:

// Add the Function Prototype in CatalogItem.h:

// Declare the overloaded assignment operator as a member function of the CatalogItem class.
// Use the const modifier where appropriate to indicate that the function doesn't modify the object passed as an argument.
// Implement the Function in CatalogItem.cpp:

// Define the overloaded assignment operator.
// Copy each attribute from the parameter object to the current object, except for next, which should be set to nullptr.
// Ensure proper handling of self-assignment.
// Return a reference to the current object.
// Here's how you can modify your code: