#include "stdafx.h"
#include "Category.h"
#include "Item.h"

class ItemNotFoundException {};

Category::Category()
{
	items = new std::vector<Item*>(0);
}

Category::Category(std::vector<Item*>* items)
{
	this->items = new std::vector<Item*>(*items);
}

Category::~Category()
{
	items->clear();
}

Item * Category::getAllItems() const
{
	return *(items->data());
}

void Category::popBack()
{
	items->pop_back();
}

Item & Category::add(Item & item)
{
	items->push_back(&item);

	return item;
}

void Category::remove(Item& item)
{
	int index = 0;

	for each (auto el in *items)
	{
		if (el == &item) {
			items->erase(items->begin() + index);

			return;
		}
		index++;
	}
	
	throw ItemNotFoundException();

}
