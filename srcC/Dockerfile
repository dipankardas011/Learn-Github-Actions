FROM ubuntu

LABEL MAINTAINER="Dipankar Das"
LABEL VERSION = "v1"

COPY . /app

WORKDIR /app

RUN apt-get update && apt-get install -y gcc make

CMD [ "make", "run" ]