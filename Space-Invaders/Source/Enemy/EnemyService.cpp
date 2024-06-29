#pragma once
#include"../../Header/Enemy/EnemyService.h"
#include"../../Header/Enemy/EnemyController.h"
#include "../../Header/Global/ServiceLocator.h"

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
		controller->Initialize();
		SpawnEnemy();
	}

	void EnemyService::Update(){
		controller->Update();
	}

	void EnemyService::Render(){
		controller->Render();
	}

	EnemyController* EnemyService::SpawnEnemy(){
		return spawnEnemy = new EnemyController();
	}
}