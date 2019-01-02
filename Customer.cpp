#include "stdafx.h"
#include "Customer.h"


Customer::Customer()
{
	orderList = new std::list<Order*>(0);
}

Customer::Customer(std::list<Order*>* orderList)
{
	this->orderList = new std::list<Order*>(*orderList);
}

Customer::Customer(const Customer & object)
{
	this->orderList = new std::list<Order*>(*(object.getOrderList()));
}

Customer::~Customer()
{
	orderList->clear();
}

std::list<Order*>* Customer::getOrderList() const
{
	return orderList;
}

Order & Customer::addOrder(Order & order)
{
	orderList->push_back(&order);

	return order;
}

void Customer::removeOrder(Order & order)
{
	orderList->remove(&order);
}
