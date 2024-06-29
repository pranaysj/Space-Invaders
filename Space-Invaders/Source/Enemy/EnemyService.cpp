#pragma once
#include"../../Header/Enemy/EnemyService.h"
#include"../../Header/Enemy/EnemyController.h"

namespace Enemy {
	void EnemyService::Destory(){
		delete(controller);
		delete(spawnEnemy);
	}

	EnemyService::EnemyService(){
		controller = new EnemyController();
	}

	EnemyService::~EnemyService(){
		Destory();
	}

	void EnemyService::Initialize(){
		SpawnEnemy();
	}

	void EnemyService::Update(){

	}

	void EnemyService::Render(){

	}

	EnemyController* EnemyService::SpawnEnemy(){
		return spawnEnemy = new EnemyController();
	}
}