// ObjectConnectivity.cpp: определяет точку входа для консольного приложения.
//
#include "Customer.h"
#include "Item.h"
#include "Category.h"
#include "Order.h"

int main()
{
	Customer* customer = new Customer();
	std::list<Item*>* lst = new std::list<Item*>(0);
	Category* category = new Category();

	lst->push_back(new Item(category));
	Order* order = new Order(*customer, lst);
	
	customer->addOrder(*order);

    return 0;
}

