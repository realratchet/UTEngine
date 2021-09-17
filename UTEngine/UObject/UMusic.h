#pragma once

#include "UObject.h"

class UMusic : public UObject
{
public:
	using UObject::UObject;
	void Load(ObjectStream* stream) override;

	NameString Format;
	std::vector<uint8_t> Data;
};
