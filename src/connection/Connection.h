#ifndef _CONNECTION_H_
#define _CONNECTION_H_
#include<iostream>
#include "../buffer/Buffer_pool.h"
#include "../buffer/Buffer.h"

// Connection class represents each individual connection either
// from local client ---> proxy or proxy->Original Server.
class Connection
{
	private: 
		int sockfd; //socket of the connection, unique.
		int status; //status of the connection.
		std::string destserver; //destserver ip address.
		unsigned int destport; //destination port
		Connection *other; //Other connection which is used 
		Buffer *buffer; //Buffer to keep data ( this is needed in order to not loose data,)

	public:
		int open_connection(); //method to open connection to the other end (on new connection request)
		int close_connection(); // Methos to close connection.
		int process_packet(); //Process the data packet.
		int set_sockfd(int sock); // Setters
		int set_destserver(std::string *dest);
		int set_destport(unsigned int destport);
		int set_status(int status);
		int set_otherConnection(Connection *conn);
		int get_status();
		unsigned get_destport(); //getters
		std::string get_destserver();
		Connection * get_otherConnection();
		int get_sockfd();
};
#endif //CONNECTION_H
