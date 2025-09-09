
FROM scratch
COPY mem-leak /usr/bin/mem-leak
CMD ["/usr/bin/mem-leak"]
