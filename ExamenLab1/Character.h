#pragma once

class Character{
public:
	int strength;
	int magic;
	int def;
	int magicDef;
	int hp;

	Character();
	void attack(Character);
	void cast(Character);
	virtual void special(Character);
};