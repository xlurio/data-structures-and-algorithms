compile: ./src/merge_sort.c
	gcc -g -o ./build/merge_sort ./src/merge_sort.c

debug: compile
	gdb ./build/merge_sort

test:
	cmake -S . -B build && \
	cmake --build build && \
	cd build && ctest