#pragma once
#include <vector>

class Item;

class Category
{
public:
	Category();
	Category(std::vector<Item*> *items);

	~Category();

	Item* getAllItems() const;
	Item& add(Item& item);

	void remove(Item& item);
	void popBack();

private:
	std::vector<Item*> *items;
};

