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

The following jig command can be used to install the requirements packages and index DBPedia URIs:

pass a dummy collection:
python run.py prepare \
    --repo osirrc2019/entitylinking \
    --collections [name]=[path]=[format] ...
    
    
    
    
to run this docker follow these steps:
1. Build the docker using : 
 ```
   docker build . 
   ```

2. run the docker.

```
   docker run -it IMADE_ID
```
3. run `./init`
4. run `./search`
   
   parameteres that can be modified : 
  
    valid_models = ["lm", "mlm", "mlm-tc", "mlm-all", "prms", "sdm", "fsdm",
    "lm_elr", "mlm_elr", "mlm-tc_elr", "prms_elr", "sdm_elr", "fsdm_elr"]
    
    Queries : see Query file example
    
    Entity linking threshold", default=0.1
    
    Number of fields, default=10
    
    Lambdas, comma separated values
   
