#include "RenderComponent.h"
#include "GameObject.h"
#include "Message.h"

/******************************************************************************************************************/
// Structors
/******************************************************************************************************************/

RenderComponent::RenderComponent(GameObject* gob)
	: GameObjectComponent("render", gob),
	_colour(1,1,1,1),
	_mesh(NULL)
{
	
}

/******************************************************************************************************************/

RenderComponent::~RenderComponent()
{

}

/******************************************************************************************************************/
// Functions
/******************************************************************************************************************/

// Setup function -- called when owner object is initialised (using its own Start method)
void RenderComponent::Start()
{

}

/******************************************************************************************************************/

// Main update function (called every frame)
void RenderComponent::Update(double deltaTime)
{

}

/******************************************************************************************************************/

// Message handler (called when message occurs)
void RenderComponent::OnMessage(Message* msg)
{

}

/******************************************************************************************************************/

// Shutdown function -- called when owner object is destroyed
void RenderComponent::End()
{

}

/******************************************************************************************************************/
