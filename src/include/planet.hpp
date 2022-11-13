#pragma once

#include <raylib.h>
#include <string>
#include <vector>

namespace planet {
enum class PlanetType {
    Small = 0,
    Medium = 2,
    Big = 3
};
class Planet {
 public:
    Planet(){}
    Planet(const PlanetType& type, const Vector2& pos);
    void draw();
 private:
    Vector2 pos_;
    Color color_;
    PlanetType type_;
    std::string name_;
    size_t mass_;
    size_t radius_;
    size_t velocity_;
};
class System {
 public:
    System();
    void addPlanet(const PlanetType& type, const Vector2& pos);
    void drawPlanets();
 private:
    std::vector<Planet> planets_;
};
}
