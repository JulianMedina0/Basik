#include "Basik/Application.hh"

#include "MainScene.hh"

int main() {
    Basik::Application app;
    app.PushScene(new MainScene);
    app.Run();
    return 0;
}
