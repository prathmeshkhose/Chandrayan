#include <gtest/gtest.h>
#include "Spacecraft.h"

class SpacecraftTest : public ::testing::Test {
protected:
    Spacecraft spacecraft;

    void assertPosition(int expectedX, int expectedY, int expectedZ) {
        std::vector<int> position = spacecraft.getPosition();
        ASSERT_EQ(expectedX, position[0]);
        ASSERT_EQ(expectedY, position[1]);
        ASSERT_EQ(expectedZ, position[2]);
    }

    void assertDirection(const std::string& expectedDirection) {
        ASSERT_EQ(expectedDirection, spacecraft.getDirection());
    }
};

TEST_F(SpacecraftTest, InitialPositionAndDirection) {
    assertPosition(0, 0, 0);
    assertDirection("N");
}

TEST_F(SpacecraftTest, MoveForward) {
    spacecraft.moveForward();
    assertPosition(0, 1, 0);
}

TEST_F(SpacecraftTest, MoveBackward) {
    spacecraft.moveBackward();
    assertPosition(0, -1, 0);
}

TEST_F(SpacecraftTest, TurnLeft) {
    spacecraft.turnLeft();
    assertDirection("W");
}

TEST_F(SpacecraftTest, TurnRight) {
    spacecraft.turnRight();
    assertDirection("E");
}

TEST_F(SpacecraftTest, TurnUp) {
    spacecraft.turnUp();
    assertDirection("U");
}

TEST_F(SpacecraftTest, TurnDown) {
    spacecraft.turnDown();
    assertDirection("D");
}

// Add more test cases as needed for command processing and other scenarios

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
