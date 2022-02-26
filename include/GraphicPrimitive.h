#pragma once
#include <vector>
#include <memory>

class GraphicPrimitive
{
public:
	GraphicPrimitive()
	{

	}

};

using GraphicPrimitivePtr = std::unique_ptr<GraphicPrimitive>;
using GraphicPrimitivesContainer = std::vector<GraphicPrimitivePtr>;