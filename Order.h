#pragma once
#include <list>

class Customer;
class Item;

class Order
{
public:
	Order(Customer& customer, std::list<Item*>* productList);

	~Order();

	Customer& getCustomer() const;
	std::list<Item*>* getProductList() const;

	void addProduct(Item& product);
	void removeProduct(Item& product);

private:
	Customer* customer;
	std::list<Item*>* productList;
};

