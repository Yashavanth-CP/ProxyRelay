#include "Logger.h"

std::shared_ptr<Logger> Logger::_pInstance = NULL;

Logger::Logger()
{

}

Logger::~Logger() 
{

}

std::shared_ptr<Logger> Logger::getLogger()
{

}

std::string Logger::getLogFile() const 
{
}

void Logger::setLogFile(std::string s) 
{
}

void Logger::logWrite(std::string* s)
{
}

int Logger::subScribe() 
{
}

void Logger::unSubscribe(int id) 
{
}

void Logger::stop()
{
}

void Logger::start()
{
}

