all:main.cpp
		g++ -o output main.cpp
		./output.exe
clean:
		$(RM) output