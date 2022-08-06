#pragma once

#include "Basik/Scene.hh"
#include "Basik/Application.hh"

class MainScene: public Basik::Scene {
    public:
	void EventHandling() override;
	void Update() override;
	void Render() override;
};
