#pragma once
#include"../../Header/Enemy/EnemyController.h"
#include"../../Header/Enemy/EnemyModel.h"
#include"../../Header/Enemy/EnemyView.h"

namespace Enemy {
	EnemyController::EnemyController(){
		enemymodel = new EnemyModel();
		enemyView = new EnemyView();
	}

	EnemyController::~EnemyController(){
		delete(enemymodel);
		delete(enemyView);
	}

	void EnemyController::Initialize(){
		enemymodel->Initialize();
		enemyView->Initialize(this);
	}

	void EnemyController::Update(){
		enemyView->Update();
	}

	void EnemyController::Render(){
		enemyView->Render();
	}
	
	sf::Vector2f EnemyController::GetEnemyPosition(){
		return enemymodel->GetEnemyPositon();
	}
}