/*
 * GlobalTimeStandard.h
 *
 *  Created on: Dec 14, 2015
 *      Author: dupes
 */

#ifndef OADR_OADR_HELPER_GLOBALTIME_GLOBALTIMESTANDARD_H_
#define OADR_OADR_HELPER_GLOBALTIME_GLOBALTIMESTANDARD_H_

#include "IGlobalTime.h"

class GlobalTimeStandard: public IGlobalTime
{
public:
	GlobalTimeStandard();
	virtual ~GlobalTimeStandard();

	virtual time_t now();
};

#endif /* OADR_OADR_HELPER_GLOBALTIME_GLOBALTIMESTANDARD_H_ */
