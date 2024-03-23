#include <string>
#include <iostream>
#include <iomanip>

int main()  {
    std::string name;
    float base;
    float leaderPercent1;
    float leaderPercent2;
    float item;
    float phase1;
    float links;
    float phase2;
    float sa;
    float active;
    int finished;

    std::cout << "Input Stats and Buffs without any Symbols like %" << "\n"
              << "Input 0 if not existant" << "\n"
              << "\n";
    std::cout << "Unit Name: "; std::getline(std::cin, name);
    std::cout << "Base Stat: "; std::cin >> base;
    std::cout << "Leader Skill 1: "; std::cin >> leaderPercent1;
    std::cout << "Leader Skill 2: "; std::cin >> leaderPercent2;
    std::cout << "Item: "; std::cin >> item;
    std::cout << "Phase 1 Buffs: "; std::cin >> phase1;
    std::cout << "Links: "; std::cin >> links;
    std::cout << "Phase 2 Buffs: "; std::cin >> phase2;
    std::cout << "SA Buffs: "; std::cin >> sa;
    std::cout << "Active Skill: "; std::cin >> active;
    std::cout << "\n";

    float leader = (leaderPercent1 + leaderPercent2) / 100 + 1;
    double preDef = ((((base * leader) * ((item / 100) + 1) * ((phase1 / 100) + 1) * ((links / 100) + 1) * ((active / 100) + 1))));
    double postDef = ((((base * leader) * ((item / 100) + 1) * ((phase1 / 100) + 1) * ((links / 100) + 1) * ((phase2 / 100) + 1) * ((sa / 100) + 1) * ((active / 100) + 1))));

    std::cout << "Pre-Super Defensive Stat: " << preDef << std::endl;
    std::cout << "Final Defensive Stat: " << std::setprecision(7) << postDef << std::endl;
    std::cout << "Done?"; std::cin >> finished;
}
