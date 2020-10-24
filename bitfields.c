#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>


#define TS_BUF_LENGTH 30
#define LOG_TIME  0x01
#define LOG_DATE  0x02
#define LOG_USER  0x04
#define LOG_COUNT 0x08
#define LOG_ALL 0xFF
#define LOG_FULLTIME 0x03

void logmsg(FILE *fp, char *message, uint8_t options)
{
  static uint64_t logcount = 0;
  time_t time_val = 0;
  char timestamp[TS_BUF_LENGTH];
  char datestamp[TS_BUF_LENGTH];
  struct tm* tm_info;

  time_val = time(NULL);
  tm_info = localtime(&time_val);

  strftime(datestamp, TS_BUF_LENGTH, "%F (%a)", tm_info);
  strftime(timestamp, TS_BUF_LENGTH, "%H:%M:%S", tm_info);

  if(options & LOG_COUNT)
  {
    fprintf(fp, "%lli, ", ++logcount);
  }
  else if (options & LOG_DATE)
  {
    fprintf(fp, "%s, ", datestamp);
  }
  else if (options & LOG_USER)
  {
    fprintf(fp, "%s, ", getlogin());
  }
  else 
  {
    fprintf(fp, "%s, ", timestamp);
  }
  fprintf(fp, "%s\n, ", message);
}


int main(void) {

  logmsg(stdout, "Things are running fine", 0);
  logmsg(stdout, "Hmm..maybe not, what is this?", LOG_USER | LOG_DATE);
  logmsg(stdout, "The wheels are coming off", LOG_TIME | LOG_USER | LOG_COUNT);
  logmsg(stdout, "AAAARGH", LOG_COUNT);
  logmsg(stdout, "AAAARGH", LOG_FULLTIME);
  logmsg(stdout, "AAAARGH", LOG_ALL);
  return 0;
}
