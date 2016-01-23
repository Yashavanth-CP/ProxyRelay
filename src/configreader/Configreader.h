#ifndef _PARSER_H_
#define _PARSER_H_

#include<fstream>
#include<vector>
#include "../server/Server.h"

//class configreader maintains the config file path and 
//parse it.

using namespace std;
class Configreader
{
	private:
		string configfile; //config file path set to default path when not specified in command line arguements.
		fstream filehandle; //file handle to read the config file.
		Configreader() {};

	public:
		Configreader(string path); //Constructor.
		~Configreader();
		void readServers(std::vector<Server *> *s_list); //Method to read and parse the config file.
		int setConfigFile(string *conffile); //setter
		string getConfigFile(); //getter
};

#endif //PARSER_H

