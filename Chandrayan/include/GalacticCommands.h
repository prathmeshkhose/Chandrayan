#ifndef GALACTICCOMMANDS_H
#define GALACTICCOMMANDS_H

#include <vector>

class GalacticCommands {
public:
    static bool isValidCommand(char command);
    static std::vector<char> parseCommands(const std::string& commandsString);
};

#endif // GALACTICCOMMANDS_H
