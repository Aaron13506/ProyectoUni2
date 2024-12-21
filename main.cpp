#include <iostream>


int main() {
    int life, maxHeightX, maxHeightY, maxElement;
    int trapX1, trapX2, trapX3, trapX4, trapX5, trapX6, trapX7, trapX8, trapX9, trapX10;
    int trapY1, trapY2, trapY3, trapY4, trapY5, trapY6, trapY7, trapY8, trapY9, trapY10;
    int wallX1, wallX2, wallX3, wallX4, wallX5, wallX6, wallX7, wallX8, wallX9, wallX10;
    int wallY1, wallY2, wallY3, wallY4, wallY5, wallY6, wallY7, wallY8, wallY9, wallY10;
    int treasureX1, treasureX2, treasureX3, treasureX4, treasureX5, treasureX6, treasureX7, treasureX8, treasureX9,
            treasureX10;
    int treasureY1, treasureY2, treasureY3, treasureY4, treasureY5, treasureY6, treasureY7, treasureY8, treasureY9,
            treasureY10;
    int portalX1_1, portalX1_2, portalX2_1, portalX2_2, portalX3_1, portalX3_2, portalX4_1, portalX4_2, portalX5_1,
            portalX5_2, portalX6_1, portalX6_2, portalX7_1, portalX7_2, portalX8_1, portalX8_2, portalX9_1, portalX9_2,
            portalX10_1, portalX10_2;
    int portalY1_1, portalY1_2, portalY2_1, portalY2_2, portalY3_1, portalY3_2, portalY4_1, portalY4_2, portalY5_1,
            portalY5_2, portalY6_1, portalY6_2, portalY7_1, portalY7_2, portalY8_1, portalY8_2, portalY9_1, portalY9_2,
            portalY10_1, portalY10_2;
    int entranceX, entranceY;
    int exitX, exitY;
    int maxMoves;
    int trapCount = 0, wallCount = 0, treasureCount = 0, portalCount = 0;
    char elementType;
    std::cin >> life >> maxHeightX >> maxHeightY >> maxElement;
    for (int i = 0; i < maxElement; i++) {
        std::cin >> elementType;
        switch (elementType) {
            case 'T': //treasure
                treasureCount++;
                if (treasureCount == 1) std::cin >> treasureX1 >> treasureY1;
                else if (treasureCount == 2) std::cin >> treasureX2 >> treasureY2;
                else if (treasureCount == 3) std::cin >> treasureX3 >> treasureY3;
                else if (treasureCount == 4) std::cin >> treasureX4 >> treasureY4;
                else if (treasureCount == 5) std::cin >> treasureX5 >> treasureY5;
                else if (treasureCount == 6) std::cin >> treasureX6 >> treasureY6;
                else if (treasureCount == 7) std::cin >> treasureX7 >> treasureY7;
                else if (treasureCount == 8) std::cin >> treasureX8 >> treasureY8;
                else if (treasureCount == 9) std::cin >> treasureX9 >> treasureY9;
                else if (treasureCount == 10) std::cin >> treasureX10 >> treasureY10;
                break;
            case 'E': //entrance
                std::cin >> entranceX >> entranceY;
                break;
            case '#': //wall
                wallCount++;
                if (wallCount == 1) std::cin >> wallX1 >> wallY1;
                else if (wallCount == 2) std::cin >> wallX2 >> wallY2;
                else if (wallCount == 3) std::cin >> wallX3 >> wallY3;
                else if (wallCount == 4) std::cin >> wallX4 >> wallY4;
                else if (wallCount == 5) std::cin >> wallX5 >> wallY5;
                else if (wallCount == 6) std::cin >> wallX6 >> wallY6;
                else if (wallCount == 7) std::cin >> wallX7 >> wallY7;
                else if (wallCount == 8) std::cin >> wallX8 >> wallY8;
                else if (wallCount == 9) std::cin >> wallX9 >> wallY9;
                else if (wallCount == 10) std::cin >> wallX10 >> wallY10;
                break;
            case 'P': //Portal
                portalCount++;
                if (portalCount == 1) std::cin >> portalX1_1 >> portalY1_1 >> portalX1_2 >> portalY1_2;
                else if (portalCount == 2) std::cin >> portalX2_1 >> portalY2_1 >> portalX2_2 >> portalY2_2;
                else if (portalCount == 3) std::cin >> portalX3_1 >> portalY3_1 >> portalX3_2 >> portalY3_2;
                else if (portalCount == 4) std::cin >> portalX4_1 >> portalY4_1 >> portalX4_2 >> portalY4_2;
                else if (portalCount == 5) std::cin >> portalX5_1 >> portalY5_1 >> portalX5_2 >> portalY5_2;
                else if (portalCount == 6) std::cin >> portalX6_1 >> portalY6_1 >> portalX6_2 >> portalY6_2;
                else if (portalCount == 7) std::cin >> portalX7_1 >> portalY7_1 >> portalX7_2 >> portalY7_2;
                else if (portalCount == 8) std::cin >> portalX8_1 >> portalY8_1 >> portalX8_2 >> portalY8_2;
                else if (portalCount == 9) std::cin >> portalX9_1 >> portalY9_1 >> portalX9_2 >> portalY9_2;
                else if (portalCount == 10) std::cin >> portalX10_1 >> portalY10_1 >> portalX10_2 >> portalY10_2;
                break;
            case 'S': //exit
                std::cin >> exitX >> exitY;
                break;
            case 'X': //trap
                trapCount++;
                if (trapCount == 1) std::cin >> trapX1 >> trapY1;
                else if (trapCount == 2) std::cin >> trapX2 >> trapY2;
                else if (trapCount == 3) std::cin >> trapX3 >> trapY3;
                else if (trapCount == 4) std::cin >> trapX4 >> trapY4;
                else if (trapCount == 5) std::cin >> trapX5 >> trapY5;
                else if (trapCount == 6) std::cin >> trapX6 >> trapY6;
                else if (trapCount == 7) std::cin >> trapX7 >> trapY7;
                else if (trapCount == 8) std::cin >> trapX8 >> trapY8;
                else if (trapCount == 9) std::cin >> trapX9 >> trapY9;
                else if (trapCount == 10) std::cin >> trapX10 >> trapY10;
                break;
            default: break;
        }
    }
    std::cin >> maxMoves;

    return 0;
}
