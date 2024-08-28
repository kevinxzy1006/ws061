#ifndef WARRIOR_H
#define WARRIOR_H

#include <string>
#include "Player.h"
using namespace std;

class Warrior : public Player
{
private:
    string weapon;

public:
    Warrior(string name, int health, int damage, string weapon);

    // getter and setter
    string get_weapon();
    void set_weapon(string weapon);

    void swingWeapon(Player *opponent);
};



Warrior::~Warrior()
{
}
#endif