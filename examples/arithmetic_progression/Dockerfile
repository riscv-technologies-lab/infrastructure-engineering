
# Base image for our future container
FROM ubuntu:24.04

# Let's build app here for now
WORKDIR /root/app/

# Copy files from host to container
COPY ./ ./

# If dependencies need to be installed using some package manager, you first need to run update,
# since future container will be a freshly created system isolated from host, and no update from remote
# apt repositories exist
RUN apt-get update

# Install debs
RUN apt-get install -y libgtest-dev cmake build-essential

# Enter container and run command
CMD ["./build.sh"]

