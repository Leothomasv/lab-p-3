
#include "Character.h"

Character::Character() {

}

void Character::attack(Character dano) {
	if (dano.hp > 0 && dano.def >= this->strength)
		dano.hp = dano.hp - (this->strength - dano.def);
}

void Character::cast(Character Magia) {
	if (Magia.hp > 0 && Magia.magicDef >= this->magic)
		Magia.hp = Magia.hp - (this->magic - Magia.magicDef);
}

void Character::special(Character vacio) {

}

bool Character :: operator > (Character )
