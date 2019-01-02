#pragma once

class Category;

class Item
{
public:
	Item(Category* category);

	~Item();

	Category* getCategory() const;

private:
	Category* category;
};

