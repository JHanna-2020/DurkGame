#pragma once

#include <DurkGame.hpp>
#include <vector>


class Player : public dk::Sprite {
public:
    Player(dk::RenderWindow& window, dk::Texture& texture);
    ~Player() = default;

    void process(double deltaTime) override;

private:
    std::vector<DK_KEYS> moveLeft = { DKK_a, DKK_left };
    std::vector<DK_KEYS> moveRight = { DKK_d, DKK_right };

    float speed = 450.0f;
};
