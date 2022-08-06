#pragma once

#include "Window.hh"
#include "Scene.hh"

#include <vector>

namespace Basik {
    class Application {
	public:
	    Application();
	    ~Application();

	    void Run();

	    static Application* Get() {return instance;}
	    Window* GetWindow() {return &window;};

	    void PushScene(Scene* scene);
	    void PopScene();
	private:
	    static Application* instance;

	    std::vector<Scene*> scenes;
	    Window window;

	    void EventHandling();
	    void Update();
	    void Render();

	    bool quit;
	    SDL_Event e;
	    float deltatime;
	    unsigned int currenttime;
	    unsigned int lasttime;
    };
}
