#include "gtest/gtest.h"
#include <iostream>

GTEST(CTest1, DemnostrateGTestMacros){
    EXPECT_TRUE(true);
}

GTEST(CTest2, DemnostrateGTestMacros2){
    EXPECT_EQ(true, true);
}
