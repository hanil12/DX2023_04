#include "framework.h"
#include "Archer.h"

Archer::Archer(int hp, int atk, string name)
	: Player(hp, atk, name)
{
	SOUND->CreASound();
	
}

void Archer::Attack(shared_ptr<Creature> other)
{
	if (!other->IsAlive() || !IsAlive())
		return;
	cout << _name << "�� " << other->GetName() << "�� ����! ";
	
	int curAtk = _atk;
	if (rand() % 10 > 6)
	{
		SOUND->CriticalSound();
		curAtk = 2 * _atk;
	}
	else
	{
		SOUND->AAtkSound();
	}

	if (other->GetType() == CreatureType::BOSS)
	{
		other->Damged(curAtk, shared_from_this());
	}
	else
	{
		other->Damged(curAtk);
	}

	if (other->IsAlive())
		cout << other->GetName() << "�� ���� ü���� " << other->GetHP() << "�Դϴ�." << endl;
}
