#include <gtest/gtest.h> // we will add the path to C preprocessor later
#include "../server/Server.h"

TEST(Server, get_port)
{
	Server *s = new Server("127.0.0.1",0, 0);
	EXPECT_EQ(0, s->get_port());
}

int main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
