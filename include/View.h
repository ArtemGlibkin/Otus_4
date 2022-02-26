#pragma once
#include <memory>
#include "GraphicPrimitive.h"
class Model;

class View
{
public:
	View() 
	{

	}

	virtual void update(const Model& mode) = 0;
};

using ViewPtr = std::unique_ptr<View>;

class TestView : public View
{
public:
	void update(const Model& model);
private:
	void draw(const GraphicPrimitivesContainer& container)
	{
		//drawPrimitives
	}
};