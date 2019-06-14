# OSIRRC Docker Image for Entity Retrieval

This docker runs the entity retrieval task on the following models : 

 - "lm",
 - "mlm",
 -"mlm-tc", "mlm-all", "prms", "sdm", "fsdm","lm_elr", "mlm_elr", "mlm-tc_elr", "prms_elr", "sdm_elr", "fsdm_elr"

to run this docker follow these steps:
1. docker build . 
2. ./init
3. you can either run ./index  or 
   download [TERM INDEX](https://gustav1.ux.uis.no/downloads/elr/index7_stopped.tar.bz2) and [URI INDEX] (https://gustav1.ux.uis.no/downloads/elr/index7_only_uri.tar.bz2]
)
  
   

