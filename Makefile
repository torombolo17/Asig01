fracArray: fracArray.h fracArray.cpp fracArrayClient.cpp
	g++ -o fracArray fracArray.cpp fracArrayClient.cpp
fracArray.o: fracArray.h fracArray.cpp
	g++ -c fracArray.cpp
fracArrayClient.o: fracArray.h fracArrayClient.cpp
	g++ -c fracArrayClient.cpp
