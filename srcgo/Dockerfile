FROM golang:1.18

LABEL MAINTAINER="Dipankar Das"
LABEL VERSION = "v1"

COPY . /app

WORKDIR /app

RUN go build ./main.go

CMD ["./main.out"]