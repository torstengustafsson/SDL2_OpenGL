#pragma once

#include <memory>
#include <chrono>
#include "GameRenderer.h"
#include "GameController.h"
#include "GameEngine.h"
#include "input/inc/InputHandler.h"
#include "world/inc/GameObject.h"
#include "world/inc/Player.h"
#include "world/inc/Camera.h"

/*
* TODO: write description
*/

class Game {
public:
  Game(const int fps = 60);

  void frame();

private:

  void handleInput();
  void update();
  void render();
  void delayFramerate();

  // handles locking of framerate
  std::chrono::high_resolution_clock::time_point timer;
  const int FPS;

  // input handler handles user input such as key and mouse presses
  std::unique_ptr<InputHandler> inputHandler;

  // game controller handles game logic.
  std::unique_ptr<GameController> gameController;

  // game engine handles collisions and movement of objects
  std::unique_ptr<GameEngine> gameEngine;

  // game renderer controls SDL window and renderer
  std::unique_ptr<GameRenderer> gameRenderer;

  // the player object is passed around to handler classes so pointer type is recommended
  std::shared_ptr<Player> player;

  // camera class handles viewport (centers player on screen)
  std::unique_ptr<Camera> camera;
};