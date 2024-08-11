#include "pch.h"
#include "EzTOLGet.h"

#include "bakkesmod\wrappers\GameEvent\TutorialWrapper.h"
#include "bakkesmod\wrappers\GameObject\BallWrapper.h"
#include "bakkesmod\wrappers\GameObject\CarWrapper.h"
using namespace std;


BAKKESMOD_PLUGIN(EzTOLGet, "BakkesModTest", "0.1", PLUGINTYPE_FREEPLAY)

void EzTOLGet::onLoad() {
	//load message
	cvarManager->log(std::string(exports.pluginName) + std::string(" version: ") + std::string(exports.pluginVersion));
}

void EzTOLGet::onUnload() {
}
