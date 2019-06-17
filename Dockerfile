FROM ubuntu

RUN apt-get update
RUN apt-get install -y python2.7
RUN apt-get install -y python-pip

RUN apt-get install -y ant
RUN apt-get install -y g++
RUN apt-get install -y software-properties-common 
RUN apt-get update && apt-get install -y --no-install-recommends apt-utils
RUN apt-get update
RUN add-apt-repository -y ppa:webupd8team/java
RUN echo debconf shared/accepted-oracle-license-v1-1 select true | debconf-set-selections
RUN echo debconf shared/accepted-oracle-license-v1-1 seen true | debconf-set-selections
RUN apt-get update
RUN apt install -y openjdk-8-jdk openjdk-8-jre
RUN apt-get install python-dev
RUN apt-get install -y ivy 
RUN apt-get update
COPY init init
COPY index /
COPY source.sh /
WORKDIR /work
