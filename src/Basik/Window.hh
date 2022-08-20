#pragma once

#include <SDL2/SDL.h>

namespace BK {
    struct Color{
	unsigned char r = 0, g = 0, b = 0, a = 255;
    };
    class Window {
	public:
	    Window(const char* title, int width, int height);
	    ~Window();

	    void SetRenderColor(Color color);
	    
	    void RenderRect(SDL_Rect rect);

	    void Clear();
	    void Display();
	private:
	    SDL_Window* window;
	    SDL_Renderer* renderer;
    };
}
