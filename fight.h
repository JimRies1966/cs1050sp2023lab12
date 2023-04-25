#ifndef _fight_H
#define _fight_H

// Types
struct _Combatant
{
    char name[256];
    int ac;
    int hp;
    int hitbonus;
    char attack1damage[256];
    char attack2damage[256];
};
typedef struct _Combatant Combatant;

// Prototypes
void Fight(Combatant combatant1, Combatant combatant2);
void SetSeed(unsigned int seed);

#endif
