#include <iostream>
#include <chrono>
#include <thread>
/*
 * Main Goal:
 * Create a text-based adventure game for the user to navigate through.
 * - uses OOP principles
 *
 */
double atk = 5, def = 5, hp = 5, spd = 5, luck = 5;
int skillPts = 5;
std::string userName;
void stats();
void newGame();
void skillAllocation();
void printTutorial();
int main() {
    printTutorial();
    std::cout << std::endl;
    std::cout << "Greetings adventurer. What would you like me to call you?" << "\n";
    std::cin >> userName;
    std::cout << "Hello! " + userName << "\n";

    skillAllocation();
    std::cout << "Are you ready to begin?" << std::endl;
    std::string userInput;
    std::cin >> userInput;
    if (userInput == "y") {
        newGame();
    }else {
        std::cout << "You are not ready to begin.\n";
        return 0;
    }
    return 0;
}
void printTutorial() {
    /*
     *  Hello adventurer! Welcome to TEXT BASED ADVENTURE TITLE, here's a few important things for you to know:
     *  1) Each user prompt is intended to be answered with a single character. ex: y = yes, n = no, a = attack
     *  2) Your stats determine how each battle goes.
     *  3) Once you make your decision, you cannot turn back.
     *  4) idk what else to put for now
     */
    std::cout << "Hello adventurer! Welcome to TEXT BASED ADVENTURE TITLE"
                 "\nHere's a few important things for you to know:" << std::endl;
    std::cout << "1) Each user prompt is intended to be answered with a single character. \n ex: y = yes, n = no, a = attack"  << std::endl;
    std::cout << "2) Your stats determine how each battle goes." << std::endl;
    std::cout << "3) Once you make your decision, you cannot turn back." << std::endl;
}

void stats() {
    std::cout << "Attack: " << atk << "\n"
    << "Defense: " << def << "\n"
    << "Health: " << hp << "\n"
    << "Speed: " << spd << "\n"
    << "Luck: " << luck << std::endl;
}
void skillAllocation() {
    while (skillPts > 0) {
        std::cout << "\r";
        std::cout << "You currently have: " << skillPts << " skill points.\n";

        std::cout << "Where would you like them allocated?\n";
        stats();
        std::string input;
        std::cin >> input;
        switch (input[0]) {
            case 'a':
                atk++;
            skillPts--;
            break;
            case 'd':
                def++;
            skillPts--;
            break;
            case 'h':
                hp++;
            skillPts--;
            break;
            case 's':
                spd++;
            skillPts--;
            break;
            case 'l':
                luck++;
            skillPts--;
            break;
            default:
                std::cout << "This is not an available skill" << std::endl;
            break;
        }
    }
}
void newGame() {
    std::cout << "You open your eyes. You smell the scent of cinnamon candles and a freshly cooked meal." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "Villager: You're up! Have some of this food to fill your stomach" << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "Would you like to eat the food?" << std::endl;
    std::string input;
    std::cin >> input;
    if (input == "y") {
        std::cout << "You eat the food happily" << std::endl;
    }else if (input == "n") {
        std::cout << "Villager: Suit yourself, it's here if you change your mind" << std::endl;
    }else {

    }

    // First Encounter
    /*
     *  wake up, talk to villager, quest to kill 10 slimes, fight, come back, report to vill
     *
     *
     */
    /*
     *  You open your eyes. You smell the scent of cinnamon candles and a freshly cooked meal.
     *  Villager: You're up! Have some of this food to fill your stomach.
     *  Prompt adventurer to eat or not.
     *  IF YES:
     *  The villager hands the food to you.
     *  IF NO:
     *  Villager: Suit yourself, it'll be here if you change your mind.
     *  Villager: Hey, would you mind doing me a favor in exchange for letting you stay here for the night?
     *  give quest to kill 10 slimes.
     *
     *
     *
     *
     *
     */

}
