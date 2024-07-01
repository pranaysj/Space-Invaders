#pragma once
#include"../../Header/Enemy/EnemyService.h"
#include"../../Header/Enemy/EnemyController.h"
#include "../../Header/Global/ServiceLocator.h"
#include "../../Header/Time/TimeService.h"

namespace Enemy {
	using namespace Time;
	using namespace Global;

	void EnemyService::UpdateSpawnTimer(){
		spwanTimer += ServiceLocator::GetInstance()->GetTimeService()->GetDeltaTime();
	}

	void EnemyService::ProcessEnemySpawn(){
		if (spwanTimer >= spawnInterval) {
			SpawnEnemy();
			spwanTimer = 0;
		}
	}

	void EnemyService::Destory(){
		/*delete(controller);
		delete(spawnEnemy);*/
		for (int i = 0; i < enemyList.size(); i++)
		{
			delete(enemyList[i]);
		}
	}

	EnemyService::EnemyService(){
	}

	EnemyService::~EnemyService(){
		Destory();
	}

	void EnemyService::Initialize(){
		spwanTimer = spawnInterval;
	}

	void EnemyService::Update(){
		/*Detect the GameState then Update*/

		UpdateSpawnTimer();
		ProcessEnemySpawn();

		for (int i = 0; i < enemyList.size(); i++)
		{
			enemyList[i]->Update();
		}
	}

	void EnemyService::Render(){
		/*Detect the GameState then Render*/
		for (int i = 0; i < enemyList.size(); i++)
		{
			enemyList[i]->Render();
		}
	}

	void EnemyService::SpawnEnemy(){
		EnemyController* enemyController = new EnemyController();
		enemyController->Initialize();

		enemyList.push_back(enemyController);
	}
}