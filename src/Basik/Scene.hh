#pragma once

class Application;

namespace BK {
    class Scene {
	public:
	    virtual void EventHandling() = 0;
	    virtual void Update() = 0;
	    virtual void Render() = 0;
    };
}
