#pragma once
#include "cPiloto.h"

class cCopiloto : public cPiloto
{
private:

public:
	cCopiloto();
	~cCopiloto() {};
	
	void ComunicarConTorreDeControl();
};