#include "gtest/gtest.h"
#include <iostream>
#include "../A/index.h"
#include "../B/lib.h"

TEST(CTest1, DemnostrateGTestMacros){
    EXPECT_EQ(dzen_of_python(), 555);
}

TEST(CTest2, DemnostrateGTestMacros2){
    EXPECT_EQ(do_B(), 666);
}
