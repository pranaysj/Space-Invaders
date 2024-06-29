#pragma once
#include "../../Header/Enemy/EnemyModel.h"

namespace Enemy {
	Enemy::EnemyModel::EnemyModel()
	{
	}
	EnemyModel::~EnemyModel()
	{
	}
	void EnemyModel::Initialize(){
		enemyCurrentPositon = enemyStartRefPositon;
	}
	void EnemyModel::Update()
	{
	}
	void EnemyModel::Render()
	{
	}
	void EnemyModel::SetEnemyCurrentPositon(Vector2f _posiiton){
		enemyCurrentPositon = _posiiton;
	}
	Vector2f EnemyModel::GetEnemyCurrentPositon() {
		return enemyCurrentPositon;
	}

	void EnemyModel::SetEnemyStartRefPositon(Vector2f _posiiton) {
		enemyStartRefPositon = _posiiton;
	}

	Vector2f Enemy::EnemyModel::GetenemyStartRefPositon()
	{
		return enemyStartRefPositon;;
	}
}