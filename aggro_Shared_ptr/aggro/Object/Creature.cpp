#include "framework.h"
#include "Creature.h"

void Creature::PrintInfo()
{
	if (!_isAlive) return;
	cout << "�̸�: " << _name << endl;
	cout << "ü��: " << _hp << endl;
	cout << "���ݷ�: " << _atk << endl;
}

void Creature::Damged(int amount, shared_ptr<Creature> attacker)
{
	if (amount <= 0 || !_isAlive)
		return;

	_hp -= amount;

	if (_hp <= 0)
	{
		cout << _name << "�� �׾����ϴ�." << endl;
		_hp = 0;
		_isAlive = false;
	}

}
