#include "framework.h"
#include "Mage.h"

Mage::Mage(int hp, int atk, string name)
	: Player(hp, atk, name)
{
	SOUND->CreMSound();
}

void Mage::Attack(shared_ptr<Creature> other)
{
	if (!other->IsAlive() || !IsAlive())
		return;
	cout << _name << "�� " << other->GetName() << "�� ����! ";

	int curAtk = _atk;
	if (_mp >= 60)
	{
		curAtk = 100;
		_mp -= 60;
		SOUND->FireBallSound();
	}
	else
	{
		SOUND->MAtkSound();
	}

	if (other->GetType() == CreatureType::BOSS)
	{
		other->Damged(curAtk, shared_from_this());
	}
	else
	{
		other->Damged(curAtk);
	}
	_mp += 40;

	if (other->IsAlive())
		cout << other->GetName() << "�� ���� ü���� " << other->GetHP() << "�Դϴ�." << endl;
}
