
#ifndef CMDIO_H
#define CMDIO_H

#define CMD_FIFO "/dev/MiSTer_cmd"

void handle_MiSTer_cmd(int cmdfd);

int is_slave_enable();
void slave_enable(int status);

#endif
