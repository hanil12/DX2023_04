#include "framework.h"
#include "SoundManager.h"

SoundManager* SoundManager::_instance = nullptr;
SoundManager::SoundManager()
{
	_playerAtkSound = "(�÷��̾ �����ϴ� �Ҹ�)";
	_knightAtkSound = "(��簡 �����ϴ� �Ҹ�)";
	_mageAtkSound = "(�����簡 �����ϴ� �Ҹ�)";
	_archerAtkSound = "(�ü��� �����ϴ� �Ҹ�)";
	_monsterAtkSound = "(���Ͱ� �����ϴ� �Ҹ�)";

	_createPlayerSound = "(�÷��̾ �����Ǵ� �Ҹ�)";
	_createKinghtSound = "(��簡 �����Ǵ� �Ҹ�)";
	_createMageSound = "(�����簡 �����Ǵ� �Ҹ�)";
	_createArcherSound = "(�ü��� �����Ǵ� �Ҹ�)";
	_createMonsterSound = "(���Ͱ� �����Ǵ� �Ҹ�)";

	_fireBall = "���̾� ��!!";
	_critical = "ġ��Ÿ!!";
	_miss = "������!!";
}
