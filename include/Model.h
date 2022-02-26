#pragma once

#include "View.h"
#include "Document.h"
#include <memory>
#include <string>

using DocumentPtr = std::unique_ptr<Document>;

class Model
{
protected:
	DocumentPtr mDocument;
	ViewPtr mView;
public:
	Model(ViewPtr view) : mView(std::move(view))
	{

	}

	virtual void importDocument(const std::string& documentName) = 0;

	virtual void exportDocument(const std::string& fileName) = 0;

	virtual void createDocument() = 0;

	virtual void addPrimitive(GraphicPrimitivePtr ptr) = 0;
	virtual void deletePrimitive(GraphicPrimitivePtr ptr) = 0;

	virtual const GraphicPrimitivesContainer& getPrimitives() const = 0;
};

using ModelPtr = std::unique_ptr<Model>;

class TestModel : public Model
{

public:
	TestModel(ViewPtr view) : Model(std::move(view))
	{

	}

	void importDocument(const std::string& documentName)
	{
		//read file representation and transformate it to object
	}

	void exportDocument(const std::string& fileName)
	{
		//write object to file representation
	}

	void createDocument()
	{
		//create new object
	}

	void addPrimitive(GraphicPrimitivePtr ptr)
	{
		mDocument->addPrimitive(std::move(ptr));
	}

	void deletePrimitive(GraphicPrimitivePtr ptr)
	{
		mDocument->deletePrimitive(std::move(ptr));
	}

	const GraphicPrimitivesContainer & getPrimitives() const
	{
		return mDocument->getGraphicsPrimitives();
	}
};
