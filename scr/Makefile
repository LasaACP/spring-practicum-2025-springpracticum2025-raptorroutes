all: main

CXX = g++
# override CXXFLAGS += -g -Wmost -Werror

SRCS 	 = $(shell find -name '.ccls-cache' -type d -prune -o -type f -name '*.cpp' -print | sed -e 's/ /\\ /g')
HEADERS  = $(shell find -name '.ccls-cache' -type d -prune -o -type f -name '*.h' -print)

main: $(SRCS) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o "$@"

main-debug: $(SRCS) $(HEADERS)
	$(CXX) $(CXXFLAGS) -U_FORTIFY_SOURCE -O0 $(SRCS) -o "$@"

main-test: $(SRCStest) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(SRCStest) -o "$@"
clean:
	rm -f main main-debug