#ifndef _CORE_H
#define _CORE_H
#include <thread>
#include "../configreader/Configreader.h"
#include "../server/Server.h"
#include "../logger/Logger.h"
// Main class of the application, responsible for initiating the application
// invokes the parser to read config file and for each server it starts a
// separate thread that listens and handles all the connections on that port.

class Core
{
	private:
		Configreader *parser; // Parser instance
		std::list<Server *> Servers; // list of servers
		std::list<std::thread> threads;//list of threads, one for each server.

	public:
		Core();
		~Core();
		int start(); //Method to start the main thread and all server threads.
		int sighandler(); // Method to handle differnet signals.
		void stop(); //Method to stop server threads and main thread.
};
#endif//CORE_H
