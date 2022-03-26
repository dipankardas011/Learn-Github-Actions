<<<<<<< HEAD
FROM ubuntu
=======
FROM ubuntu:21.04
>>>>>>> 68bad7e (Added dockerfile)

LABEL MAINTAINER="Dipankar Das"
LABEL VERSION = "v1"

COPY . /app

WORKDIR /app

RUN apt-get update && apt-get install -y gcc make

CMD [ "make", "run" ]