#ifndef ROOM_H
#define ROOM_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "VisualInstance.hpp"


namespace godot {

class Room;


class GD_CPP_BINDING_API Room : public VisualInstance {
public:

	void _init();



	void set_room(const Room *room);
	Room *get_room() const;
};

}
#endif
