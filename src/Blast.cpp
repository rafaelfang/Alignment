/*
 * Blast.cpp
 *
 *  Created on: Feb 28, 2015
 *      Author: Chao
 */

#include "Blast.h"

Blast::Blast(Configuration _configuration,int _v,int _b, int _j, float _h,int _e) {
	configuration=_configuration;
	v=_v;
	b=_b;
	j=_j;
	h=_h;
	e=_e;
}
void Blast::executeBlastCommand(int e) {
	char cmd[MAXSTRLEN];
	sprintf(cmd, "%sblastpgp -i %s%s -o %squery.blaPDB -R %squery.chk -Q %squery.profile -d %s%s -e %d",
				configuration.getAlignmentToolLocation(),
				configuration.getQueryFileLocation(),configuration.getQueryFileName(),
				configuration.getExperimentLocation(),
				configuration.getExperimentLocation(),
				configuration.getExperimentLocation(),
				configuration.getDatabaseLocation(),configuration.getDatabaseName(),
				e);
			system(cmd);
	//printf("%s\n",cmd);
}


void Blast::executeBlastCommand(int v,int b,int j,float h) {
	char cmd[MAXSTRLEN];
	sprintf(cmd, "%sblastpgp -v %d -b %d -j %d -h %f -d %s%s -i %s%s -C %squery.chk -o %squery.blaNR",
				configuration.getAlignmentToolLocation(),
				v,b,j,h,
				configuration.getDatabaseLocation(),configuration.getDatabaseName(),
				configuration.getQueryFileLocation(),configuration.getQueryFileName(),
				configuration.getExperimentLocation(),configuration.getExperimentLocation()
				);
			system(cmd);
	//printf("%s\n",cmd);
}


Blast::~Blast() {
	// TODO Auto-generated destructor stub
}

