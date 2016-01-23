#ifndef _LOGGER_H_
#define _LOGGER_H_

#include<fstream> 
#include<memory>

#define MAX_SUBSCRIBERS		10

//Logger writes logs to the specified file.
//It maintains a list of subscribers and each subscriber
//sends data to the logger and logger reads and writes 
//the logs to the file. It runs inside main thread, waiting
//for data from the Subscribers.
//Each subscriber maintains a queue to the logger and 
//logger reads from the queue (Not implemted)
class Logger {
  	private:
    	std::string logFilePath; //logfile path
    	std::ofstream logFileStream; //output file stream assoicated with logfile.
    	static std::shared_ptr<Logger> _pInstance; //for singleton pattern.
    	Logger();
    	Logger(const Logger&); 
    	Logger & operator = (const Logger&);
    	int subscribers[MAX_SUBSCRIBERS]; //An array of subscribers.

    public:
    	~Logger();
    	void setLogFile(std::string);
    	std::string getLogFile() const;
    	void logWrite(std::string*); //methos to write data to file.
    	static std::shared_ptr<Logger> getLogger(); //Method to get logger instance.
    	int subScribe(); //Method to subscribe to the Logger.
    	void unSubscribe(int); //Method to Unsubscribe from a Logger.
    	void start(); //method to start the logger.
    	void stop(); //Method to stop the logger.
};
#endif //LOGGER_H
