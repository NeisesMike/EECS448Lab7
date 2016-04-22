/*
 * Test.h
 *
 *  Created on: Apr 21, 2016
 *      Author: Michael
 *      Purpose: to test the functionality of the LinkedList.
 *      Explanation: any test with two parts has a part for each of the similar _Front and _Back methods.
 */

#ifndef TEST_H_
#define TEST_H_

class Test {
	public:
		Test();
		virtual ~Test();
		void RunTests();

		//Test for creation of a new list
		bool Test1();

		//Try to addFront/addBack 1 node.
		bool Test2a();
		bool Test2b();

		//Try search after 1 addFront/addBack
		bool Test3a();
		bool Test3b();

		//Test new list for emptiness using isEmpty()
		bool Test4();

		//Compare isEmpty() and size() for a new list
		bool Test5();

		//Test size after 100 addFronts/addBacks
		bool Test6a();
		bool Test6b();

		//Search for value in list after 100 addFronts/addBacks
		//The test here using addBack proved to be misleading, because addBack is bugged.
		bool Test7a();
		bool Test7b();

		//Test size preservation after 100 adds and removes
		bool Test8a();
		bool Test8b();

		//Try to removeFront/removeBack from a new, empty list.
		bool Test9a();
		bool Test9b();

		//Test positions after 1 remove.
		//These tests proved to be misleading, as shown by Tests11
		bool Test10a();
		bool Test10b();

		//Visual inspection of lists after 10 addFronts/addBacks
		void Test11a();
		void Test11b();

		//Visual inspection of lists after 10 addFronts and one removeFront/removeBack
		//addBack() not used because I know it's bugged by now.
		void Test12a();
		void Test12b();

		//Test the LinkedList destructor by checking size before adding and after calling the destructor
		bool Test13();

		//Test search for invalid type T.
		//Test cancelled. I'm not certain how to do this without compile-time errors.
		bool Test14();

		//Search for value not in list after 100 addFronts/addBacks
		bool Test15a();
		bool Test15b();

		//Test positioning of addBack
		void Test16();

		//Try search on new, empty list.
		bool Test17();

		//Test isEmpty after calling destructor
		bool Test18();
};

#endif /* TEST_H_ */
