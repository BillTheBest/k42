/* ****************************************************************************
 * K42: (C) Copyright IBM Corp. 2001.
 * All Rights Reserved
 *
 * This file is distributed under the GNU LGPL. You should have
 * received a copy of the license along with K42; see the file LICENSE.html
 * in the top-level directory for more details.
 *
 * $Id: thinwire.C,v 1.1 2001/06/12 21:53:38 peterson Exp $
 *************************************************************************** */

#include "kernIncs.H"

void
enabledThinwireWrite(uval channel, const char * buf, uval length)
{
}

uval
enabledThinwireRead(uval channel, char * buf, uval length)
{
  return(0);
}

uval32
enabledThinwireSelect()
{
  return(0);
}


