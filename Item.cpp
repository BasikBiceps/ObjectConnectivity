#include "stdafx.h"
#include "Item.h"
#include "Category.h"

Item::Item(Category * category)
{
	this->category = category;
	this->category->add(*this);
}

Item::~Item() {
	category->remove(*this);
}

Category * Item::getCategory() const
{
	return category;
}
