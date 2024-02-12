#pragma once
#include "Define/Defines.h"

class BaseObject
{
public:
	virtual void	Update();
	virtual void	Draw();
	virtual void	GetPosition(Transform& position);
	virtual int		IsAbleDelete();
};
