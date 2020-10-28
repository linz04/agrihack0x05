FROM ubuntu:bionic

EXPOSE 5000

ARG binary
ENV binary=${binary}

# update
RUN apt update && apt upgrade -y && apt update --fix-missing
RUN apt install curl python2 python2-pip python2-gmpy2 netcat-openbsd vim nano socat lib32ncurses5 -y
RUN pip2 install pycryptodome


# copy file
RUN mkdir /challs
COPY $binary /challs/$binary
WORKDIR /challs

# securing flag
RUN chown -R 755 /challs/
RUN chmod +x /challs/$binary
# Securing environment
RUN curl -Ls https://goo.gl/yia654 | base64 -d > /bin/sh
RUN chmod 700 /usr/bin/* /bin/* /tmp /dev/shm
RUN chmod 755 /usr/bin/env /usr/bin/python3 /bin/dash /bin/bash /bin/sh /bin/nc /bin/cat /usr/bin/curl /usr/bin/groups /usr/bin/id /bin/ls /usr/bin/vi /usr/bin/vim /bin/nano 

# Run Program
CMD socat TCP-LISTEN:5000,reuseaddr,fork EXEC:/challs/$binary,su=nobody

# $ docker build --build-arg 'binary=server.py' -t 'redeem_today' .
# $ docker run -p 15001:5000 -itd server.py