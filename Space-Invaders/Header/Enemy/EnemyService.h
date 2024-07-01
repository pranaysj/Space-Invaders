#pragma once
#include<vector>

namespace Enemy {
	class EnemyController;
	class EnemyService {
	private:
		//EnemyController* controller;
		//EnemyController* spawnEnemy;

		std::vector<EnemyController*> enemyList;

		const float spawnInterval = 2.0f;
		float spwanTimer;

		void UpdateSpawnTimer();
		void ProcessEnemySpawn();

		void Destory();
	public:
		EnemyService();
		virtual ~EnemyService();

		void Initialize();
		void Update();
		void Render();

		void SpawnEnemy();
	};
}