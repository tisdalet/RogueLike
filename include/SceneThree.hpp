#ifndef SCENE_THREE_HPP
#define SCENE_THREE_HPP

#include "Scene.hpp"
#include "Game.hpp"
#include "SeekingEnemy.hpp"

class SceneThree : public Scene {
private:
    static const int platformCount = 3;
    Rectangle platforms[platformCount];
    Rectangle door;

    SeekingEnemy seekingEnemy1;
    SeekingEnemy seekingEnemy2;

    Texture2D backgroundL1;
    Texture2D backgroundL2;
    Texture2D backgroundL3;
    
    Game* game;
public:
    SceneThree(Game* game);
    ~SceneThree();
    void update() override;
    void render() override;
};


#endif