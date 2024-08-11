#pragma once
#include "bakkesmod/plugin/bakkesmodplugin.h"
#pragma comment( lib, "pluginsdk.lib" )

class EzTOLGet : public BakkesMod::Plugin::BakkesModPlugin
{
public:
	void onLoad() override;
	void onUnload() override;
};