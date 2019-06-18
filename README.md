# OSIRRC Docker Image for Entity Retrieval

This docker runs the entity retrieval task on the following models : 

 - "lm"
 - "mlm"
 - "mlm-tc"
 - "mlm-all" 
 - "prms"
 - "sdm" 
 - "fsdm"
 - "lm_elr"
 - "mlm_elr"
 - "mlm-tc_elr"
 - "prms_elr"
 - "sdm_elr"
 - "fsdm_elr"


to run this docker follow these steps:
1. Build the docker using : 
 ```
   docker build . 
   ```

2. run the docker.

If you have the [TERM INDEX](https://gustav1.ux.uis.no/downloads/elr/index7_stopped.tar.bz2) and [URI INDEX](https://gustav1.ux.uis.no/downloads/elr/index7_only_uri.tar.bz2) on your local host then run the docker using mount volume. For example:
```
   docker run -it -v path/to/term_index:/index_dir -v path/to/uri_index:/index_dir IMADE_ID
```

Or if you want to download the indexed DBPedia terms and URI within the script you can run :
```
   docker run -it IMADE_ID
   ./index
```
3. run `./init`
   
   
