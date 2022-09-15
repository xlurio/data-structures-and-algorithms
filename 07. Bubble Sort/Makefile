compile: ./src/bubble_sort.c
	gcc -g -o ./build/bubble_sort ./src/bubble_sort.c

debug: compile
	gdb ./build/bubble_sort

test:
	cmake -S . -B build && \
	cmake --build build && \
	cd build && ctest