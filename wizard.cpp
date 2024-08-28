#include <iostream>
#include <string>
#include "Wizard.h"

using namespace std;

Wizard::Wizard(string name, int health, int damage, int mana) : Player(name, health, damage), mana(mana) {}

// getter and setter
int Wizard::get_mana()
{
    return mana;
}
void Wizard::set_mana(int mana)
{
    this->mana = mana;
}

void Wizard::castSpell(Player *opponent)
{
    opponent->health -= get_mana();
    std::cout << name << " casts a spell on " << opponent->getName() << " for " << damage << " damage.\n";
}