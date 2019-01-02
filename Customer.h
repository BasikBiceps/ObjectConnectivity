#pragma once
#include <list>

class Order;

class Customer
{
public:
	Customer();
	Customer(std::list<Order*>* orderList);
	Customer(const Customer& object);

	~Customer();

	std::list<Order*>* getOrderList() const;

	Order& addOrder(Order& order);
	void removeOrder(Order& order);

private:
	std::list<Order*>* orderList;
};

