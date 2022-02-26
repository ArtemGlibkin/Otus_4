#pragma once
#include "Model.h"
#include "GraphicPrimitive.h"
class Controller
{
protected:
	ModelPtr mModel;
public:
	Controller(ModelPtr ptr) : mModel(std::move(ptr))
	{

	}

	virtual void start() = 0;

	virtual void createDocumentEventHandler() = 0;
	virtual void importDocumentEventHandler(const std::string& document_name) = 0;
	virtual void exportDocumentEventHandler(const std::string& document_name) = 0;

	virtual void createGraphicalPrimitiveEventHandler(GraphicPrimitivePtr primitive) = 0;
	virtual void deleteGraphicalPrimitiveEventHandler(GraphicPrimitivePtr primitive) = 0;
};

using ControllerPtr = std::unique_ptr<Controller>;

class TestController : public Controller
{
public:

	TestController(ModelPtr ptr) : Controller(std::move(ptr))
	{

	}

	void start()
	{
		while (1)
		{
			//EventHandlerLoop
		}
	}

	void createDocumentEventHandler()
	{
		mModel->createDocument();
	}

	void importDocumentEventHandler(const std::string& document_name)
	{
		mModel->importDocument(document_name);
	}
	
	void exportDocumentEventHandler(const std::string& document_name)
	{
		mModel->exportDocument(document_name);
	}

	void createGraphicalPrimitiveEventHandler(GraphicPrimitivePtr primitive)
	{
		mModel->addPrimitive(std::move(primitive));
	}

	void deleteGraphicalPrimitiveEventHandler(GraphicPrimitivePtr primitive)
	{
		mModel->deletePrimitive(std::move(primitive));
	}
};