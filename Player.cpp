#include <iostream>
#include "Player.h"

using namespace std;

Player::Player(string name, int health, int damage) : name(name), health(health), damage(damage)
{
}

// getter and setter
string Player::getName()
{
    return name;
}
int Player::getHealth()
{
    return health;
}
int Player::get_damage()
{
    return damage;
}
void Player::setName(string name)
{
    this->name = name;
}
void Player::setHealth(int health)
{
    this->health = health;
}
void Player::setDamage(int damage)
{
    this->damage = damage;
}

void Player::attack(Player *opponent, int damage)
{
    opponent->health -= damage;
}

void Player::takeDamage(int damage)
{
    std::cout << name << " takes " << damage << " damage. Remaining health: " << health << "\n";
}
