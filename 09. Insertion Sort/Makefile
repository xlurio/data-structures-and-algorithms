compile: ./src/insertion_sort.c
	gcc -g -o ./build/insertion_sort ./src/insertion_sort.c

debug: compile
	gdb ./build/insertion_sort

test:
	cmake -S . -B build && \
	cmake --build build && \
	cd build && ctest