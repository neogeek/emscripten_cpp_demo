build:
	mkdir -p build/webgl
	emcc --bind src/main.cpp -o build/webgl/index.html

.PHONY: build
