##############################################################################
# K42: (C) Copyright IBM Corp. 2000.
# All Rights Reserved
#
# This file is distributed under the GNU LGPL. You should have
# received a copy of the License along with K42; see the file LICENSE.html
# in the top-level directory for more details.
#
#  $Id: Makefile,v 1.12 2005/06/28 19:47:58 rosnbrg Exp $
# ############################################################################

SUBDIRS =

# set KERNEL=1 if for kernel
KERNEL=0
-include Make.config
include $(MKKITCHTOP)/lib/Makerules.kitch

default:: targets

fast::
	$(MAKE) install_targets
	cd ../.. && $(MAKE) install_targets

ifdef IN_OBJ_DIR
# ############################################################################
#  rules to be made in object directory
# ############################################################################

include $(SRC_DIR_PATH)/Make.files
CLASSES  +=
LIBCSRCS +=
SERVERS  += loadImage
#USRTARGETS  += loadImage
#TARGETS  += $(USRTARGETS)

SRCS += main.C $(SRVSRCS)

loadImage: $(OBJS)

INST_PROG = $(MKKITCHROOT)/kbin/loadImage

SERV_LIBS =
SERV_DEPS =

install_targets:: $(INST_PROG)

# ############################################################################
#  end of object directory rules
# ############################################################################
endif
