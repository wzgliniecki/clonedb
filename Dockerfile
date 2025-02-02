FROM alpine:3.15

RUN apk update && apk add --no-cache \
    build-base \
    meson \
    ninja \
    git \
    ca-certificates \
    g++ \
    && rm -rf /var/cache/apk/*

WORKDIR /app

COPY . /app

RUN meson setup builddir
RUN meson compile -C builddir

CMD ["./builddir/CloneDB"]
