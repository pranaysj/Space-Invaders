#pragma once
namespace Enemy {
	class EnemyController;
	class EnemyService {
	private:
		EnemyController* controller;
		EnemyController* spawnEnemy;

		void Destory();
	public:
		EnemyService();
		~EnemyService();

		void Initialize();
		void Update();
		void Render();

		EnemyController* SpawnEnemy();
	};
}