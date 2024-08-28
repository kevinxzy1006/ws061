#include <iostream>
#include <string>
#include "Warrior.h"

using namespace std;

Warrior::Warrior(string name, int health, int damage, string weapon) : Player(name, health, damage), weapon(weapon)
{
}

// Getter and setter
string Warrior::get_weapon()
{
    return weapon;
}
void Warrior::set_weapon(string weapon)
{
    this->weapon = weapon;
}

void Warrior::swingWeapon(Player *opponent)
{
    opponent->health -= get_damage();
    std::cout << name << " swings their " << weapon << " at " << opponent->getName() << "!\n";
}