#pragma once
#include <SFML/Graphics.hpp>

namespace Enemy {
	
	class EnemyModel;
	class EnemyView;
	enum class EnemyState;

	class EnemyController {
	private:
		EnemyModel* enemymodel;
		EnemyView* enemyView;

		void Move();
		void MoveLeft();
		void MoveRight();
		void MoveDown();

	public:
		EnemyController();
		~EnemyController();

		void Initialize();
		void Update();
		void Render();

		sf::Vector2f GetEnemyPosition();
	};
}