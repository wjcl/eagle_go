/*
 * copy_buffer.h
 *
 *  Created on: 2016��7��28��
 *      Author: Thinkpad-T440p
 */

#ifndef SRC_COPY_BUFFER_H_
#define SRC_COPY_BUFFER_H_

#define FRAME_HEIGHT 1080
#define FRAME_WIDTH  1920

//sys port
#pragma SDS data sys_port(input: AFI, output: AFI)
//data mover
#pragma SDS data mem_attribute(input: PHYSICAL_CONTIGUOUS|NON_CACHEABLE,output: PHYSICAL_CONTIGUOUS|NON_CACHEABLE)
#pragma SDS data copy(input[0:2073600],output[0:2073600])
//accelerator
#pragma SDS data access_pattern(input: SEQUENTIAL, output: SEQUENTIAL)

void copy_buffer(unsigned int* input, unsigned int* output);


#endif /* SRC_COPY_BUFFER_H_ */
