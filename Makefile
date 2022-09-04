.PHONY: build run clean

build:
	cmake -E make_directory $(CURDIR)/build
	cmake -S . -B .\build
	cmake --build .\build --config Release -j8
#cmake -E make_directory $(CURDIR)/release
#copy .\build\Release\run.exe .\release\run.exe
run: build
	.\build\Release\playground.exe


clean:
	rmdir /s /q build
