#ifndef HEADER1_H
#define HEADER1_H

#define CONCAT( param1, param2, param3 ) STRINGIZE( param1 ## param2 ## param3 )
#define STRINGIZE(a) #a

#endif /* HEADER1_H */