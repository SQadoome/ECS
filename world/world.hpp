#include "../entities/entity.hpp"

typedef struct {
  Entity* entities;
  unsigned long amount;
} EntityBundle;

class World {
  public:
    World();

    EntityBundle get_entities();

  private:
    Entity* entities;
};

extern const World WORLD;

