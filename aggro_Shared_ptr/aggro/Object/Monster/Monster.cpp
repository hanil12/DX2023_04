#include "framework.h"
#include "Monster.h"

Monster::Monster(int hp, int atk, string name)
	:Creature(hp, atk, name)
{
	SOUND->CreMoSound();
}

void Monster::Attack(shared_ptr<Creature> other)
{
	if (!other->IsAlive()|| !IsAlive())
		return;
	cout << _name << "�� " << other->GetName() << "�� ����! ";
	SOUND->MoAtkSound();
	other->Damged(this->_atk);

	if (other->IsAlive())
		cout << other->GetName() << "�� ���� ü���� " << other->GetHP() << "�Դϴ�." << endl;
}