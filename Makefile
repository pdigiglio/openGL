
LIBS = -lglut -lGL -lGLEW

helloDot: %: %.c
	gcc $< -std=gnu99 $(LIBS) -o $@ 
