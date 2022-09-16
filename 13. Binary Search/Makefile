compile: ./src/binary_search.c
	gcc -g -o ./build/binary_search ./src/binary_search.c

debug: compile
	gdb ./build/binary_search

test:
	cmake -S . -B build && \
	cmake --build build && \
	cd build && ctest