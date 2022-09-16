compile: ./src/linear_search.c
	gcc -g -o ./build/linear_search ./src/linear_search.c

debug: compile
	gdb ./build/linear_search

test:
	cmake -S . -B build && \
	cmake --build build && \
	cd build && ctest