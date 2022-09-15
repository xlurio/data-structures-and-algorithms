compile: ./src/quick_sort.c
	gcc -g -o ./build/quick_sort ./src/quick_sort.c

debug: compile
	gdb ./build/quick_sort

test:
	cmake -S . -B build && \
	cmake --build build && \
	cd build && ctest