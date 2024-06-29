#pragma once
#include<SFML/Graphics.hpp>

namespace Enemy {
	using namespace sf;

	enum class EnemyState {
		ALIVE,
		DEAD
	};

	class EnemyModel {
	private:
		Vector2f enemyCurrentPositon;
		Vector2f enemyStartRefPositon;
	public:
		EnemyModel();
		~EnemyModel();

		void Initialize();
		void Update();
		void Render();

		void SetEnemyCurrentPositon(Vector2f _posiiton);
		Vector2f GetEnemyCurrentPositon();
		
		void SetEnemyStartRefPositon(Vector2f _posiiton);
		Vector2f GetenemyStartRefPositon();
	};
}