#include "intersection.h"
#include <gtest/gtest.h>

TEST(IntersectionsTest, TestRectRectIntersection) {
    Rect rectA = { {0, 0}, 4 };
    Rect rectB = { {2, 2}, 4 };
    EXPECT_TRUE(checkIntersection(&rectA, &rectB));

    Rect rectC = { {5, 5}, 4 };
    EXPECT_FALSE(checkIntersection(&rectA, &rectC));
}

TEST(IntersectionsTest, TestCircleCircleIntersection) {
    Circle circleA = { {0, 0}, 5 };
    Circle circleB = { {3, 3}, 5 };
    EXPECT_TRUE(checkIntersection(&circleA, &circleB));

    Circle circleC = { {10, 10}, 5 };
    EXPECT_FALSE(checkIntersection(&circleA, &circleC));
}

TEST(IntersectionsTest, TestRectCircleIntersection) {
    Rect rectA = { {0, 0}, 4 };
    Circle circleB = { {2, 2}, 3 };
    EXPECT_TRUE(checkIntersection(&rectA, &circleB));

    Circle circleC = { {10, 10}, 3 };
    EXPECT_FALSE(checkIntersection(&rectA, &circleC));
}

int runIntersectionTests(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}