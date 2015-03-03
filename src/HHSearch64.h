/*
 * HHSearch64.h
 *
 *  Created on: Mar 1, 2015
 *      Author: Chao
 */

#ifndef HHSEARCH64_H_
#define HHSEARCH64_H_
#include <string.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Configuration.h"
#define MAXSTRLEN 500
class HHSearch64 {
public:
	HHSearch64(Configuration,int b=10);
	void executeAlignhits(Configuration);
	void executeHHMake(Configuration);
	void executeHHSearch(Configuration);
	void executeHHSearch(Configuration,int  );
	virtual ~HHSearch64();

private:
	Configuration configuration;
	int b;// -b <int>       minimum number of alignments in alignment list (def=10)


};

#endif /* HHSEARCH64_H_ */
