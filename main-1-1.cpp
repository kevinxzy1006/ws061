#include <iostream>
#include <string>
#include "Player.h"
#include "Warrior.h"
#include "Wizard.h"

using namespace std;

int main()
{
    Warrior *warrior = new Warrior("Tom", 10, 3, "gan");
    Wizard *wizard = new Wizard("John", 8, 4, 4);

    // output the information
    cout << warrior->getName() << "has started the game." << endl;
    cout << "Player's information: " << endl;
    cout << "Name of player 1: " << warrior->getName() << "\n";
    cout << "Health of player 1: " << warrior->getHealth() << "\n";
    cout << "Damage of Player 1: " << warrior->get_damage() << "\n";
    cout << "Weapon of Player 1: " << warrior->get_weapon() << "\n";
    cout << endl;
    cout << "Name of player 2: " << wizard->getName() << "\n";
    cout << "Health of player 2: " << wizard->getHealth() << "\n";
    cout << "Damage of Player 2: " << wizard->get_damage() << "\n";
    cout << "Mana of Player 2: " << wizard->get_mana() << "\n";
    cout << endl;

    // Warrior swings weapon
    warrior->swingWeapon(wizard);

    // Wizard cast spell
    wizard->castSpell(warrior);
    
}