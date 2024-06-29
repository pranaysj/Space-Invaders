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
		Vector2f enemyStartRefPositon = Vector2f(100.0f, 0.0f);
		Vector2f enemyCurrentPositon;

	public:
		EnemyModel();
		~EnemyModel();

		void Initialize();

		void SetEnemyCurrentPositon(Vector2f _posiiton);
		Vector2f GetEnemyCurrentPositon();
		
		void SetEnemyStartRefPositon(Vector2f _posiiton);
		Vector2f GetenemyStartRefPositon();
	};
}