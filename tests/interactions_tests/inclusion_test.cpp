#include "inclusion.h"
#include <gtest/gtest.h>

TEST(InclusionTest, TestCircleCircleInclusion) {
    Circle circleA = { {0, 0}, 5 };
    Circle circleB = { {1, 1}, 2 };
    EXPECT_TRUE(checkInclusion(&circleA, &circleB));

    Circle circleC = { {10, 10}, 2 };
    EXPECT_FALSE(checkInclusion(&circleA, &circleC));
}

TEST(InclusionTest, TestRectRectInclusion) {
    Rect rectA = { {0, 0}, 5 };
    Rect rectB = { {1, 1}, 2 };
    EXPECT_TRUE(checkInclusion(&rectA, &rectB));

    Rect rectC = { {10, 10}, 2 };
    EXPECT_FALSE(checkInclusion(&rectA, &rectC));
}

TEST(InclusionTest, TestRectCircleInclusion) {
    Rect rectA = { {0, 0}, 5 };
    Circle circleB = { {1, 1}, 2 };
    EXPECT_TRUE(checkInclusion(&rectA, &circleB));

    Circle circleC = { {10, 10}, 2 };
    EXPECT_FALSE(checkInclusion(&rectA, &circleC));
}

TEST(InclusionTest, TestCircleRectInclusion) {
    Circle circleA = { {0, 0}, 5 };
    Rect rectB = { {1, 1}, 2 };
    EXPECT_TRUE(checkInclusion(&circleA, &rectB));

    Rect rectC = { {10, 10}, 2 };
    EXPECT_FALSE(checkInclusion(&circleA, &rectC));
}

int runInclusionTests(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}