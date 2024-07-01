#pragma once
#include"../../Header/Enemy/EnemyController.h"
#include"../../Header/Enemy/EnemyModel.h"
#include"../../Header/Enemy/EnemyView.h"
#include"../../Header/Global/ServiceLocator.h"

namespace Enemy {

	using namespace Global;

	void EnemyController::Move(){
		switch (enemymodel->GetEnemyMovement())
		{
		case Enemy::MovementDirection::RIGHT:
			MoveRight();
			break;
		case Enemy::MovementDirection::LEFT:
			MoveLeft();
			break;
		case Enemy::MovementDirection::DOWN:
			MoveDown();
			break;
		}
	}

	void EnemyController::MoveLeft(){
		sf::Vector2f currentPositoin = enemymodel->GetEnemyPositon();

		currentPositoin.x -= enemymodel->maximumSpeed * ServiceLocator::GetInstance()->GetTimeService()->GetDeltaTime();

		if (currentPositoin.x <= enemymodel->leftMostPosition.x) {
			enemymodel->SetEnemyMovement(MovementDirection::DOWN);
			enemymodel->SetRefPositon(currentPositoin);
		}
		else
		{
			enemymodel->SetEnemyPositon(currentPositoin);
		}
	}

	void EnemyController::MoveRight(){
		sf::Vector2f currentPositoin = enemymodel->GetEnemyPositon();

		currentPositoin.x += enemymodel->maximumSpeed * ServiceLocator::GetInstance()->GetTimeService()->GetDeltaTime();

		if (currentPositoin.x >= enemymodel->rightMostPosition.x) {
			enemymodel->SetEnemyMovement(Enemy::MovementDirection::DOWN);
			enemymodel->SetRefPositon(currentPositoin);
		}
		else
		{
			enemymodel->SetEnemyPositon(currentPositoin);
		}
	}

	void EnemyController::MoveDown(){
		sf::Vector2f currentPositoin = enemymodel->GetEnemyPositon();

		currentPositoin.y += enemymodel->maximumSpeed * ServiceLocator::GetInstance()->GetTimeService()->GetDeltaTime();

		if (currentPositoin.y >= enemymodel->GetRefPositon().y + enemymodel->downwardMovement) {
			//Left or Right
			if (enemymodel->GetRefPositon().x <= enemymodel->leftMostPosition.x) {
				enemymodel->SetEnemyMovement(MovementDirection::RIGHT);
			}
			else{
				enemymodel->SetEnemyMovement(MovementDirection::LEFT);
			}
		}
		else
		{
			enemymodel->SetEnemyPositon(currentPositoin);
		}
	}
	
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
		Move();
		enemyView->Update();
	}

	void EnemyController::Render(){
		enemyView->Render();
	}
	
	sf::Vector2f EnemyController::GetEnemyPosition(){
		return enemymodel->GetEnemyPositon();
	}
}