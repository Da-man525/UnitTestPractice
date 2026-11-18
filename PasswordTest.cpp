/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PasswordTest : public ::testing::Test
{
	protected:
		PasswordTest(){} //constructor runs before each test
		virtual ~PasswordTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PasswordTest, single_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1, actual);
}

TEST(PasswordTest, repeated_letters){
	Password my_password;
	int actual = my_password.count_leading_characters("ZZZZ");
	ASSERT_EQ(4, actual);
}



TEST(passwordTest, no_chars){
	Password my_password;
	int actual = my_password.count_leading_characters("");
	ASSERT_EQ(0, actual);
}

TEST(PasswordTest, normal_case){
	Password my_password;
	bool actual = my_password.has_mixed_case("Hello");
	ASSERT_TRUE(actual);
}

TEST(PasswordTest, not_mixed){
	Password my_password;
	bool actual = my_password.has_mixed_case("hello");
	ASSERT_FALSE(actual);
}

TEST(PasswordTest, only_numbers){
	Password my_password;
	bool actual =my_password.has_mixed_case("123");
	ASSERT_FALSE(actual)
}
