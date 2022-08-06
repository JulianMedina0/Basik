#include "Window.hh"

namespace Basik {
    Window::Window(const char* title, int width, int height) {
	window = SDL_CreateWindow(title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, SDL_WINDOW_SHOWN);
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    }

    Window::~Window() {
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
    }

    void Window::SetRenderColor(Color color) {
	SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, color.a);
    }
    
    void Window::RenderRect(SDL_Rect rect) {
	SetRenderColor({255,255,255,255});
	SDL_RenderDrawRect(renderer, &rect);
    }

    void Window::Clear() {
	SetRenderColor({0,0,0,255});
	SDL_RenderClear(renderer);
    }

    void Window::Display() {
	SDL_RenderPresent(renderer);
	SDL_ShowWindow(window);
    }
}
