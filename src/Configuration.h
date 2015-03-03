/*
 * Configuration.h
 *
 *  Created on: Feb 28, 2015
 *      Author: Chao
 */

#ifndef CONFIGURATION_H_
#define CONFIGURATION_H_
#include <string.h>
#include <iostream>
using namespace std;
class Configuration {
public:
	Configuration();
	Configuration(char *, char *, char *, char *, char *, char *, char *,
			char *);
	void toString();
	virtual ~Configuration();

	char * getAlignmentToolLocation();

	void setAlignmentToolLocation(char * alignmentToolLocation);

	char * getAminoSeq();

	void setAminoSeq(char * aminoSeq);

	char * getDatabaseLocation();

	void setDatabaseLocation(char * databaseLocation);

	char * getExperimentLocation();

	void setExperimentLocation(char * experimentLocation);

	char * getProteinName();

	void setProteinName(char * proteinName);

	char * getQueryFileLocation();

	void setQueryFileLocation(char * queryFileLocation);

	char * getQueryFileName();

	void setQueryFileName(char * queryFileName);

	char * getDatabaseName();

	void setDatabaseName(char * databaseName);

private:
	char * proteinName;
	char * aminoSeq;

	char * queryFileName;
	char * queryFileLocation;
	char * alignmentToolLocation;
	char * experimentLocation;
	char * databaseLocation;
	char * databaseName;

};

#endif /* CONFIGURATION_H_ */
