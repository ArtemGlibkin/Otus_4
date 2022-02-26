#pragma once
#include "GraphicPrimitive.h"
#include <list>
#include <memory>

class Document
{
	GraphicPrimitivesContainer mPrimitives;
public:

	void addPrimitive(GraphicPrimitivePtr ptr)
	{
		mPrimitives.push_back(std::move(ptr));
	}


	void deletePrimitive(GraphicPrimitivePtr ptr)
	{

	}
	
	const GraphicPrimitivesContainer & getGraphicsPrimitives() const
	{
		return mPrimitives;
	}
};

