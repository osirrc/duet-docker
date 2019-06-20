# OSIRRC Docker Image for Entity Retrieval

[![Build Status](https://travis-ci.com/osirrc/entitylinking-docker.svg?branch=master)](https://travis-ci.com/osirrc/entitylinking-docker)


[**Negar Arabzadeh**](https://github.com/narabzad/)


This is the docker image for the Entity Retrieval conforming to the [OSIRRC jig](https://github.com/osirrc/jig/) for the [Open-Source IR Replicability Challenge (OSIRRC) at SIGIR 2019](https://osirrc.github.io/osirrc2019/).
This image is available on [Docker Hub](https://hub.docker.com/r/osirrc2019/entitylinking).
The [OSIRRC 2019 image library](https://github.com/osirrc/osirrc2019-library) contains a log of successful executions of this image.

+ Supported test collections: 
+ Supported hooks: `init`, `search`

## Quick Start

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

pass a dummy collection, this collection is not used in this docker :
```
python3 run.py prepare \
    --repo osirrc2019/entitylinking \
    --collections [name]=[path]=[format] 
```

For example :
```
python3 run.py prepare \
    --repo osirrc2019/entitylinking \
    --collections robust04=path/to/robust004=trecweb 
```

The following jig command can be used to perform an entity retrieval run on the DBPedia collection:
```
python run.py search \
  --repo osirrc2019/entitylinking \
  --output out/entitylinking \
  --qrels path/to/qrels \
  --topic path/to/queries.json \
  --collection collection_name \
  --opts model=model_name threshold=Entity_linking_threshold nfields=number_of_fields lambdas=comma,seperated,values,lambdas annotation=path/to/annotaion/file
```
 For example:
```
python run.py search \
  --repo osirrc2019/entitylinking \
  --output out/entitylinking \
  --qrels entitylinking-docker/qrels \
  --topic entitylinking-docker/queries.json \
  --collection robust04 \
  --opts model=lm
``` 
    
  Acceptable values that can be modified : 
  
   - valid_models 
   
     ["lm", "mlm", "mlm-tc", "mlm-all", "prms", "sdm", "fsdm","lm_elr", "mlm_elr", "mlm-tc_elr", "prms_elr", "sdm_elr", "fsdm_elr"]
    
  -  Queries : Directory to json query file. Ssee Query file example
    
  - Annotarion : Directory to annotaion file. See Tag me annotaion file example  
  
  -  Entity linking threshold:
  a float number, default=0.1
    
  -  Number of fields
  an integer number, default=10
    
   - Lambdas
   comma separated values for lambdas mentioned in the paper [paper](http://hasibi.com/files/ictir2016-elr.pdf) 
   
## Expected Results

## Refrences
F. Hasibi, K. Balog, and S.E. Bratsberg. “Exploiting Entity Linking in Queries for Entity Retrieval”,
In proceedings of ACM SIGIR International Conference on the Theory of Information Retrieval (ICTIR ’16), Newark, DE, USA, Sep 2016.
