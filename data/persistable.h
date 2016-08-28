#pragma once

#include "stdafx.h"
#include "persistagent.h"

class Persistable
{
public:
	Persistable(PersistAgent* persistAgent)
		:persistAgent_(persistAgent)
	{
	}
	virtual ~Persistable() {};

	virtual Persistable* clone() const = 0;
	virtual QJsonObject toJson() const = 0;
	bool save();

private:
	PersistAgent* persistAgent_;
};

