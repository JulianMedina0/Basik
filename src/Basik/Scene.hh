#pragma once

class Application;

namespace Basik {
    class Scene {
	public:
	    virtual void EventHandling() = 0;
	    virtual void Update() = 0;
	    virtual void Render() = 0;
    };
}
