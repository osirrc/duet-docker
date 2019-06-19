FROM narabzad/elr_prepared_os
COPY init init
COPY source.sh source.sh
COPY search search
RUN ["chmod", "+x" , "/init" ,"/search"]

