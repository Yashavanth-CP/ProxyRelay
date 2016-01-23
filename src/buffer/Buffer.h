#ifndef _BUFFER_H_
#define _BUFFER_H_

#define BUFFER_SIZE 1024*1024

//Buffer (Circular buffer) is responsible for storing connection data.
class Buffer
{
	private:
		int size; //present free space of the buffer.
		int capacity; //initialise capacity of the buffer.
		char buf[BUFFER_SIZE]; //storage space
		char *begin; //location of the available free space location
		char *tail; 

	public:
		Buffer();
		int get_capacity(); //method to get the capacity
		int Is_empty(); //method to check whether buffer is having free space.
		int Is_full(); //Method to check whether the buffer is full.
		int get_size(); //Method to get the available free buffer space.
		~Buffer();
};
#endif //BUFFER_H
