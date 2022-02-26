#include "Model.h"
#include "View.h"

void TestView::update(const Model& model)
{
	draw(model.getPrimitives());
}