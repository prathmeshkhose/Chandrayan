#include <iostream>
#include "Spacecraft.h"
#include "GalacticCommands.h"

int main() {
    Spacecraft spacecraft(0, 0, 0, "N");
    std::string commandsString = "frubl";
    std::vector<char> commands = GalacticCommands::parseCommands(commandsString);

    spacecraft.processCommands(commands);

    std::vector<int> finalPosition = spacecraft.getPosition();
    std::string finalDirection = spacecraft.getDirection();

    std::cout << "Final Position: (" << finalPosition[0] << ", " << finalPosition[1] << ", " << finalPosition[2] << ")\n";
    std::cout << "Final Direction: " << finalDirection << "\n";

    return 0;
}
