#include "MainScene.hh"

#include "Basik/Application.hh"

void MainScene::EventHandling(){

}

void MainScene::Update() {

}

void MainScene::Render() {
    BK::Application::Get()->GetWindow()->RenderRect({10,10,30,30});
}
