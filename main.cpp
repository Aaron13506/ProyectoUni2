#include <iostream>
#include <cmath>

bool isEqual(double a, double b, double epsilon = 1e-6) {
    return fabs(a - b) < epsilon;
}

int main() {
    int life, maxElement, maxLife;
    double trap1, trap2, trap3, trap4, trap5, trap6, trap7, trap8, trap9, trap10;
    double wall1, wall2, wall3, wall4, wall5, wall6, wall7, wall8, wall9, wall10;
    double treasure1, treasure2, treasure3, treasure4, treasure5, treasure6, treasure7, treasure8, treasure9,
            treasure10;
    double portal1_1, portal1_2, portal2_1, portal2_2, portal3_1, portal3_2, portal4_1, portal4_2, portal5_1,
            portal5_2, portal6_1, portal6_2, portal7_1, portal7_2, portal8_1, portal8_2, portal9_1, portal9_2,
            portal10_1, portal10_2;
    double characterPosition, maxHeightX, maxHeightY;
    double exit;
    int maxMoves;
    int trapCount = 0, wallCount = 0, treasureCount = 0, portalCount = 0;
    int treasureTaken = 0, trapsTaken = 0;
    double x, y;
    char elementType, actualMove;
    std::string status;
    std::cin >> life >> maxHeightX >> maxHeightY >> maxElement;
    maxLife = life;
    for (int i = 0; i < maxElement; i++) {
        std::cin >> elementType;
        switch (elementType) {
            case 'T':
                treasureCount++;
                std::cin >> x >> y;
                if (treasureCount == 1) treasure1 = (y + x * 10) / 10;
                else if (treasureCount == 2) treasure2 = (y + x * 10) / 10;
                else if (treasureCount == 3) treasure3 = (y + x * 10) / 10;
                else if (treasureCount == 4) treasure4 = (y + x * 10) / 10;
                else if (treasureCount == 5) treasure5 = (y + x * 10) / 10;
                else if (treasureCount == 6) treasure6 = (y + x * 10) / 10;
                else if (treasureCount == 7) treasure7 = (y + x * 10) / 10;
                else if (treasureCount == 8) treasure8 = (y + x * 10) / 10;
                else if (treasureCount == 9) treasure9 = (y + x * 10) / 10;
                else if (treasureCount == 10) treasure10 = (y + x * 10) / 10;
                break;
            case 'E':
                std::cin >> x >> y;
                characterPosition = (y + x * 10) / 10;
                break;
            case '#':
                wallCount++;
                std::cin >> x >> y;
                if (wallCount == 1) wall1 = (y + x * 10) / 10;
                else if (wallCount == 2) wall2 = (y + x * 10) / 10;
                else if (wallCount == 3) wall3 = (y + x * 10) / 10;
                else if (wallCount == 4) wall4 = (y + x * 10) / 10;
                else if (wallCount == 5) wall5 = (y + x * 10) / 10;
                else if (wallCount == 6) wall6 = (y + x * 10) / 10;
                else if (wallCount == 7) wall7 = (y + x * 10) / 10;
                else if (wallCount == 8) wall8 = (y + x * 10) / 10;
                else if (wallCount == 9) wall9 = (y + x * 10) / 10;
                else if (wallCount == 10) wall10 = (y + x * 10) / 10;
                break;
            case 'P':
                portalCount++;
                if (portalCount == 1) {
                    std::cin >> x >> y;
                    portal1_1 = (y + x * 10) / 10;
                    std::cin >> x >> y;
                    portal1_2 = (y + x * 10) / 10;
                } else if (portalCount == 2) {
                    std::cin >> x >> y;
                    portal2_1 = (y + x * 10) / 10;
                    std::cin >> x >> y;
                    portal2_2 = (y + x * 10) / 10;
                } else if (portalCount == 3) {
                    std::cin >> x >> y;
                    portal3_1 = (y + x * 10) / 10;
                    std::cin >> x >> y;
                    portal3_2 = (y + x * 10) / 10;
                } else if (portalCount == 4) {
                    std::cin >> x >> y;
                    portal4_1 = (y + x * 10) / 10;
                    std::cin >> x >> y;
                    portal4_2 = (y + x * 10) / 10;
                } else if (portalCount == 5) {
                    std::cin >> x >> y;
                    portal5_1 = (y + x * 10) / 10;
                    std::cin >> x >> y;
                    portal5_2 = (y + x * 10) / 10;
                } else if (portalCount == 6) {
                    std::cin >> x >> y;
                    portal6_1 = (y + x * 10) / 10;
                    std::cin >> x >> y;
                    portal6_2 = (y + x * 10) / 10;
                } else if (portalCount == 7) {
                    std::cin >> x >> y;
                    portal7_1 = (y + x * 10) / 10;
                    std::cin >> x >> y;
                    portal7_2 = (y + x * 10) / 10;
                } else if (portalCount == 8) {
                    std::cin >> x >> y;
                    portal8_1 = (y + x * 10) / 10;
                    std::cin >> x >> y;
                    portal8_2 = (y + x * 10) / 10;
                } else if (portalCount == 9) {
                    std::cin >> x >> y;
                    portal9_1 = (y + x * 10) / 10;
                    std::cin >> x >> y;
                    portal9_2 = (y + x * 10) / 10;
                } else if (portalCount == 10) {
                    std::cin >> x >> y;
                    portal10_1 = (y + x * 10) / 10;
                    std::cin >> x >> y;
                    portal10_2 = (y + x * 10) / 10;
                }
                break;
            case 'S':
                std::cin >> x >> y;
                exit = (y + x * 10) / 10;
                break;
            case 'X':
                trapCount++;
                std::cin >> x >> y;
                if (trapCount == 1) trap1 = (y + x * 10) / 10;
                else if (trapCount == 2) trap2 = (y + x * 10) / 10;
                else if (trapCount == 3) trap3 = (y + x * 10) / 10;
                else if (trapCount == 4) trap4 = (y + x * 10) / 10;
                else if (trapCount == 5) trap5 = (y + x * 10) / 10;
                else if (trapCount == 6) trap6 = (y + x * 10) / 10;
                else if (trapCount == 7) trap7 = (y + x * 10) / 10;
                else if (trapCount == 8) trap8 = (y + x * 10) / 10;
                else if (trapCount == 9) trap9 = (y + x * 10) / 10;
                else if (trapCount == 10) trap10 = (y + x * 10) / 10;
                break;
            default: break;
        }
    }
    std::cin >> maxMoves;
    for (int i = 0; i <= maxMoves; i++) {
        if (i == maxMoves) {
            status = "ATRAPADO";
            break;
        }
        double lastPosition = characterPosition;
        std::cin >> actualMove;
        switch (actualMove) {
            case 's':
                characterPosition -= 1;
                break;
            case 'w':
                characterPosition += 1;
                break;
            case 'a':
                characterPosition -= 0.1;
                break;
            case 'd':
                characterPosition += 0.1;
            default: break;
        }
        if (isEqual(characterPosition, exit)) {
            if (treasureTaken == treasureCount) {
                status = "SORPRENDENTE";
                break;
            }
            status = "LOGRADO";
            break;
        }
        if (isEqual(characterPosition, wall1) || isEqual(characterPosition, wall2) ||
            isEqual(characterPosition, wall3) || isEqual(characterPosition, wall4) ||
            isEqual(characterPosition, wall5) || isEqual(characterPosition, wall6) ||
            isEqual(characterPosition, wall7) || isEqual(characterPosition, wall8) ||
            isEqual(characterPosition, wall9) || isEqual(characterPosition, wall10)) {
            characterPosition = lastPosition;
            std::cout << "Moviemiento bloqueado\n";
        } else if (static_cast<int>(characterPosition) > maxHeightX ||
                   static_cast<int>(fmod(characterPosition, 1) * 10) > maxHeightY ||
                   static_cast<int>(characterPosition) < 0 ||
                   static_cast<int>(fmod(characterPosition, 1) * 10) < 0) {
            characterPosition = lastPosition;
        } else if (isEqual(characterPosition, trap1) || isEqual(characterPosition, trap2) ||
                   isEqual(characterPosition, trap3) || isEqual(characterPosition, trap4) ||
                   isEqual(characterPosition, trap5) || isEqual(characterPosition, trap6) ||
                   isEqual(characterPosition, trap7) || isEqual(characterPosition, trap8) ||
                   isEqual(characterPosition, trap9) || isEqual(characterPosition, trap10)) {
            life -= 10;
            trapsTaken++;
            if (life <= 0) {
                status = "MUERTO";
                break;
            }
        } else if (isEqual(characterPosition, treasure1)) {
            life += 20;
            treasureTaken++;
            if (life > maxLife) life = maxLife;
            treasure1 = -1;
        } else if (isEqual(characterPosition, treasure2)) {
            life += 20;
            treasureTaken++;
            if (life > maxLife) life = maxLife;
            treasure2 = -1;
        } else if (isEqual(characterPosition, treasure3)) {
            life += 20;
            treasureTaken++;
            if (life > maxLife) life = maxLife;
            treasure3 = -1;
        } else if (isEqual(characterPosition, treasure4)) {
            life += 20;
            treasureTaken++;
            if (life > maxLife) life = maxLife;
            treasure4 = -1;
        } else if (isEqual(characterPosition, treasure5)) {
            life += 20;
            treasureTaken++;
            if (life > maxLife) life = maxLife;
            treasure5 = -1;
        } else if (isEqual(characterPosition, treasure6)) {
            life += 20;
            treasureTaken++;
            if (life > maxLife) life = maxLife;
            treasure6 = -1;
        } else if (isEqual(characterPosition, treasure7)) {
            life += 20;
            treasureTaken++;
            if (life > maxLife) life = maxLife;
            treasure7 = -1;
        } else if (isEqual(characterPosition, treasure8)) {
            life += 20;
            treasureTaken++;
            if (life > maxLife) life = maxLife;
            treasure8 = -1;
        } else if (isEqual(characterPosition, treasure9)) {
            life += 20;
            treasureTaken++;
            if (life > maxLife) life = maxLife;
            treasure9 = -1;
        } else if (isEqual(characterPosition, treasure10)) {
            life += 20;
            treasureTaken++;
            if (life > maxLife) life = maxLife;
            treasure10 = -1;
        } else if (isEqual(characterPosition, portal1_1)) {
            characterPosition = portal1_2;
        } else if (isEqual(characterPosition, portal2_1)) {
            characterPosition = portal2_2;
        } else if (isEqual(characterPosition, portal3_1)) {
            characterPosition = portal3_2;
        } else if (isEqual(characterPosition, portal4_1)) {
            characterPosition = portal4_2;
        } else if (isEqual(characterPosition, portal5_1)) {
            characterPosition = portal5_2;
        } else if (isEqual(characterPosition, portal6_1)) {
            characterPosition = portal6_2;
        } else if (isEqual(characterPosition, portal7_1)) {
            characterPosition = portal7_2;
        } else if (isEqual(characterPosition, portal8_1)) {
            characterPosition = portal8_2;
        } else if (isEqual(characterPosition, portal9_1)) {
            characterPosition = portal9_2;
        } else if (isEqual(characterPosition, portal10_1)) {
            characterPosition = portal10_2;
        } else if (isEqual(characterPosition, portal1_2)) {
            characterPosition = portal1_1;
        } else if (isEqual(characterPosition, portal2_2)) {
            characterPosition = portal2_1;
        } else if (isEqual(characterPosition, portal3_2)) {
            characterPosition = portal3_1;
        } else if (isEqual(characterPosition, portal4_2)) {
            characterPosition = portal4_1;
        } else if (isEqual(characterPosition, portal5_2)) {
            characterPosition = portal5_1;
        } else if (isEqual(characterPosition, portal6_2)) {
            characterPosition = portal6_1;
        } else if (isEqual(characterPosition, portal7_2)) {
            characterPosition = portal7_1;
        } else if (isEqual(characterPosition, portal8_2)) {
            characterPosition = portal8_1;
        } else if (isEqual(characterPosition, portal9_2)) {
            characterPosition = portal9_1;
        } else if (isEqual(characterPosition, portal10_2)) {
            characterPosition = portal10_1;
        }
    }

    std::cout << "TESOROS:" << treasureTaken << "\nTRAMPAS:" << trapsTaken << "\nVIDA:" << life << "\n" <<
            status <<
            "\n";

    return 0;
}
