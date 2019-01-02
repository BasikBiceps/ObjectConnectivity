#include "stdafx.h"
#include "Order.h"
#include "Customer.h"


Order::Order(Customer & customer, std::list<Item*>* productList)
{
	this->productList = new std::list<Item*>(*productList);
	this->customer = new Customer(customer);
}

Order::~Order()
{
	productList->clear();
}

Customer & Order::getCustomer() const
{
	return *customer;
}

std::list<Item*>* Order::getProductList() const
{
	return productList;
}

void Order::addProduct(Item & product)
{
	productList->push_back(&product);
}

void Order::removeProduct(Item & product)
{
	productList->remove(&product);
}
