#ifndef Weapon_h
#define Weapon_h

#include <iostream>
#include <vector>
#include "Weapon.h"

using namespace std;

Weapon::Weapon()
{
    name = "";
    type = "";
    rarity = 0;
    damage = 0
    planet = "";
    planetRegion = "";
}

// getName()
string Weapon::getName()
{
    return name;
}
// getType()
string Weapon::getType()
{
    return type;
}
// getRarity
int Weapon::getRarity()
{
    return rarity;
}
// getDamage
string Weapon::getPlanet()
{
    return planet;
}

// getPlanetRegion
string Weapon::getPlanetRegion()
{
    return planetRegion;
}