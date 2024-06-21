#pragma once
#include <SFML/Graphics.hpp>
#include "../../Header/Player/PlayerController.h"
using namespace sf;

class PlayerView{
	private:

		PlayerController *playerController;

		const String playerTexturePath = "assets/textures/player_ship.png";
		const float playerSpriteWidth = 60.0f;
		const float playerSpriteHeigh = 60.0f;

		RenderWindow *gameWindow;

		Texture playerTexture;
		Sprite playerSprite;

		void InitializePlayerSprite();
		void ScalePlayerSprite();

	public:
		PlayerView();
		~PlayerView();

		void Initialize(PlayerController* controller;);
		void Update();
		void Render();
};