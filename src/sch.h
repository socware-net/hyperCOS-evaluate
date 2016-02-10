/*-****************************************************************************/
/*-                                                                           */
/*-            Copyright (c) of hyperCOS.                                     */
/*-                                                                           */
/*-  This software is copyrighted by and is the sole property of its authors. */
/*-  All rights, title, ownership, or other interests in the software remain  */
/*-  the property of the authors. The source code is for FREE short-term      */
/*-  evaluation, educational or non-commercial research only. Any commercial  */
/*-  application may only be used in accordance with the corresponding license*/
/*-  agreement. Any unauthorized use, duplication, transmission, distribution,*/
/*-  or disclosure of this software is expressly forbidden.                   */
/*-                                                                           */
/*-  Knowledge of the source code may NOT be used to develop a similar product*/
/*-                                                                           */
/*-  This Copyright notice may not be removed or modified without prior       */
/*-  written consent of the authors.                                          */
/*-                                                                           */
/*-  The authors reserves the right to modify this software                   */
/*-  without notice.                                                          */
/*-                                                                           */
/*-  To email the authors:                                                    */
/*-                                                                           */
/*-             socware.help@gmail.com                                        */
/*-                                                                           */
/*-****************************************************************************/

#ifndef SCH150904
#define SCH150904

void sch_schedule(unsigned hint);

/// critical section protection required
void sch_wake(task_t * t);

void sch_add(task_t * t);

void sch_del(task_t * t);

void sch_ts_tick(void);

void sch_init(void);

#endif
