typedef struct sShipStatus {
  uint8  rotation_angle;
  /** Sys Coordinates: x=0 & y=0 is located at top left (scan line drawing) */
  sint16 speed_x;
  sint16 speed_y;
  uint16 x_pos;
  uint16 y_pos;
  uint16 shield_points;
  uint16 armour_points;
} ShipStatus;

typedef struct sShipStats {
  uint16 acceleration;
  uint16 max_speed;
  uint16 rotation_speed;
  uint16 max_shield;
  uint16 max_armour;
} ShipStats;

typedef struct sShipBaseType {
  char* type_name;
} ShipBaseType;

typedef struct sShipInfo {
  char* name;
  ShipSprites sprites;
  ShipStats stats;
} ShipInfo;

typedef struct sCharacter {
  string  name;
  CharacterStatus status;
  Stats   *stats_table;
  System  *destination;
  Transit *transit_status;
  Mission *mission;
} Character;

typedef struct sGalaxyRegion {
  color   region_color;
  Edges   *edges;
  Systems *systems;
} GalaxyRegion;


typedef struct sSystemCoordinates {
  uint16 x;
  uint16 y;
} SystemCoordinates;

typedef struct sStarSystem {
  short int   system_id;
  string      name;
  string      description;
  Coordinates coordinates;
  
  SystemObjects    *object_list;
  HyperConnections *connection_list;
} StarSystem;

typedef struct sDockableObject {
  string      name;
  string      description;
  DockableType type;
  bitmap      image;
  uint16 x_pos;
  uint16 y_pos;
  
  TradeCenter *trade_center;
  EquipmentShop *equipment_shop;
  Shipyard *shipyard;
} DockableObject;

typedef struct sShipType {
  string name;
  string description;

  ShipAnimation *ship_animation;
} ShipType;

typedef struct sFleet {
  string name;
  Ships *ships;
  Route current_route;
} Fleet;