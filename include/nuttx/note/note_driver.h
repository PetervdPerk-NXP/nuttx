/****************************************************************************
 * include/nuttx/note/note_driver.h
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

#ifndef __INCLUDE_NUTTX_NOTE_NOTE_DRIVER_H
#define __INCLUDE_NUTTX_NOTE_NOTE_DRIVER_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/****************************************************************************
 * Public Types
 ****************************************************************************/

/****************************************************************************
 * Public Function Prototypes
 ****************************************************************************/

#if defined(__KERNEL__) || defined(CONFIG_BUILD_FLAT)

/****************************************************************************
 * Name: note_initialize
 *
 * Description:
 *   Register sched note related drivers at /dev folder that can be used by
 *   an application to read or filter the note data.
 *
 * Input Parameters:
 *   None.
 *
 * Returned Value:
 *   Zero on succress. A negated errno value is returned on a failure.
 *
 ****************************************************************************/

#ifdef CONFIG_DRIVER_NOTE
int note_initialize(void);
#endif

#endif /* defined(__KERNEL__) || defined(CONFIG_BUILD_FLAT) */

#endif /* __INCLUDE_NUTTX_NOTE_NOTE_DRIVER_H */
