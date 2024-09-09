#include "circle.h"
#include <gtest/gtest.h>
#include <cmath>

TEST(CircleTest, TestCircleArea) {
    constexpr Circle circle = { {0, 0}, 5 };
    EXPECT_FLOAT_EQ(getCircleArea(&circle), 25 * M_PI);
}

TEST(CircleTest, TestCircleLength) {
    constexpr Circle circle = { {0, 0}, 5 };
    EXPECT_FLOAT_EQ(getCircleLength(&circle), 10 * M_PI);
}

TEST(CircleTest, TestIsPointInCircle) {
    constexpr Circle circle = { {0, 0}, 5 };
    constexpr Point2D pointInside = { 2, 4 };
    constexpr Point2D pointOnCircle = { 3, 4 };
    constexpr Point2D pointOutside = { 6, 0 };
    EXPECT_TRUE(isPointInCircle(&circle, &pointInside));
    EXPECT_FALSE(isPointInCircle(&circle, &pointOnCircle));
    EXPECT_FALSE(isPointInCircle(&circle, &pointOutside));
}

TEST(CircleTest, TestIsPointOnCircle) {
    constexpr Circle circle = { {0, 0}, 5 };
    constexpr Point2D pointInside = { 2, 4 };
    constexpr Point2D pointOnCircle = { 3, 4 };
    constexpr Point2D pointOutside = { 6, 0 };
    EXPECT_FALSE(isPointOnCircle(&circle, &pointInside));
    EXPECT_TRUE(isPointOnCircle(&circle, &pointOnCircle));
    EXPECT_FALSE(isPointOnCircle(&circle, &pointOutside));
}

int runCircleTests() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}