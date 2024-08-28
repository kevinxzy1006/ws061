#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std;

class Player
{
public:
    string name;
    int health;
    int damage;

    // getter and setter
    string getName();
    int getHealth();
    int get_damage();
    void setName(string name);
    void setHealth(int health);
    void setDamage(int damage);

    // member function
    Player(string name, int health, int damage);
    void attack(Player *opponent, int damage);
    void takeDamage(int damage);
};

#endif