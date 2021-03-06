#ifndef PLANESHAPE_H
#define PLANESHAPE_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Shape.hpp"


namespace godot {



class GD_CPP_BINDING_API PlaneShape : public Shape {
public:

	void _init();



	void set_plane(const Plane plane);
	Plane get_plane() const;
};

}
#endif
