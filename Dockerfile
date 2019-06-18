FROM narabzad/elr_prepared_os
COPY init init
COPY source.sh source.sh
RUN ["chmod", "+x", "/index" , "/init"]

