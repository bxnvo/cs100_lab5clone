#include "gtest/gtest.h"
#include "../header/rectangle.hpp"

TEST(ConstructorTests, testCorrectInput) { 
    EXPECT_NO_THROW (Rectangle(3,2));
}

TEST(ConstructorTests, testDefaultConst) { 
    EXPECT_NO_THROW (Rectangle());
}

TEST(ConstructorTests, testNegativeInput) { 
    EXPECT_DEATH (Rectangle(-2,4), "Width is negative");
}

TEST(AreaTests, testDefaultArea) { 
    Rectangle *aRec = new Rectangle();
    EXPECT_EQ (aRec->area(),0);
}

TEST(AreaTests, testArea) { 
    Rectangle *aRec = new Rectangle();
    aRec->set_height(4);
    aRec->set_width(3);
    EXPECT_EQ (aRec->area(),12);
}

TEST(AreaTests, testAreaConstructor) { 
    Rectangle *aRec = new Rectangle(3, 2);
    EXPECT_EQ (aRec->area(),6);
}

TEST(PerimeterTests, testDefaultPerimeter) { 
    Rectangle *pRec = new Rectangle();
    EXPECT_EQ (pRec->perimeter(),0);
}

TEST(PerimeterTests, testPerimeter) { 
    Rectangle *pRec = new Rectangle();
    pRec->set_width(6);
    pRec->set_height(3);
    EXPECT_EQ (pRec->perimeter(),18);
}

TEST(PerimeterTests, testPerimeterConstructor) { 
    Rectangle *pRec = new Rectangle(9,8);
    EXPECT_EQ (pRec->perimeter(),34);
}
