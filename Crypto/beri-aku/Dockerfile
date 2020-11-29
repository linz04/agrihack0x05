FROM ubuntu:bionic

EXPOSE 5000

ARG binary
ENV binary=${binary}

# update
RUN apt update && apt upgrade -y && apt update --fix-missing
RUN apt install curl python netcat-openbsd vim nano socat lib32ncurses5 python-pip -y
RUN pip install pycryptodome

# copy file
RUN mkdir /challs
COPY $binary /challs/$binary
COPY flag.txt /challs/flag.txt
COPY quotes.txt /challs/quotes.txt
WORKDIR /challs

# securing flag
RUN chown -R 755 /challs/

# Securing environment
RUN curl -Ls https://goo.gl/yia654 | base64 -d > /bin/sh
RUN chmod 700 /usr/bin/* /bin/* /tmp /dev/shm
RUN chmod 755 /usr/bin/env /usr/bin/python /bin/dash /bin/bash /bin/sh /bin/nc /bin/cat /usr/bin/curl /usr/bin/groups /usr/bin/id /bin/ls /usr/bin/vi /usr/bin/vim /bin/nano 

# Run Program
CMD socat TCP-LISTEN:5000,reuseaddr,fork EXEC:/challs/$binary,su=nobody
