/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Racecar");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Not a palindrome");
    ASSERT_FALSE(actual);
}


TEST(PracticeTest, SYMBOL)
{
    Practice obj;
    bool actual = obj.isPalindrome(";[");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, space)
{
    Practice obj;
    bool actual = obj.isPalindrome("");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, palindrome_with_spaces)
{
	Practice obj;
	bool actual = obj.isPalindrome("A but tuba");
	ASSERT_TRUE(actual);
}


TEST(PracticeTest, sort_numbers_basic)
{
	Practice obj;
	int first = 1;
	int second = 2;
	int third = 3;
	obj.sortDescending(first, second, third);
	ASSERT_EQ(first, 3);
	ASSERT_EQ(second, 2);
	ASSERT_EQ(third, 1);
}

TEST(PracticeTest, sort_numbers_basic_2)
{
	Practice obj;
	int first = 2;
	int second = 3;
	int third = 1;
	obj.sortDescending(first, second, third);
	ASSERT_EQ(first, 3);
	ASSERT_EQ(second, 2);
	ASSERT_EQ(third, 1);
}

TEST(PracticeTest, sort_numbers_basic_3)
{
	Practice obj;
	int first = 3;
	int second = 1;
	int third = 2;
	obj.sortDescending(first, second, third);
	ASSERT_EQ(first, 3);
	ASSERT_EQ(second, 2);
	ASSERT_EQ(third, 1);
}

TEST(PracticeTest, sort_numbers_basic_4)
{
	Practice obj;
	int first = 1;
	int second = 3;
	int third = 2;
	obj.sortDescending(first, second, third);
	ASSERT_EQ(first, 3);
	ASSERT_EQ(second, 2);
	ASSERT_EQ(third, 1);
}

TEST(PracticeTest, sort_numbers_basic_5)
{
	Practice obj;
	int first = 2;
	int second = 1;
	int third = 3;
	obj.sortDescending(first, second, third);
	ASSERT_EQ(first, 3);
	ASSERT_EQ(second, 2);
	ASSERT_EQ(third, 1);
}




TEST(PracticeTest, sort_same_number_twice)
{
	Practice obj;
	int first = 1;
	int second = 1;
	int third = 3;
	obj.sortDescending(first, second, third);
	ASSERT_EQ(first, 3);
	ASSERT_EQ(second, 1);
	ASSERT_EQ(third, 1);
}

TEST(PracticeTest, sort_same_number_twice_2)
{
	Practice obj;
	int first = 1;
	int second = 3;
	int third = 1;
	obj.sortDescending(first, second, third);
	ASSERT_EQ(first, 3);
	ASSERT_EQ(second, 1);
	ASSERT_EQ(third, 1);
}

TEST(PracticeTest, sort_same_number_twice_3)
{
	Practice obj;
	int first = 3;
	int second = 1;
	int third = 1;
	obj.sortDescending(first, second, third);
	ASSERT_EQ(first, 3);
	ASSERT_EQ(second, 1);
	ASSERT_EQ(third, 1);
}

TEST(PracticeTest, sort_numbers_inOrder_Already)
{
	Practice obj;
	int first = 3;
	int second = 2;
	int third = 1;
	obj.sortDescending(first, second, third);
	ASSERT_EQ(first, 3);
	ASSERT_EQ(second, 2);
	ASSERT_EQ(third, 1);
}

TEST(PracticeTest, sort_negative)
{
	Practice obj;
	int first = -1;
	int second = -3;
	int third = -2;
	obj.sortDescending(first, second, third);
	ASSERT_EQ(first, -1);
	ASSERT_EQ(second, -2);
	ASSERT_EQ(third, -3);
}

