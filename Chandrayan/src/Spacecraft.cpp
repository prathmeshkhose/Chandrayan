#include "Spacecraft.h"

Spacecraft::Spacecraft(int startX, int startY, int startZ, const std::string& initialDirection)
    : x(startX), y(startY), z(startZ), direction(initialDirection) {}

void Spacecraft::moveForward() {
    if (direction == "N") {
        y++;
    } else if (direction == "S") {
        y--;
    } else if (direction == "E") {
        x++;
    } else if (direction == "W") {
        x--;
    } else if (direction == "Up") {
        z++;
    } else if (direction == "Down") {
        z--;
    }
}

void Spacecraft::moveBackward() {
    if (direction == "N") {
        y--;
    } else if (direction == "S") {
        y++;
    } else if (direction == "E") {
        x--;
    } else if (direction == "W") {
        x++;
    } else if (direction == "Up") {
        z--;
    } else if (direction == "Down") {
        z++;
    }
}

void Spacecraft::turnLeft() {
    if (direction == "N") {
        direction = "W";
    } else if (direction == "S") {
        direction = "E";
    } else if (direction == "E") {
        direction = "N";
    } else if (direction == "W") {
        direction = "S";
    } else if (direction == "Up" || direction == "Down") {
        // No change in horizontal direction
    }
}

void Spacecraft::turnRight() {
    if (direction == "N") {
        direction = "E";
    } else if (direction == "S") {
        direction = "W";
    } else if (direction == "E") {
        direction = "S";
    } else if (direction == "W") {
        direction = "N";
    } else if (direction == "Up" || direction == "Down") {
        // No change in horizontal direction
    }
}

void Spacecraft::turnUp() {
    if (direction == "N") {
        direction = "Up";
    } else if (direction == "S") {
        direction = "Down";
    } else if (direction == "E" || direction == "W") {
        // No change in horizontal direction
    }
}

void Spacecraft::turnDown() {
    if (direction == "N") {
        direction = "Down";
    } else if (direction == "S") {
        direction = "Up";
    } else if (direction == "E" || direction == "W") {
        // No change in horizontal direction
    }
}

void Spacecraft::processCommands(const std::vector<char>& commands) {
    for (char command : commands) {
        if (command == 'f') {
            moveForward();
        } else if (command == 'b') {
            moveBackward();
        } else if (command == 'l') {
            turnLeft();
        } else if (command == 'r') {
            turnRight();
        } else if (command == 'u') {
            turnUp();
        } else if (command == 'd') {
            turnDown();
        }
    }
}

std::vector<int> Spacecraft::getPosition() const {
    return {x, y, z};
}

std::string Spacecraft::getDirection() const {
    return direction;
}
