FROM narabzad/elr_prepared_os
COPY init init
COPY index /
COPY source.sh /
RUN ["chmod", "+x", "/index" , "/init"]
WORKDIR /work
