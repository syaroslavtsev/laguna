/*
  Copyright 2015 Concurrent Computer Corporation

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

  http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
*/

#ifndef TCPKTGENINIT_H
#define TCPKTGENINIT_H

#ifdef __cplusplus
extern "C" {
#endif

CCUR_PROTECTED(tresult_t)
tcPktGenInitIntf(
        tc_pktgen_thread_ctxt_t*     pCntx,
        BOOL                         bTxLoad);

CCUR_PROTECTED(tresult_t)
tcPktGenConfigInitLoadableRes(
        tc_pktgen_thread_ctxt_t*    pCntx,
        tc_ldcfg_conf_t*             pLdCfg);

CCUR_PROTECTED(void)
tcPktGenInitLogOutCfgLoadStatus(
        tc_pktgen_thread_ctxt_t*      pCntx);

CCUR_PROTECTED(void)
tcPktGenLogDownStatusAndRetry(
        tc_pktgen_thread_ctxt_t*     pCntx);

#ifdef __cplusplus
}
#endif
#endif /* TCPKTGENINIT_H */
