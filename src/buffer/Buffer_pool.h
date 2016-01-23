#ifndef _BUFFER_POOL_H
#define _BUFFER_POOL_H

#include "Buffer.h"
#include<iostream>
#include<list>

// Buffer pool implemets the memory pool pattern.
// It allocates a number of buffers in advance, when the new 
// buffer request comes, available buffer from the pool is 
// returned. Else it creates a new Buffer and returns it.
class Buffer;
class Buffer_pool
{
	public:

		Buffer_pool(); 
		Buffer *get_buffer(); //Method to get a buffer from its pool.
		void  ret_buffer(Buffer *);//Method to return the buffer back to its pool.
		~Buffer_pool();
	private:
		std::list<Buffer *> pool; //list of Buffers.
};

#endif //BUFFER_POOL_H
