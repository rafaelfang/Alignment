/*
 * Blast.h
 *
 *  Created on: Feb 28, 2015
 *      Author: Chao
 */

#ifndef BLAST_H_
#define BLAST_H_
#include <string.h>
#include <iostream>
#include "Configuration.h"
#include <stdio.h>
#include <stdlib.h>


#define MAXSTRLEN 500
using namespace std;
class Blast {
public:

	Blast(Configuration,int v=500,int b=250,int j=1,float h=0.002,int e=10);
	void executeBlastCommand(int,int,int,float);
	void executeBlastCommand(int);
	virtual ~Blast();
private:
	Configuration configuration;
	int v;
	int b;
	int j;
	float h;
	int e;
};

#endif /* BLAST_H_ */
