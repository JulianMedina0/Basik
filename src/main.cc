#include "Basik/Application.hh"

#include "MainScene.hh"

int main() {
    BK::Application app;
    app.PushScene(new MainScene);
    app.Run();
    return 0;
}
