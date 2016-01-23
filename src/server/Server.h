#ifndef _SERVER_H_
#define _SERVER_H_
#include<map>
#include "../connection/Connection.h"

using std::string;
// Server represents an instance of the proxy server
// which listens on the port configured and also the ipaddress
// on which it binds.
class Server
{
	private:
		unsigned int port; //port on which server listens.
		unsigned int conns; //present no of connections being handled.
		unsigned int max_conns; //Maximum number of connections can be handled.
		int running; //status variable for thread communication to stop the server.
		int read_fds; //set of sockets for read events.
		int write_fds; // set of sockets for write events.
		string ipadrr; //ipaddr on which the server has to bind to.
		std::map<int, Connection*> Connections; // map of connections based on socket descriptors. 
												//Each descriptor is unique given by kernel.
		int startListen(); // Listens on the port continously, for new connections.
		int acceptNewConnection(); //Callback for new connection, creates a new connection and add it to database. 
		int addConnectiontoMap(Connection *conn); //wrapper to add connection to the map.
		int delConnectionfromMap(Connection *conn); //wrapper to delete connection to map.
		Server() {}; //make all constructors private
		Server(Server const&) {}; 
		Server& operator=(Server const&) {};

	public:
		Server(string s, unsigned int p, unsigned int c); //Constructor (only way to create this object)
		string get_ipaddr(); //getter methods.
		int get_port();
		int get_conns();
		int start(); //method to start the server.
		int stop(); //method to stop server.
};

#endif //SERVER_H
