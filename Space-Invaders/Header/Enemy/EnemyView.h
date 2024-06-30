#pragma once
#include<SFML/Graphics.hpp>

namespace Enemy {
	using namespace sf;

	class EnemyController;

	class EnemyView {
	private:
		EnemyController* enemyController;
		RenderWindow* gameWindow;

		const String enemyTexturePath = "assets/textures/Drone _1.png";
		const float enemySpriteWidth = 100.0f;
		const float enemySpriteHeigh = 100.0f;

		Texture enemyTexture;
		Sprite enemySprite;

		void InitializeEnemySprite();
		void ScaleEnemySprite();

	public:
		EnemyView();
		~EnemyView();

		void Initialize(EnemyController* _controller);
		void Update();
		void Render();
	};
}