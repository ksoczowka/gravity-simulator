#include "include/planet.hpp"

#include <raylib.h>

namespace planet {
Planet::Planet(const PlanetType& type, const Vector2& pos) : type_(type), velocity_(0), pos_(pos) {
    switch(type_) {
        case PlanetType::Small:
            name_ = "Small";
            radius_ = 20;
            color_ = RED;
            break;
        case PlanetType::Medium:
            name_ = "Medium";
            radius_ = 40;
            color_ = GREEN;
            break;
        case PlanetType::Big:
            name_ = "Big";
            radius_ = 80;
            color_ = ORANGE;
            break;
    }
    mass_ = 2 * radius_;
}
void Planet::draw() {
    DrawCircle(pos_.x, pos_.y, radius_, color_);
}

System::System() {}
void System::addPlanet(const PlanetType& type, const Vector2& pos) {
    planets_.push_back(Planet(type, pos));
}
void System::drawPlanets() {
    for(auto& planet : planets_) {
        planet.draw();
    }
}
}

