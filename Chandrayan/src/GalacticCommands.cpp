#include "GalacticCommands.h"

bool GalacticCommands::isValidCommand(char command) {
    // Implement validation logic for valid commands (f, b, l, r, u, d).
    // Return true if the command is valid, otherwise false.
    return (command == 'f' || command == 'b' || command == 'l' || command == 'r' || command == 'u' || command == 'd');
}

std::vector<char> GalacticCommands::parseCommands(const std::string& commandsString) {
    std::vector<char> commands;
    for (char command : commandsString) {
        // Check if the command is valid before adding it to the vector
        if (isValidCommand(command)) {
            commands.push_back(command);
        }
    }
    return commands;
}
