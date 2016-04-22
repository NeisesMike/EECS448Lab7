/*
 * Test.cpp
 *
 *  Created on: Apr 21, 2016
 *      Author: Michael Neises
 *      Purpose: to test the provided LinkedList class for total functionality
 *      Notes: The member functions of Test mostly return bools because I was planning to implement a scoring system.
 *      	Instead, the test results are printed directly to the console.
 */

#include "Test.h"
#include "Node.h"
#include "LinkedList.h"
#include <iostream>


Test::Test() {
	// TODO Auto-generated constructor stub

}

Test::~Test() {
	// TODO Auto-generated destructor stub
}

void Test::RunTests()
{
	Test1();
	Test2a();
	Test2b();
	Test3a();
	Test3b();
	Test4();
	Test5();
	Test6a();
	Test6b();
	Test7a();
	Test7b();
	Test8a();
	Test8b();
	Test9a();
	Test9b();
	Test10a();
	Test10b();
	Test11a();
	Test11b();
	Test12a();
	Test12b();
	Test13();
	Test14();
	Test15a();
	Test15b();
	Test16();
	Test17();
	Test18();
}

bool Test::Test1()
{
	bool success = false;
	try
	{
		LinkedList<int> myList;
		std::cout << "Test 1 Passed.\n";
		success = true;
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
		std::cout << "	Could not create a new int linked list.\n";
	}
	return success;
}

bool Test::Test2a()
{
	bool success = false;
	try
	{
		LinkedList<int> myList;
		myList.addFront(4);
		std::cout << "Test 2a Passed.\n";
		success = true;
	}
	catch(std::exception& e)
	{
		std::cout << "Test 2a Failed.\n";
		std::cout << e.what();
		std::cout << "	Could not addFront a new node.\n";
	}
	return success;
}

bool Test::Test2b()
{
	bool success = false;
	try
	{
		LinkedList<int> myList;
		myList.addBack(4);
		std::cout << "Test 2b Passed.\n";
		success = true;
	}
	catch(std::exception& e)
	{
		std::cout << "Test 2b Failed.\n";
		std::cout << e.what();
		std::cout << "	Could not addBack a new node.\n";
	}
	return success;
}

bool Test::Test3a()
{
	bool success = false;
	try
	{
		LinkedList<int> myList;
		myList.addFront(4);
		success = myList.search(4);
		if(success)
		{
			std::cout << "Test 3a Passed.\n";
		}
		else
		{
			std::cout << "Test 3a Failed.\n";
			std::cout << "	Singular value not found by search in list after addFront. \n";
		}
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}
	return success;
}

bool Test::Test3b()
{
	bool success = false;
	try
	{
		LinkedList<int> myList;
		myList.addBack(1);
		if(myList.search(1))
		{
			std::cout << "Test 3b Passed.\n";
			success = true;
		}
		else
		{
			std::cout << "Test 3b Failed.\n";
			std::cout << "	Singular value not found by search in list after addBack. \n";
		}
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}
	return success;
}

bool Test::Test4()
{
	bool success = false;
	try
	{
		LinkedList<int> myList;
		success = myList.isEmpty();
		if(success)
		{
			std::cout << "Test 4 Passed.\n";
		}
		else
		{
			std::cout << "Test 4 Failed.\n";
			std::cout << "	A new list was not empty.\n";
		}
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}
	return success;
}

bool Test::Test5()
{
	bool empty = false;
	try
	{
		LinkedList<int> myList;
		empty = myList.isEmpty();
		if(empty && myList.size()==0)
		{
			std::cout << "Test 5 Passed.\n";
		}
		else if(myList.size()!=0)
		{
			std::cout << "Test 5 Failed.\n";
			std::cout << "	size() of new list returns nonzero\n";
			std::cout << "	The size of the new list is " << myList.size() << "\n";
		}
		else
		{
			std::cout << "Test 5 Failed.\n";
			std::cout << "	isEmpty returns true and size() returns nonzero\n";
		}
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}
	return empty;
}

bool Test::Test6a()
{
	bool success = false;
	try
	{
		LinkedList<int> myList;
		for(int i=0; i<100; i++)
		{
			myList.addFront(i);
		}
		if(myList.size()==100)
		{
			std::cout << "Test 6a Passed.\n";
			success = true;
		}
		else
		{
			std::cout << "Test 6a Failed.\n";
			std::cout << "	After 100 nodes added with addFront, size is " << myList.size() << "\n";
		}
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}
	return success;
}

bool Test::Test6b()
{
	bool success = false;
	try
	{
		LinkedList<int> myList;
		for(int i=0; i<100; i++)
		{
			myList.addBack(i);
		}
		if(myList.size()==100)
		{
			std::cout << "Test 6b Passed.\n";
			success = true;
		}
		else
		{
			std::cout << "Test 6b Failed.\n";
			std::cout << "	After 100 nodes added with addBack, size is " << myList.size() << "\n";
		}
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}
	return success;
}

bool Test::Test7a()
{
	bool success = false;
	bool search = false;
	try
	{
		LinkedList<int> myList;
		for(int i=0; i<1000; i++)
		{
			myList.addFront(i);
		}
		if(myList.search(42))
		{
			std::cout << "Test 7a Passed.\n";
			success = true;
		}
		else
		{
			std::cout << "Test 7a Failed.\n";
			std::cout << "	Value not found by search in list after 100 addFronts \n";
			search = myList.search(0);
			std::cout << "	Search on the first element returns as (1 for true, 0 for false): " << search << "\n";
			search = myList.search(1);
			std::cout << "	Search on the second element returns as (1 for true, 0 for false): " << search << "\n";
		}
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}
	return success;
}

bool Test::Test7b()
{
	bool success = false;
	bool search = false;
	try
	{
		LinkedList<int> myList;
		for(int i=0; i<100; i++)
		{
			myList.addBack(i);
		}
		if(myList.search(42))
		{
			std::cout << "Test 7b Passed.\n";
			success = true;
		}
		else
		{
			//This test turned out to be misleading, because every value of the list was 0.
			std::cout << "Test 7b Failed.\n";
			std::cout << "	Value not found by search in list after 100 addBacks \n";
			search = myList.search(0);
			std::cout << "	Search on the first element returns as (1 for true, 0 for false): " << search << "\n";
			search = myList.search(1);
			std::cout << "	Search on the second element returns as (1 for true, 0 for false): " << search << "\n";
		}
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}
	return success;
}

bool Test::Test8a()
{
	bool success = false;
	int mySize = 0;
	try
	{
		LinkedList<int> myList;
		mySize = myList.size();
		for(int i=0; i<100; i++)
		{
			myList.addFront(i);
		}
		for(int i=0; i<100; i++)
		{
			myList.removeFront();
		}
		if(myList.size() == mySize)
		{
			std::cout << "Test 8a Passed.\n";
			success = true;
		}
		else
		{
			std::cout << "Test 8a Failed.\n";
			std::cout << "	After 100 addFronts and 100 removeFronts, the size was not preserved.\n";
		}
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}
	return success;
}

bool Test::Test8b()
{
	bool success = false;
	int mySize = 0;
	try
	{
		LinkedList<int> myList;
		mySize = myList.size();
		for(int i=0; i<100; i++)
		{
			myList.addBack(i);
		}
		for(int i=0; i<100; i++)
		{
			myList.removeBack();
		}
		if(myList.size() == mySize)
		{
			std::cout << "Test 8b Passed.\n";
			success = true;
		}
		else
		{
			std::cout << "Test 8b Failed.\n";
			std::cout << "	After 100 addBacks and 100 removeBacks, the size was not preserved.\n";
		}
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}
	return success;
}

bool Test::Test9a()
{
	bool success = false;
	try
	{
		LinkedList<int> myList;
		if(!myList.removeFront())
		{
			std::cout << "Test 9a Passed.\n";
			success = true;
		}
		else
		{
			std::cout << "Test 9a Failed.\n";
			std::cout << "	removeFront() on a new list returned true.\n";
		}
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}
	return success;
}

bool Test::Test9b()
{
	bool success = false;
	try
	{
		LinkedList<int> myList;
		if(!myList.removeBack())
		{
			std::cout << "Test 9b Passed.\n";
			success = true;
		}
		else
		{
			std::cout << "Test 9b Failed.\n";
			std::cout << "	removeBack() on a new list returned true.\n";
		}
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}
	return success;
}

bool Test::Test10a()
{
	bool success = false;
	int num1 = 0;
	try
	{
		LinkedList<int> myList;
		for(int i=0; i<10; i++)
		{
			myList.addFront(i);
		}
		num1 = myList.toVector()[1];
		myList.removeFront();
		if(num1 == myList.toVector()[0])
		{
			std::cout << "Test 10a Passed.\n";
			success = true;
		}
		else
		{
			std::cout << "Test 10a Failed.\n";
			std::cout << "	removeFront returns incorrectly.\n";
		}
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}
	return success;
}

bool Test::Test10b()
{
	bool success = false;
	int num1 = 0;
	try
	{
		LinkedList<int> myList;
		for(int i=0; i<10; i++)
		{
			myList.addBack(i);
		}
		num1 = myList.toVector()[1];
		myList.removeBack();
		if(num1 == myList.toVector()[0])
		{
			std::cout << "Test 10b Passed.\n";
			success = true;
		}
		else
		{
			std::cout << "Test 10b Failed.\n";
			std::cout << "	removeBack returns incorrectly.\n";
		}
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}
	return success;
}

void Test::Test11a()
{
	try
	{
		LinkedList<int> myList;
		for(int i=0; i<10; i++)
		{
			myList.addFront(i);
		}

		std::cout << "Test 11a: addFront() Visual Inspection.\n";
		std::cout << "	Expected List: 9876543210\n";
		std::cout << "	Actual List  : ";

		for(unsigned int j=0; j<myList.toVector().size(); j++)
		{
			std::cout << myList.toVector()[j];
		}
		std::cout << "\n";
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}
}

void Test::Test11b()
{
	try
	{
		LinkedList<int> myList;
		for(int i=0; i<10; i++)
		{
			myList.addBack(i);
		}

		std::cout << "Test 11b: addBack() Visual Inspection.\n";
		std::cout << "	Expected List: 0123456789\n";
		std::cout << "	Actual List  : ";

		for(unsigned int j=0; j<myList.toVector().size(); j++)
		{
			std::cout << myList.toVector()[j];
		}
		std::cout << "\n";
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}
}

void Test::Test12a()
{
	try
	{
		LinkedList<int> myList;
		for(int i=0; i<10; i++)
		{
			myList.addFront(i);
		}
		myList.removeFront();

		std::cout << "Test 12a: removeFront() Visual Inspection.\n";
		std::cout << "	Expected List: 876543210\n";
		std::cout << "	Actual List  : ";

		for(unsigned int j=0; j<myList.toVector().size(); j++)
		{
			std::cout << myList.toVector()[j];
		}
		std::cout << "\n	Expected size: 9\n	Actual size  : " << myList.size() << "\n";
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}
}

void Test::Test12b()
{
	try
	{
		LinkedList<int> myList;
		for(int i=0; i<10; i++)
		{
			myList.addFront(i);
		}
		myList.removeBack();

		std::cout << "Test 12b: removeBack() Visual Inspection.\n";
		std::cout << "	Expected List: 987654321\n";
		std::cout << "	Actual List  : ";

		for(unsigned int j=0; j<myList.toVector().size(); j++)
		{
			std::cout << myList.toVector()[j];
		}
		std::cout << "\n	Expected size: 9\n	Actual size  : " << myList.size() << "\n";
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}
}

bool Test::Test13()
{
	bool success = false;
	int sizeNum = 0;
	try
	{
		LinkedList<int> myList;
		sizeNum = myList.size();
		for(int i=0; i<10; i++)
		{
			myList.addFront(i);
		}
		myList.~LinkedList();
		if(sizeNum == myList.size())
		{
			std::cout << "Test 13 Passed.\n";
			success = true;
		}
		else
		{
			std::cout << "Test 13 Failed.\n";
		}

		//This is here because I was suspicious :3
		for(unsigned int j=0; j<myList.toVector().size(); j++)
		{
			std::cout << myList.toVector()[j];
		}
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}
	return success;
}

bool Test::Test14()
{

	bool success = false;
/**
	double test = 2.4;
	try
	{
		LinkedList<int> myList;
		for(int i=0; i<10; i++)
		{
			myList.addFront(i);
		}
		myList.search(test);
		std::cout << "Test 14 Failed.\n";

	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}
**/
	return success;
}

bool Test::Test15a()
{
	bool success = false;
	bool search = false;
	try
	{
		LinkedList<int> myList;
		for(int i=0; i<100; i++)
		{
			myList.addFront(i);
		}
		if(!myList.search(500))
		{
			std::cout << "Test 15a Passed.\n";
			success = true;
		}
		else
		{
			std::cout << "Test 15a Failed.\n";
			std::cout << "	Value not found by search in list after 100 addFronts \n";
			search = myList.search(0);
			std::cout << "	Search on the first element returns as (1 for true, 0 for false): " << search << "\n";
			search = myList.search(1);
			std::cout << "	Search on the second element returns as (1 for true, 0 for false): " << search << "\n";
		}
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}
	return success;
}

bool Test::Test15b()
{
	bool success = false;
	bool search = false;
	try
	{
		LinkedList<int> myList;
		for(int i=0; i<100; i++)
		{
			myList.addBack(i);
		}
		if(!myList.search(500))
		{
			std::cout << "Test 15b Passed.\n";
			success = true;
		}
		else
		{
			std::cout << "Test 15b Failed.\n";
			std::cout << "	Value not found by search in list after 100 addBacks \n";
			search = myList.search(0);
			std::cout << "	Search on the first element returns as (1 for true, 0 for false): " << search << "\n";
			search = myList.search(1);
			std::cout << "	Search on the second element returns as (1 for true, 0 for false): " << search << "\n";

		}
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}
	return success;
}

void Test::Test16()
{
	try
	{
		LinkedList<int> myList;
		for(int i=0; i<10; i++)
		{
			myList.addFront(i);
		}
		myList.addBack(5);
		std::cout << "Test 16: addBack() after addFront Visual Inspection.\n";
		std::cout << "	Expected List: 98765432105\n";
		std::cout << "	Actual List  : ";

		for(unsigned int j=0; j<myList.toVector().size(); j++)
		{
			std::cout << myList.toVector()[j];
		}
		std::cout << "\n";
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}
}

bool Test::Test17()
{
	bool success = false;
	int value = 0;
	try
	{
		LinkedList<int> myList;
		for(int i = -10; i<10; i++)
		{
			if(myList.search(i))
			{
				success = true;
				value = i;
				break;
			}
		}
		if(success)
		{
			std::cout << "Test 17 Failed.\n";
			std::cout << "	Value " << value << " found in an empty list. \n";
		}
		else
		{
			std::cout << "Test 17 Passed.\n";
		}
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}
	return success;
}

bool Test::Test18()
{
	bool success = false;
	int sizeNum = 0;
	try
	{
		LinkedList<int> myList;
		sizeNum = myList.size();
		for(int i=0; i<10; i++)
		{
			myList.addFront(i);
		}
		myList.~LinkedList();
		if(myList.isEmpty())
		{
			std::cout << "Test 18 Passed.\n";
			success = true;
		}
		else
		{
			std::cout << "Test 18 Failed.\n";
			std::cout << "	isEmpty returns false on a 'destructed' list.\n";

		}
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}
	return success;
}
