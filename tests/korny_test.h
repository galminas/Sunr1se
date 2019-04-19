#ifndef KORNY_TEST_H
#define KORNY_TEST_H

#include <gtest/gtest.h>

extern "C" {
#include "myfunc.h"
}

TEST(disnull,num1){
    ASSERT_DOUBLE_EQ(korny(1,4,4,0),-2);
}

TEST(disbol,num1){
    ASSERT_DOUBLE_EQ(korny(1,4,3,1),-3);
    ASSERT_DOUBLE_EQ(korny(1,4,3,0),-1);
}

TEST(aNULL,num1){
    ASSERT_DOUBLE_EQ(korny(0,2,2,0),-1);
}

TEST(ERROR,num1){
    ASSERT_DOUBLE_EQ(korny(0,0,1,0),0.00001);
    ASSERT_DOUBLE_EQ(korny(1,1,1,1),0.00001);

}
#endif // KORNY_TEST_H
