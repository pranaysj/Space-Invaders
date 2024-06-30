#pragma once
#include "../../Header/Enemy/EnemyModel.h"
#include <iostream>

namespace Enemy {
	Enemy::EnemyModel::EnemyModel()
	{
	}
	EnemyModel::~EnemyModel()
	{
	}
	void EnemyModel::Initialize(){
		enemyCurrentPositon = enemyStartRefPositon;
		//enemyCurrentPositon = Vector2f(100.0f,100.0f);
	}
	
	void EnemyModel::SetEnemyPositon(Vector2f _posiiton){
		enemyCurrentPositon = _posiiton;
	}
	Vector2f EnemyModel::GetEnemyPositon() {
		return enemyCurrentPositon;
	}

	void EnemyModel::SetRefPositon(Vector2f _posiiton) {
		enemyStartRefPositon = _posiiton;
	}

	Vector2f Enemy::EnemyModel::GetRefPositon()
	{
		return enemyStartRefPositon;;
	}
}