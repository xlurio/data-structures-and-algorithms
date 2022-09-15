compile: ./src/selection_sort.c
	gcc -g -o ./build/selection_sort ./src/selection_sort.c

debug: compile
	gdb ./build/selection_sort

test:
	cmake -S . -B build && \
	cmake --build build && \
	cd build && ctest