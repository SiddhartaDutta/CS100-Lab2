#include "c-echo.h"
#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld){
	char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
	EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString){
	char* test_val[1]; test_val[0] = "./c-echo";
	EXPECT_EQ("", echo(1, test_val));
}

// Additional test cases
TEST(EchoTest, NumericalInput){
	char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "123"; test_val[2] = "3210-1";
	EXPECT_EQ("123 3210-1", echo(3, test_val));
}

TEST(EchoTest, EmptySecondInput){
	char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "First input"; test_val[2] = "";
	EXPECT_EQ("First input ", echo(3, test_val));
}

TEST(EchoTest, 5Inputs){
	char* test_val[6]; test_val[0] = "./c-echo"; test_val[1] = "1"; test_val[2] = "2"; test_val[3] = "3"; test_val[4] = "4"; test_val[5] = "5";
	EXPECT_EQ("1 2 3 4 5", echo(6, test_val));
}

int main(int argc, char **argv){
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
