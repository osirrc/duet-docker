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

pass a dummy collection:
```
python3 run.py prepare \
    --repo osirrc2019/entitylinking \
    --collections [name]=[path]=[format] 
```

The following jig command can be used to perform an entity retrieval run on the DBPedia collection:
```
python run.py search \
  --repo osirrc2019/anserini \
  --tag v0.1.1 \
  --output out/anserini \
  --qrels qrels/qrels.robust04.txt \
  --topic topics/topics.robust04.txt \
  --collection robust04 \
  --opts search_args="-bm25" out_file_name="run.bm25.robust04"
```
    
    
   parameteres that can be modified : 
  
    valid_models = ["lm", "mlm", "mlm-tc", "mlm-all", "prms", "sdm", "fsdm",
    "lm_elr", "mlm_elr", "mlm-tc_elr", "prms_elr", "sdm_elr", "fsdm_elr"]
    
    Queries : see Query file example
    
    Entity linking threshold", default=0.1
    
    Number of fields, default=10
    
    Lambdas, comma separated values
   
