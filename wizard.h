#ifndef WIZARD_H
#define WIZARD_H

#include "Player.h"
using namespace std;

class Wizard : public Player
{
private:
    int mana;

public:
    // getter and setter
    int get_mana();
    void set_mana(int mana);

    Wizard::Wizard(string name, int health, int damage, int mana);
    void castSpell(Player *opponent);
};

#endif