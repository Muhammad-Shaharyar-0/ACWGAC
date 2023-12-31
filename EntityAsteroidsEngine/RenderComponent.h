#pragma once
#include "GameObjectComponent.h"
#include "Mesh.h"
#include "Colour.h"
#include "GameObject.h"

class RenderComponent
	: public GameObjectComponent
{
	// Data
protected:
	Mesh*			_mesh;			// Vertex info
	Colour			_colour;		// Colour of object
	bool			_shouldDraw;	// Whether or not to draw

	// RenderComponent
public:
	RenderComponent(GameObject* gob);
	virtual ~RenderComponent();


	// Gets/Sets
public:
	Mesh* GetMesh()							const	{ return _mesh; }
	void SetMesh(Mesh* m)							{ _mesh = m; }

	Colour GetColour()						const	{ return _colour; }
	void SetColour(Colour c)						{ _colour = c; }

	bool ShouldDraw()						const	{ return _shouldDraw; }
	void ShouldDraw(bool v)							{ _shouldDraw = v; }

	// Get position/scale/angle etc from owner object
	Datastructers::Vector4 GetAngle()						const	{ return _owner->GetAngle(); }
	Datastructers::Vector4 GetScale()						const	{ return _owner->GetScale(); }
	Datastructers::Vector4 GetPosition()					const	{ return _owner->GetPosition(); }


	// Functions
public:

	// Setup function -- called when owner object is initialised (using its own Start method)
	virtual void Start();

	// Main update function (called every frame)
	virtual void Update(double deltaTime);

	// Message handler (called when message occurs)
	virtual void OnMessage(Message* msg);

	// Shutdown function -- called when owner object is destroyed
	virtual void End();

};