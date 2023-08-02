

HSRC=$(./*.h)

all:server client
server:server.cpp util.cpp $(HSRC)
	g++ -o $@ $^ -g

client:client.cpp util.cpp $(HSRC)
	g++ -o $@ $^ -g


clean:
	rm server client
