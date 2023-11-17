#include "../header/rectangle.hpp"
#include "gtest/gtest.h"


TEST(ConstructorTests, DefaultConstructor) {
    EXPECT_NO_THROW(Rectangle());

}

TEST(ConstructorTests, ParameterConstructor) {
    EXPECT_NO_THROW(Rectangle(1,2));
}

TEST(ConstructorTests, NegativeInput) {
    EXPECT_DEATH(Rectangle (-1,2), "Height is negative");
}

TEST(AreaTests, DefaultConstructor) {
    Rectangle *Test1 = new Rectangle();
    EXPECT_EQ(Test1->area(), 0);
}

TEST(AreaTests, ManualValues) {
    Rectangle *Test2 = new Rectangle();
    Test2->set_width(2);
    Test2->set_height(1);
    EXPECT_EQ(Test2->area(),2);

}

TEST(AreaTests, ParameterConstructor) {
    Rectangle *Test3 = new Rectangle (1,2);
    EXPECT_EQ(Test3->area(),2);
}

TEST(PerimeterTests, DefaultConstructor) {
    Rectangle *Test4 = new Rectangle();
    EXPECT_EQ(Test4->perimeter(), 0);

}

TEST(PerimeterTests, ManualValues) {
    Rectangle *Test5 = new Rectangle();
    Test5->set_width(2);
    Test5->set_height(1);
    EXPECT_EQ(Test5->perimeter(),6);

}

TEST(PerimeterTests, ParameterConstructor) {
    Rectangle *Test6 = new Rectangle (1,2);
    EXPECT_EQ(Test6->perimeter(),6);
}

int main () {
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}