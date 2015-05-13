#include <GL/glew.h>
#include <GL/freeglut.h>

//#include "math_3d.h"

#include <stdio.h>
#include <stdlib.h>

	int
main ( int argc, char *argv[] ) {

    glutInit( &argc, argv);
    glutInitContextVersion( 2,0 );
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_RGBA ); 

	GLenum res = glewInit();
	if( res != GLEW_OK ) {
		fprintf( stderr, "Error: %s\n", glewGetErrorString( res ) );
		exit( EXIT_FAILURE );
	}
	return 0;
}
