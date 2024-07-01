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
		enemyMovement = MovementDirection::RIGHT;
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

	void EnemyModel::SetEnemyMovement(MovementDirection _movement){
		enemyMovement = _movement;
	}

	MovementDirection EnemyModel::GetEnemyMovement(){
		return enemyMovement;
	}

}