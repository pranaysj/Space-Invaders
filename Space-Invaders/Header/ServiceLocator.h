#pragma once
#include "../Header/GraphicService.h"
#include "../Header/EventService.h"
#include "../Header/PlayerService.h"
#include "../Header/TimeService.h"


class ServiceLocator
{
private:
    // Private Attributes:
    GraphicService* graphic_service;
    EventService* event_service;
    PlayerService* player_service;
    TimeService* time_service;

    // Private Constructor and Destructor:
    ServiceLocator();
    // Constructor for initializing the ServiceLocator.
    ~ServiceLocator(); 	// Destructor for cleaning up resources upon object deletion.

    // Private Methods:
    void createServices(); 			// Creates instances of all services.
    void clearAllServices(); 		//	Deletes and deallocates memory for all services.

public:
    // Public Methods:
    static ServiceLocator* getInstance(); 			// Provides a method to access the unique ServiceLocator instance (object).
    void initialize(); 			//	Initializes the ServiceLocator.
    void update(); 				//	Updates all services.
    void render(); 				//	Renders using the services.

    // Methods to Get Specific Services: 
    GraphicService* getGraphicService();
    EventService* getEventService();
    PlayerService* getPlayerService();
    TimeService* getTimeService();
};
