#ifndef SPACECRAFT_H
#define SPACECRAFT_H

#include <string>
#include <vector>

class Spacecraft {
public:
    Spacecraft(int startX, int startY, int startZ, const std::string& initialDirection);

    void moveForward();
    void moveBackward();
    void turnLeft();
    void turnRight();
    void turnUp();
    void turnDown();
    void processCommands(const std::vector<char>& commands);

    std::vector<int> getPosition() const;
    std::string getDirection() const;

private:
    int x;
    int y;
    int z;
    std::string direction;
};

#endif // SPACECRAFT_H
