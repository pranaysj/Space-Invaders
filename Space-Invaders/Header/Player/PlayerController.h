#pragma once
#include <SFML/Graphics.hpp>
#include "../Player/PlayerModel.h"
#include "../Player/PlayerView.h"


class PlayerController{
private:
	PlayerModel* playerModel;
	PlayerView* playerView;

	void ProcessPlayerInput();
	void MoveLeft();
	void MoveRight();

public:
	PlayerController();
	~PlayerController();

	void Initialize();
	void Update();
	void Render();

	Vector2f GetPlayerPosition();
};