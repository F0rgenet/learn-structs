#include "rect.h"
#include <gtest/gtest.h>
#include <cmath>


TEST(RectTest, TestGetPerimeter) {
    constexpr Rect rect = { {0, 0}, 4 };
    EXPECT_FLOAT_EQ(getPerimeter(&rect), 16.0f);
}

TEST(RectTest, TestGetArea) {
    constexpr Rect rect = { {0, 0}, 4 };
    EXPECT_FLOAT_EQ(getArea(&rect), 16.0f);
}

TEST(RectTest, TestIsPointInRect) {
    constexpr Rect rect = { {0, 0}, 4 };
    constexpr Point2D pointInside = { 2, -2 };
    constexpr Point2D pointOnEdge = { 1, 0 };
    constexpr Point2D pointOutside = { 0, 1 };
    EXPECT_TRUE(isPointInRect(&rect, &pointInside));
    EXPECT_FALSE(isPointInRect(&rect, &pointOnEdge));
    EXPECT_FALSE(isPointInRect(&rect, &pointOutside));
}

TEST(RectTest, TestIsPointOnRect) {
    constexpr Rect rect = { {0, 0}, 4 };
    constexpr Point2D pointInside = { 2, -2 };
    constexpr Point2D pointOnEdge = { 1, 0 };
    constexpr Point2D pointOutside = { 0, 1 };
    EXPECT_FALSE(isPointOnRect(&rect, &pointInside));
    EXPECT_TRUE(isPointOnRect(&rect, &pointOnEdge));
    EXPECT_FALSE(isPointOnRect(&rect, &pointOutside));
}

int runRectTests() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}