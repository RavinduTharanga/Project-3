all:	CatalogDriver2 ItemListDriver2 ItemListDriver3a ItemListDriver3b CatalogItemDriver3a CatalogItemDriver3b CatalogItemDriver3c CatalogItemDriver3d CatalogItemDriver3e

CatalogDriver2:	CatalogItem.h CatalogItem.cpp CatalogDriver2.cpp
	g++ -o CatalogDriver2 CatalogDriver2.cpp CatalogItem.cpp

ItemListDriver2:	CatalogItem.h CatalogItem.cpp ItemList.h ItemList.cpp ItemListDriver2.cpp 
	g++ -o ItemListDriver2 ItemListDriver2.cpp CatalogItem.cpp ItemList.cpp

ItemListDriver3a:	CatalogItem.h CatalogItem.cpp ItemList.h ItemList.cpp ItemListDriver3a.cpp 
	g++ -o ItemListDriver3a ItemListDriver3a.cpp CatalogItem.cpp ItemList.cpp

ItemListDriver3b:	CatalogItem.h CatalogItem.cpp ItemList.h ItemList.cpp ItemListDriver3b.cpp 
	g++ -o ItemListDriver3b ItemListDriver3b.cpp CatalogItem.cpp ItemList.cpp

CatalogItemDriver3a:CatalogItem.h CatalogItem.cpp CatalogItemDriver3a.cpp
	g++ -o CatalogItemDrive3a CatalogItemDriver3a.cpp CatalogItem.cpp

CatalogItemDriver3b:CatalogItem.h CatalogItem.cpp CatalogItemDriver3b.cpp
	g++ -o CatalogItemDrive3b CatalogItemDriver3b.cpp CatalogItem.cpp

CatalogItemDriver3c:CatalogItem.h CatalogItem.cpp CatalogItemDriver3c.cpp
	g++ -o CatalogItemDrive3c CatalogItemDriver3c.cpp CatalogItem.cpp

CatalogItemDriver3d:CatalogItem.h CatalogItem.cpp CatalogItemDriver3d.cpp
	g++ -o CatalogItemDrive3d CatalogItemDriver3d.cpp CatalogItem.cpp

CatalogItemDriver3e:CatalogItem.h CatalogItem.cpp CatalogItemDriver3e.cpp
	g++ -o CatalogItemDrive3e CatalogItemDriver3e.cpp CatalogItem.cpp
clean:
	rm CatalogDriver2 ItemListDriver2

