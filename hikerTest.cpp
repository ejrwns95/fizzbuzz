#include <gtest/gtest.h>

extern "C"
{
#include "hiker.h"
}

using namespace ::testing;

//fizzbuzz test
TEST(FizzBuzz, testFizz)
{
    for(int idx = 1; idx <= 100; idx++)
    {
        //테스트 케이스 출력
        std::cout<<calcFizzBuzz(idx)<<std::endl;
    }
    
    ASSERT_EQ(7, calcFizzBuzz(7));
    ASSERT_EQ(300, calcFizzBuzz(9));
    ASSERT_EQ(500, calcFizzBuzz(20));
    ASSERT_EQ(3500, calcFizzBuzz(15));
    
    for(int idx = 1; idx <= 100; idx++)
    {
        //테스트 케이스 출력
        if(-1 == calcFizzBuzz(idx))
        {
            std::cout<<"BUG"<<std::endl;
        }
    }
    
    
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}