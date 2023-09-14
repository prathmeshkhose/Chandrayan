#include <gtest/gtest.h>
#include "GalacticCommands.h"

TEST(GalacticCommandsTest, IsValidCommand) {
    ASSERT_TRUE(GalacticCommands::isValidCommand('f'));
    ASSERT_TRUE(GalacticCommands::isValidCommand('b'));
    ASSERT_TRUE(GalacticCommands::isValidCommand('l'));
    ASSERT_TRUE(GalacticCommands::isValidCommand('r'));
    ASSERT_TRUE(GalacticCommands::isValidCommand('u'));
    ASSERT_TRUE(GalacticCommands::isValidCommand('d'));

    ASSERT_FALSE(GalacticCommands::isValidCommand('x')); // Invalid command
}

TEST(GalacticCommandsTest, ParseCommands) {
    std::string commandsString = "frubl";
    std::vector<char> commands = GalacticCommands::parseCommands(commandsString);

    ASSERT_EQ(5, commands.size());
    ASSERT_EQ('f', commands[0]);
    ASSERT_EQ('r', commands[1]);
    ASSERT_EQ('u', commands[2]);
    ASSERT_EQ('b', commands[3]);
    ASSERT_EQ('l', commands[4]);
}

// Add more test cases as needed for command parsing and validation

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
