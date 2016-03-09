#include <gtest/gtest.h>

extern "C" {
#  include "exe_in_path.c"
};

TEST(exe_in_path, TestNull)
{
   EXPECT_EQ(false, exe_in_path(NULL));
}

TEST(exe_in_path, TestEmptyString)
{
   EXPECT_EQ(false, exe_in_path(""));
}

TEST(exe_in_path, TestLS)
{
   EXPECT_EQ(true, exe_in_path("ls"));
}

TEST(exe_in_path, TestNotInPath)
{
   EXPECT_EQ(false, exe_in_path("SomethingDefinitelyNotInPath"));
}

TEST(exe_in_path, TestRandomChars)
{
   EXPECT_EQ(false, exe_in_path("*!03/;]asdf$FOO"));
}

TEST(exe_in_path, TestOpenQuote)
{
   EXPECT_EQ(false, exe_in_path("'"));
}
