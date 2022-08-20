#pragma once

#include "Basik/Scene.hh"

class MainScene: public BK::Scene {
    public:
	void EventHandling() override;
	void Update() override;
	void Render() override;
};
