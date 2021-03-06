#ifndef __HARDWARE_SPECIFIC_REGIONS_H_
<<<< include machine independent file - not this machine dependent file >>>>
#endif /* #ifndef __HARDWARE_SPECIFIC_REGIONS_H_ */
/******************************************************************************
 * K42: (C) Copyright IBM Corp. 2000.
 * All Rights Reserved
 *
 * This file is distributed under the GNU LGPL. You should have
 * received a copy of the license along with K42; see the file LICENSE.html
 * in the top-level directory for more details.
 *
 * $Id: HardwareSpecificRegions.H,v 1.3 2001/10/05 21:50:07 peterson Exp $
 *****************************************************************************/
/*****************************************************************************
 * Module Description: Defines any kernel regions needed by specific hardware.
 * **************************************************************************/
#ifdef INCLASS

private:
    static uval APICVAddr;
    static uval isInitialized;
public:
static uval GetAPICVaddr() /*{ return APICVAddr; }*/;
static uval IsInitialized();

#endif /* #ifdef INCLASS */

