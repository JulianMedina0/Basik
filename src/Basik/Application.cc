#include "Application.hh"

#include "Scene.hh"

namespace Basik {
    Application* Application::instance = nullptr;

    Application::Application()
	: window(Window("Basik", 800, 600))
    {
	instance = this;
    }

    Application::~Application() {
    }

    void Application::PushScene(Scene *scene) {
	scenes.push_back(scene);
    }

    void Application::PopScene() {
	scenes.pop_back();
    }

    void Application::EventHandling() {
	while(SDL_PollEvent(&e)) {
	    switch(e.type) {
		case SDL_QUIT:
		    quit = true;
		    break;
		default:
		    break;
	    }
	    scenes.back()->EventHandling();
	}
    }

    void Application::Update() {
	scenes.back()->Update();
    }

    void Application::Render() {
	window.Clear();
	scenes.back()->Render();
	window.Display();
    }

    void Application::Run() {
	while(!quit) {
	    EventHandling();
	    Update();
	    Render();

	    lasttime = SDL_GetTicks();
	    deltatime = (lasttime - currenttime) / 1000.0f;
	    currenttime = lasttime;
	}
    }
}
